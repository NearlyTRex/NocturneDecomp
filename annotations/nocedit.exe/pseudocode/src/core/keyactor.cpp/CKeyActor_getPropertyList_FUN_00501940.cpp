// Name: core_keyactor.cpp_CKeyActor_getPropertyList_FUN_00501940
// Address: 00501940
// Address Range: [[00501940, 00501984]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_getPropertyList_FUN_00501940 (CKeyActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_keyactor_cpp_CKeyActor_getPropertyList_FUN_00501940
          (CKeyActor *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  return;
}
