// Name: core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
// Address: 0040e290
// Address Range: [[0040e290, 0040e2c0]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList *this_ptr,char *property_name,char *data_ptr,int max_length,CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList *this_ptr,char *property_name,char *data_ptr,int max_length,CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_STRING,property_name,data_ptr,callback);
  (pCVar1->param1).v_int = 1;
  (pCVar1->param3).v_int = max_length;
  return pCVar1;
}
