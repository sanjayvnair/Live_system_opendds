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
// be/be_codegen.cpp:152

#ifndef _TAO_IDL_LIVESYSTEMC_NRLFBM_H_
#define _TAO_IDL_LIVESYSTEMC_NRLFBM_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "orbsvcs/TimeBaseC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace LiveSystem
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct StringMsg;

  typedef
    ::TAO_Var_Var_T<
        StringMsg
      >
    StringMsg_var;

  typedef
    ::TAO_Out_T<
        StringMsg
      >
    StringMsg_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct  StringMsg
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef StringMsg_var _var_type;
    typedef StringMsg_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Boolean type;
    ::CORBA::Long dr;
    ::CORBA::Long id;
    ::CORBA::Long cid;
    ::TAO::String_Manager msg;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_StringMsg;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module LiveSystem

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::LiveSystem::StringMsg>
    : public
        Var_Size_Arg_Traits_T<
            ::LiveSystem::StringMsg,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:45



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace LiveSystem
{
   void operator<<= (::CORBA::Any &, const ::LiveSystem::StringMsg &); // copying version
   void operator<<= (::CORBA::Any &, ::LiveSystem::StringMsg*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::LiveSystem::StringMsg *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::LiveSystem::StringMsg *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const LiveSystem::StringMsg &); // copying version
 void operator<<= (::CORBA::Any &, LiveSystem::StringMsg*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, LiveSystem::StringMsg *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const LiveSystem::StringMsg *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const LiveSystem::StringMsg &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, LiveSystem::StringMsg &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "LiveSystemC.inl"
#endif /* defined INLINE */

#endif /* ifndef */
