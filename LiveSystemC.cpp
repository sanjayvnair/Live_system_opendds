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


#include "LiveSystemC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "LiveSystemC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_LiveSystem_StringMsg[] =
      {
        { "type", &CORBA::_tc_boolean },
        { "dr", &CORBA::_tc_long },
        { "id", &CORBA::_tc_long },
        { "cid", &CORBA::_tc_long },
        { "msg", &CORBA::_tc_string }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_LiveSystem_StringMsg (
  ::CORBA::tk_struct,
  "IDL:LiveSystem/StringMsg:1.0",
  "StringMsg",
  _tao_fields_LiveSystem_StringMsg,
  5);


namespace LiveSystem
{
  ::CORBA::TypeCode_ptr const _tc_StringMsg =
    &_tao_tc_LiveSystem_StringMsg;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
LiveSystem::StringMsg::_tao_any_destructor (
    void *_tao_void_pointer)
{
  StringMsg *_tao_tmp_pointer =
    static_cast<StringMsg *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace LiveSystem
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::LiveSystem::StringMsg &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::LiveSystem::StringMsg>::insert_copy (
        _tao_any,
        ::LiveSystem::StringMsg::_tao_any_destructor,
        ::LiveSystem::_tc_StringMsg,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    LiveSystem::StringMsg *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::LiveSystem::StringMsg>::insert (
      _tao_any,
      ::LiveSystem::StringMsg::_tao_any_destructor,
      ::LiveSystem::_tc_StringMsg,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::LiveSystem::StringMsg *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::LiveSystem::StringMsg *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::LiveSystem::StringMsg *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::LiveSystem::StringMsg>::extract (
        _tao_any,
        ::LiveSystem::StringMsg::_tao_any_destructor,
        ::LiveSystem::_tc_StringMsg,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const LiveSystem::StringMsg &_tao_elem)
{
  TAO::Any_Dual_Impl_T<LiveSystem::StringMsg>::insert_copy (
    _tao_any,
    LiveSystem::StringMsg::_tao_any_destructor,
    LiveSystem::_tc_StringMsg,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  LiveSystem::StringMsg *_tao_elem)
{
  TAO::Any_Dual_Impl_T<LiveSystem::StringMsg>::insert (
    _tao_any,
    LiveSystem::StringMsg::_tao_any_destructor,
    LiveSystem::_tc_StringMsg,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  LiveSystem::StringMsg *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const LiveSystem::StringMsg *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const LiveSystem::StringMsg *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<LiveSystem::StringMsg>::extract (
      _tao_any,
      LiveSystem::StringMsg::_tao_any_destructor,
      LiveSystem::_tc_StringMsg,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const LiveSystem::StringMsg &_tao_aggregate)
{
  return
    (strm << ::ACE_OutputCDR::from_boolean (_tao_aggregate.type)) &&
    (strm << _tao_aggregate.dr) &&
    (strm << _tao_aggregate.id) &&
    (strm << _tao_aggregate.cid) &&
    (strm << _tao_aggregate.msg.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    LiveSystem::StringMsg &_tao_aggregate)
{
  return
    (strm >> ::ACE_InputCDR::to_boolean (_tao_aggregate.type)) &&
    (strm >> _tao_aggregate.dr) &&
    (strm >> _tao_aggregate.id) &&
    (strm >> _tao_aggregate.cid) &&
    (strm >> _tao_aggregate.msg.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL


