#include "LiveSystemTypeSupportImpl.h"
#include "DataReaderListenerImpl.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/Marked_Default_Qos.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/PublisherImpl.h"
#include "ace/streams.h"
#include "orbsvcs/Time_Utilities.h"
#include "livesystem.h"

	

#ifdef _WIN32
#  define SLEEP(d) Sleep((d)*1000)
#else
#  define SLEEP(d) sleep((d))
#endif

/*Data Structure for the collection of nodes*/



#define WAIT_TIME 3
#define TIME_OUT 7

#define ACTIVE 1
#define DEAD 0

const char* REGISTER_TYPE = "livesystem_type";
const char* TOPIC_H = "heartbeat";
const char* TOPIC_A = "ack";

/*
 **   Function definitions
 */

int co_ord_id = 0;


int time_out(int n){
	return ((rand() % TIME_OUT ) + TIME_OUT + n);
}

/*Functions to modify the data structure*/
void node_clear() {
	node_t *temp = head;
	while (temp != NULL) {
		temp->state = 0;
		temp = temp->next;
	}
}


int get_head_id() {
	return head->id;
}

void printlist() {
	node_t *current = head;
	while (current != NULL) {
		printf("Node %d is in state %s\n", current->id,
				(current->state ? "ACTIVE" : "DEAD"));
		current = current->next;
	}
	printf("-------------------------------------------------------\n");
}
void node_set_active(int id) {
	node_t *temp = head;
	while (temp != NULL) {
		if (temp->id == id) {
			temp->state = ACTIVE;
		}
		temp = temp->next;
	}

}
int get_length() {
	node_t *temp = head;
	int len = 0;
	while (temp != NULL) {
		len++;
		temp = temp->next;
	}
	return len;

}
void node_join(int id, int state, long dr) {
	
	node_t *current = (node_t *) malloc(sizeof(node_t));
	current->id = id;
	current->state = state;
	current->dr = dr;
	current->next = head;
	head = current;
	number_of_nodes++;
	printf("-------------------------------------------------------\n");
	printf("Node #%d joined with dr %ld\n", current->id, current->dr);

}
void delete_node(node_t *d) {
	
	node_t *next;
	next = d->next;
	d->id = next->id;
	d->state = next->state;
	d->next = next->next;
	free(next);

}

void check_nodes() {
	
	printf("Check nodes!\n");
	node_t *temp = head;
	while (temp != NULL) {
		if (temp->state == DEAD) {
			printf("-------------------------------------------------------\n");
			printf("Node #%d died\n", temp->id);
			delete_node(temp);
			number_of_nodes--;
		}
		temp = temp->next;
	}
	printf("All Nodes checked\n");
	
}

