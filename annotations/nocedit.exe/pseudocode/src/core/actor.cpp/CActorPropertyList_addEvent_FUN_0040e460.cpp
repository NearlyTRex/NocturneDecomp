// Name: core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
// Address: 0040e460
// Address Range: [[0040e460, 0040e47d]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460 (CActorPropertyList *this_ptr,char *property_name,char *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
          (CActorPropertyList *this_ptr,char *property_name,char *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_EVENT,property_name,data_ptr,(void *)0x0);
  return pCVar1;
}
