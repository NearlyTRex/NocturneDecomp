// Name: core_npc.cpp_CNPC_getPropertyList_FUN_00544e40
// Address: 00544e40
// Address Range: [[00544e40, 00544eaa]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(CNPC *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(CNPC *this_ptr,CActorPropertyList *property_list)

{
  core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  return;
}
