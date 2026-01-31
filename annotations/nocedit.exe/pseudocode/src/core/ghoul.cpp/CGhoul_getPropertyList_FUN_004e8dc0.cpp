// Name: core_ghoul.cpp_CGhoul_getPropertyList_FUN_004e8dc0
// Address: 004e8dc0
// Address Range: [[004e8dc0, 004e8e1c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_getPropertyList_FUN_004e8dc0 (CGhoul *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_ghoul_cpp_CGhoul_getPropertyList_FUN_004e8dc0
          (CGhoul *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(property_list);
  return;
}
