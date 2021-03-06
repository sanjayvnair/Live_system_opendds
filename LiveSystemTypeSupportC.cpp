// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p10
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:376


#include "LiveSystemTypeSupportC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "LiveSystemTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_LiveSystem_StringMsgSeq_GUARD
#define _TAO_TYPECODE_LiveSystem_StringMsgSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        LiveSystem_StringMsgSeq_0 (
          ::CORBA::tk_sequence,
          &LiveSystem::_tc_StringMsg,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_LiveSystem_StringMsgSeq_0 =
        &LiveSystem_StringMsgSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_LiveSystem_StringMsgSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_LiveSystem_StringMsgSeq (
    ::CORBA::tk_alias,
    "IDL:LiveSystem/StringMsgSeq:1.0",
    "StringMsgSeq",
    &TAO::TypeCode::tc_LiveSystem_StringMsgSeq_0);
  

namespace LiveSystem
{
  ::CORBA::TypeCode_ptr const _tc_StringMsgSeq =
    &_tao_tc_LiveSystem_StringMsgSeq;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for LiveSystem::StringMsgTypeSupport.

LiveSystem::StringMsgTypeSupport_ptr
TAO::Objref_Traits<LiveSystem::StringMsgTypeSupport>::duplicate (
    LiveSystem::StringMsgTypeSupport_ptr p)
{
  return LiveSystem::StringMsgTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<LiveSystem::StringMsgTypeSupport>::release (
    LiveSystem::StringMsgTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

LiveSystem::StringMsgTypeSupport_ptr
TAO::Objref_Traits<LiveSystem::StringMsgTypeSupport>::nil (void)
{
  return LiveSystem::StringMsgTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<LiveSystem::StringMsgTypeSupport>::marshal (
    const LiveSystem::StringMsgTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

LiveSystem::StringMsgTypeSupport::StringMsgTypeSupport (void)
{}

LiveSystem::StringMsgTypeSupport::~StringMsgTypeSupport (void)
{
}

void
LiveSystem::StringMsgTypeSupport::_tao_any_destructor (void *_tao_void_pointer)
{
  StringMsgTypeSupport *_tao_tmp_pointer =
    static_cast<StringMsgTypeSupport *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

LiveSystem::StringMsgTypeSupport_ptr
LiveSystem::StringMsgTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StringMsgTypeSupport::_duplicate (
      dynamic_cast<StringMsgTypeSupport_ptr> (_tao_objref)
    );
}

LiveSystem::StringMsgTypeSupport_ptr
LiveSystem::StringMsgTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StringMsgTypeSupport::_duplicate (
      dynamic_cast<StringMsgTypeSupport_ptr> (_tao_objref)
    );
}

LiveSystem::StringMsgTypeSupport_ptr
LiveSystem::StringMsgTypeSupport::_nil (void)
{
  return 0;
}

LiveSystem::StringMsgTypeSupport_ptr
LiveSystem::StringMsgTypeSupport::_duplicate (StringMsgTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
LiveSystem::StringMsgTypeSupport::_tao_release (StringMsgTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
LiveSystem::StringMsgTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:LiveSystem/StringMsgTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* LiveSystem::StringMsgTypeSupport::_interface_repository_id (void) const
{
  return "IDL:LiveSystem/StringMsgTypeSupport:1.0";
}

::CORBA::Boolean
LiveSystem::StringMsgTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_LiveSystem_StringMsgTypeSupport (
    ::CORBA::tk_local_interface,
    "IDL:LiveSystem/StringMsgTypeSupport:1.0",
    "StringMsgTypeSupport");
  

namespace LiveSystem
{
  ::CORBA::TypeCode_ptr const _tc_StringMsgTypeSupport =
    &_tao_tc_LiveSystem_StringMsgTypeSupport;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for LiveSystem::StringMsgDataWriter.

LiveSystem::StringMsgDataWriter_ptr
TAO::Objref_Traits<LiveSystem::StringMsgDataWriter>::duplicate (
    LiveSystem::StringMsgDataWriter_ptr p)
{
  return LiveSystem::StringMsgDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<LiveSystem::StringMsgDataWriter>::release (
    LiveSystem::StringMsgDataWriter_ptr p)
{
  ::CORBA::release (p);
}

LiveSystem::StringMsgDataWriter_ptr
TAO::Objref_Traits<LiveSystem::StringMsgDataWriter>::nil (void)
{
  return LiveSystem::StringMsgDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<LiveSystem::StringMsgDataWriter>::marshal (
    const LiveSystem::StringMsgDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

LiveSystem::StringMsgDataWriter::StringMsgDataWriter (void)
{}

LiveSystem::StringMsgDataWriter::~StringMsgDataWriter (void)
{
}

void
LiveSystem::StringMsgDataWriter::_tao_any_destructor (void *_tao_void_pointer)
{
  StringMsgDataWriter *_tao_tmp_pointer =
    static_cast<StringMsgDataWriter *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

LiveSystem::StringMsgDataWriter_ptr
LiveSystem::StringMsgDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StringMsgDataWriter::_duplicate (
      dynamic_cast<StringMsgDataWriter_ptr> (_tao_objref)
    );
}

LiveSystem::StringMsgDataWriter_ptr
LiveSystem::StringMsgDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StringMsgDataWriter::_duplicate (
      dynamic_cast<StringMsgDataWriter_ptr> (_tao_objref)
    );
}

LiveSystem::StringMsgDataWriter_ptr
LiveSystem::StringMsgDataWriter::_nil (void)
{
  return 0;
}

LiveSystem::StringMsgDataWriter_ptr
LiveSystem::StringMsgDataWriter::_duplicate (StringMsgDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
LiveSystem::StringMsgDataWriter::_tao_release (StringMsgDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
LiveSystem::StringMsgDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:LiveSystem/StringMsgDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* LiveSystem::StringMsgDataWriter::_interface_repository_id (void) const
{
  return "IDL:LiveSystem/StringMsgDataWriter:1.0";
}

::CORBA::Boolean
LiveSystem::StringMsgDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_LiveSystem_StringMsgDataWriter (
    ::CORBA::tk_local_interface,
    "IDL:LiveSystem/StringMsgDataWriter:1.0",
    "StringMsgDataWriter");
  

namespace LiveSystem
{
  ::CORBA::TypeCode_ptr const _tc_StringMsgDataWriter =
    &_tao_tc_LiveSystem_StringMsgDataWriter;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for LiveSystem::StringMsgDataReader.

LiveSystem::StringMsgDataReader_ptr
TAO::Objref_Traits<LiveSystem::StringMsgDataReader>::duplicate (
    LiveSystem::StringMsgDataReader_ptr p)
{
  return LiveSystem::StringMsgDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<LiveSystem::StringMsgDataReader>::release (
    LiveSystem::StringMsgDataReader_ptr p)
{
  ::CORBA::release (p);
}

LiveSystem::StringMsgDataReader_ptr
TAO::Objref_Traits<LiveSystem::StringMsgDataReader>::nil (void)
{
  return LiveSystem::StringMsgDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<LiveSystem::StringMsgDataReader>::marshal (
    const LiveSystem::StringMsgDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

LiveSystem::StringMsgDataReader::StringMsgDataReader (void)
{}

LiveSystem::StringMsgDataReader::~StringMsgDataReader (void)
{
}

void
LiveSystem::StringMsgDataReader::_tao_any_destructor (void *_tao_void_pointer)
{
  StringMsgDataReader *_tao_tmp_pointer =
    static_cast<StringMsgDataReader *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

LiveSystem::StringMsgDataReader_ptr
LiveSystem::StringMsgDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StringMsgDataReader::_duplicate (
      dynamic_cast<StringMsgDataReader_ptr> (_tao_objref)
    );
}

LiveSystem::StringMsgDataReader_ptr
LiveSystem::StringMsgDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StringMsgDataReader::_duplicate (
      dynamic_cast<StringMsgDataReader_ptr> (_tao_objref)
    );
}

LiveSystem::StringMsgDataReader_ptr
LiveSystem::StringMsgDataReader::_nil (void)
{
  return 0;
}

LiveSystem::StringMsgDataReader_ptr
LiveSystem::StringMsgDataReader::_duplicate (StringMsgDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
LiveSystem::StringMsgDataReader::_tao_release (StringMsgDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
LiveSystem::StringMsgDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:LiveSystem/StringMsgDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* LiveSystem::StringMsgDataReader::_interface_repository_id (void) const
{
  return "IDL:LiveSystem/StringMsgDataReader:1.0";
}

::CORBA::Boolean
LiveSystem::StringMsgDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_LiveSystem_StringMsgDataReader (
    ::CORBA::tk_local_interface,
    "IDL:LiveSystem/StringMsgDataReader:1.0",
    "StringMsgDataReader");
  

namespace LiveSystem
{
  ::CORBA::TypeCode_ptr const _tc_StringMsgDataReader =
    &_tao_tc_LiveSystem_StringMsgDataReader;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgTypeSupport>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgTypeSupport>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgTypeSupport>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace LiveSystem
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringMsgTypeSupport_ptr _tao_elem)
  {
    StringMsgTypeSupport_ptr _tao_objptr =
      StringMsgTypeSupport::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringMsgTypeSupport_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<StringMsgTypeSupport>::insert (
        _tao_any,
        StringMsgTypeSupport::_tao_any_destructor,
        _tc_StringMsgTypeSupport,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      StringMsgTypeSupport_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<StringMsgTypeSupport>::extract (
          _tao_any,
          StringMsgTypeSupport::_tao_any_destructor,
          _tc_StringMsgTypeSupport,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgTypeSupport_ptr _tao_elem)
{
  LiveSystem::StringMsgTypeSupport_ptr _tao_objptr =
    LiveSystem::StringMsgTypeSupport::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgTypeSupport_ptr *_tao_elem)
{
  TAO::Any_Impl_T<LiveSystem::StringMsgTypeSupport>::insert (
      _tao_any,
      LiveSystem::StringMsgTypeSupport::_tao_any_destructor,
      LiveSystem::_tc_StringMsgTypeSupport,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgTypeSupport_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<LiveSystem::StringMsgTypeSupport>::extract (
        _tao_any,
        LiveSystem::StringMsgTypeSupport::_tao_any_destructor,
        LiveSystem::_tc_StringMsgTypeSupport,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgDataWriter>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgDataWriter>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgDataWriter>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace LiveSystem
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringMsgDataWriter_ptr _tao_elem)
  {
    StringMsgDataWriter_ptr _tao_objptr =
      StringMsgDataWriter::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringMsgDataWriter_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<StringMsgDataWriter>::insert (
        _tao_any,
        StringMsgDataWriter::_tao_any_destructor,
        _tc_StringMsgDataWriter,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      StringMsgDataWriter_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<StringMsgDataWriter>::extract (
          _tao_any,
          StringMsgDataWriter::_tao_any_destructor,
          _tc_StringMsgDataWriter,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgDataWriter_ptr _tao_elem)
{
  LiveSystem::StringMsgDataWriter_ptr _tao_objptr =
    LiveSystem::StringMsgDataWriter::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgDataWriter_ptr *_tao_elem)
{
  TAO::Any_Impl_T<LiveSystem::StringMsgDataWriter>::insert (
      _tao_any,
      LiveSystem::StringMsgDataWriter::_tao_any_destructor,
      LiveSystem::_tc_StringMsgDataWriter,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgDataWriter_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<LiveSystem::StringMsgDataWriter>::extract (
        _tao_any,
        LiveSystem::StringMsgDataWriter::_tao_any_destructor,
        LiveSystem::_tc_StringMsgDataWriter,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgDataReader>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgDataReader>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<LiveSystem::StringMsgDataReader>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace LiveSystem
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringMsgDataReader_ptr _tao_elem)
  {
    StringMsgDataReader_ptr _tao_objptr =
      StringMsgDataReader::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringMsgDataReader_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<StringMsgDataReader>::insert (
        _tao_any,
        StringMsgDataReader::_tao_any_destructor,
        _tc_StringMsgDataReader,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      StringMsgDataReader_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<StringMsgDataReader>::extract (
          _tao_any,
          StringMsgDataReader::_tao_any_destructor,
          _tc_StringMsgDataReader,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgDataReader_ptr _tao_elem)
{
  LiveSystem::StringMsgDataReader_ptr _tao_objptr =
    LiveSystem::StringMsgDataReader::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgDataReader_ptr *_tao_elem)
{
  TAO::Any_Impl_T<LiveSystem::StringMsgDataReader>::insert (
      _tao_any,
      LiveSystem::StringMsgDataReader::_tao_any_destructor,
      LiveSystem::_tc_StringMsgDataReader,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    LiveSystem::StringMsgDataReader_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<LiveSystem::StringMsgDataReader>::extract (
        _tao_any,
        LiveSystem::StringMsgDataReader::_tao_any_destructor,
        LiveSystem::_tc_StringMsgDataReader,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

