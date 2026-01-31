// Name: core_succubus.cpp_CSuccubus_getPropertyList_FUN_005c77b0
// Address: 005c77b0
// Address Range: [[005c77b0, 005c77ec]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_getPropertyList_FUN_005c77b0 (CSuccubus *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_succubus_cpp_CSuccubus_getPropertyList_FUN_005c77b0
          (CSuccubus *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
