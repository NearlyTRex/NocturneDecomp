// Name: core_actor.cpp_CActorPropertyList_addFlags_FUN_0040e6a0
// Address: 0040e6a0
// Address Range: [[0040e6a0, 0040e6bd]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFlags_FUN_0040e6a0 (CActorPropertyList *this_ptr,char *property_name,int *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addFlags_FUN_0040e6a0
          (CActorPropertyList *this_ptr,char *property_name,int *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_FLAGS,property_name,data_ptr,(void *)0x0);
  return pCVar1;
}
