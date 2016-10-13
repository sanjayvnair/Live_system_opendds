typedef struct node {
	int id;
	int state;
	long dr;
	struct node *next;

} node_t;

/*
 **   Function declarations
 */

int time_out(int);
void node_clear();
int get_head_id();
void printlist();
void node_set_active(int);
void node_join(int, int, long);
void delete_node(node_t *);
void check_nodes();

/*
 **   Globals
 */
/*DDS_DomainParticipant domain;			
DDS_Publisher publisher;				
DDS_DataWriter hb_writer;				
DDS_DataWriter ack_writer;				
DDS_Topic heartbeat;					
DDS_Topic ack;							
DDS_DataReader hb_reader;
DDS_DataReader ack_reader;
DDS_ReturnCode_t retval;*/
node_t *head;
LiveSystem::StringMsg stringMsg;

/*DDS::DomainParticipant_var participant
DDS::Publisher_var pub
DDS::DataWriter_var hb_writer
DDS::DataWriter_var ack_writer
DDS::Topic_var heartbeat
DDS::Topic_var ack*/

int number_of_nodes = 0;
int first_call = 1;
int rank = 1;
int my_id = 0;
long my_dr = 0;
int votes = 0;