void
DataReaderListenerImpl::on_data_available(DDS::DataReader_ptr reader)
{	
		int head_id;
 	   printf("On data available\n");
       LiveSystem::StringMsgDataReader_var reader_hb = 
        LiveSystem::StringMsgDataReader::_narrow(reader);

      if (CORBA::is_nil (reader_hb.in ())) 
      {
        cerr << "DataReaderListenerImpl:: "
             << "on_data_available:" 
             << " _narrow failed." << endl;
        ACE_OS::exit(1);
      }


      LiveSystem::StringMsg message;
      DDS::SampleInfo si;

      DDS::ReturnCode_t status = 
        reader_hb->take_next_sample(message, si) ;

      if (status == DDS::RETCODE_OK) {
       
	    if(rank != 0){
			
			if((my_id == 0 && message.dr != 20) || message.type == 1){
				//first heartbeat, send dr value
				stringMsg.type = 1;
				stringMsg.id = 0;
				stringMsg.dr = 20;
				my_id = 0;
				stringMsg.cid = message.cid;
				co_ord_id = message.cid;
				printf("Handshake signal 1 to %d\n", message.cid);


			} else {
				if(co_ord_id == message.cid){
					if(message.dr == 20){
						my_id = message.id;
					}
					stringMsg.type = 0;
					stringMsg.id = my_id;
					stringMsg.dr = 0;
					stringMsg.cid = message.cid;
					printf("%ld\n", strlen(stringMsg.msg));

					printf("Node #%d sending acknowledgement to %d..\n", stringMsg.id, stringMsg.cid);
				} else{
						
						my_id = 0;
					
				}
			}
			
			usleep(my_id * 100000);
			//StringMsgDataWriter_write(ack_writer, &stringMsg, DDS_HANDLE_NIL);


			
			alarm(time_out(my_id / 2));
			
		} else {

			//number of votes!
			if(co_ord_id == message.cid){
			

				if(message.dr == 0 && message.type == 0){
					printf("Acknowledgement received from: Node #%d\n", message.id);
					node_set_active(message.id);
					votes++;

						
				}else {
						
					head_id = get_head_id();
					node_join(head_id + 1, ACTIVE, (long)message.dr);
					stringMsg.id = head->id;
					stringMsg.dr = head->dr;
					stringMsg.type = 0;
					//StringMsgDataWriter_write(hb_writer, &stringMsg, DDS_HANDLE_NIL);

				}
			
			}

      }
  }
      else if (status == DDS::RETCODE_NO_DATA) 
      {
        cerr << "ERROR: reader received DDS::RETCODE_NO_DATA!"
             << endl;
      }
      else 
      {
        cerr << "ERROR: read Quote: Error: " 
             <<  status << endl;
      }

}
/*Signal handler to send heart beats using a timer*/

void handler(int signum) {
	/*
	*/

}

