// Name: core_batman.cpp_CBatman_getPropertyList_FUN_00417cd0
// Address: 00417cd0
// Address Range: [[00417cd0, 00417d23]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_getPropertyList_FUN_00417cd0 (CBatman *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_batman_cpp_CBatman_getPropertyList_FUN_00417cd0
          (CBatman *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
