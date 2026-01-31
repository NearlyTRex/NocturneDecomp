// Name: core_drone.cpp_CDrone_getPropertyList_FUN_0048f520
// Address: 0048f520
// Address Range: [[0048f520, 0048f55c]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_getPropertyList_FUN_0048f520 (CDrone *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_drone_cpp_CDrone_getPropertyList_FUN_0048f520
          (CDrone *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