int main ( int argc , char *argv[]) {

	DDS::DomainParticipantFactory_var dpf = 
	DDS::DomainParticipantFactory::_nil();

	DDS::DomainParticipant_var participant = 
	DDS::DomainParticipant::_nil();

	    try {

		    // Initialize, and create a DomainParticipant

		    dpf = TheParticipantFactoryWithArgs(argc, argv);

		    participant = dpf->create_participant(
		      1066,
		      PARTICIPANT_QOS_DEFAULT,
		      DDS::DomainParticipantListener::_nil(),OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    if (CORBA::is_nil (participant.in ())) 
		    {
		      cerr << "create_participant failed." << endl;
		      ACE_OS::exit(1);
		    }

			// Create a publisher for the two topics
		    // (PUBLISHER_QOS_DEFAULT is defined in
		    // Marked_Default_Qos.h)
		    DDS::Publisher_var pub =participant->create_publisher(PUBLISHER_QOS_DEFAULT, 
		    	DDS::PublisherListener::_nil(),OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    if (CORBA::is_nil (pub.in ())) 
		    {
		      cerr << "create_publisher failed." << endl;
		      ACE_OS::exit(1);
		    }

		    //Create the subscriber
		    DDS::Subscriber_var sub =
    		  participant->create_subscriber(
		    		    SUBSCRIBER_QOS_DEFAULT,
		    		    DDS::SubscriberListener::_nil(),
		    		    OpenDDS::DCPS::DEFAULT_STATUS_MASK);
		
    		if (CORBA::is_nil (sub.in ())) 
    		{
    		  cerr << "create_subscriber failed." << endl;
    		  ACE_OS::exit(1);
    		}

			// Register type
		    LiveSystem::StringMsgTypeSupport_var type 
		      = new LiveSystem::StringMsgTypeSupportImpl();

		    if (DDS::RETCODE_OK != 
		          type->register_type(participant.in (),
		                                       REGISTER_TYPE)) 
		             {
		      cerr << "register_type for " << REGISTER_TYPE 
		           << " failed." << endl;
		      ACE_OS::exit(1);
		    }

	        // Get QoS to use for topic
		   
		    DDS::TopicQos default_topic_qos;
		    participant->get_default_topic_qos(default_topic_qos);

		    // Create a topic for the heartbeat
	
		    DDS::Topic_var heartbeat =
		      participant->create_topic (TOPIC_H,
		                                 REGISTER_TYPE,
		                                 default_topic_qos,
		                                 DDS::TopicListener::_nil(),
		                                 OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    if (CORBA::is_nil (heartbeat.in ())) 
		    {
		      cerr << "create_topic for " 
		           << TOPIC_H 
		           << " failed." << endl;
		      ACE_OS::exit(1);
		    }

		        // Create a topic for the acknowledgement
	
		    DDS::Topic_var ack =
		      participant->create_topic (TOPIC_A,
		                                 REGISTER_TYPE,
		                                 default_topic_qos,
		                                 DDS::TopicListener::_nil(),
		                                 OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    if (CORBA::is_nil (ack.in ())) 
		    {
		      cerr << "create_topic for " 
		           << TOPIC_A 
		           << " failed." << endl;
		      ACE_OS::exit(1);
		    }

	        // Get QoS to use for our two DataWriters
		
		    DDS::DataWriterQos dw_default_qos;
		    pub->get_default_datawriter_qos (dw_default_qos);

		    // Create a DataWriter for the heartbeat topic
		    DDS::DataWriter_var hb_writer =
		      pub->create_datawriter(heartbeat.in (),
		                             dw_default_qos,
		                             DDS::DataWriterListener::_nil(),
		                             OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    if (CORBA::is_nil (hb_writer.in ())) 
		    {
		      cerr << "create_datawriter for " 
		           << TOPIC_H 
		           << " failed." << endl;
		      ACE_OS::exit(1);
		    }

		    LiveSystem::StringMsgDataWriter_var hb_dw
		      = LiveSystem::StringMsgDataWriter::_narrow(hb_writer.in());
		    if (CORBA::is_nil (hb_dw.in ())) 
		    {
		      cerr << "StringMsgDataWriter could not be narrowed"
		           << endl;
		      ACE_OS::exit(1);
		    }

		    // Create a DataWriter for the acknowledgement topic
		    DDS::DataWriter_var ack_writer =
		      pub->create_datawriter(ack.in (),
		                             dw_default_qos,
		                             DDS::DataWriterListener::_nil(),
		                             OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    if (CORBA::is_nil (ack_writer.in ())) 
		    {
		      cerr << "create_datawriter for " 
		           << TOPIC_A 
		           << " failed." << endl;
		      ACE_OS::exit(1);
		    }

		    LiveSystem::StringMsgDataWriter_var ack_dw
		      = LiveSystem::StringMsgDataWriter::_narrow(ack_writer.in());
		    if (CORBA::is_nil (ack_dw.in ())) 
		    {
		      cerr << "StringMsgDataWriter could not be narrowed"
		           << endl;
		      ACE_OS::exit(1);
		    }


		        // Create DataReaders and DataReaderListeners for the livesystem
			
     		DDS::DataReaderListener_var listener(new DataReaderListenerImpl);   
		
		  

    		//Create datareaders

    		DDS::DataReaderQos dr_default_qos;
    		sub->get_default_datareader_qos (dr_default_qos);

    		DDS::DataReader_var hb_reader = 
      		sub->create_datareader(heartbeat.in (),
                             dr_default_qos,
                             listener,
                             OpenDDS::DCPS::DEFAULT_STATUS_MASK);

      		DDS::DataReader_var ack_reader = 
      		sub->create_datareader(ack.in (),
                             dr_default_qos,
                             listener,
                             OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		    //my_dr = (long) hb_reader;

		    
		    stringMsg.type = 0;
			stringMsg.dr = 0;
			stringMsg.id = 0;
			stringMsg.msg= "";
			printf("Election in progress....\n");	


			while (1) {
			
				/*wait here*/
			}


	    }catch (CORBA::Exception& e) {
		    cerr << "Exception caught in main.cpp:" << endl
		         << e << endl;
		    ACE_OS::exit(1);
  		}
}