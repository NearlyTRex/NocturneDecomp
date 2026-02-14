// Name: core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
// Address: 0040e330
// Address Range: [[0040e330, 0040e34d]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList *this_ptr,char *property_name,int *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList *this_ptr,char *property_name,int *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_BOOL,property_name,data_ptr,(CActorPropertyValidatorFunc *)0x0);
  return pCVar1;
}
