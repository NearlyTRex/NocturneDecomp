// Name: core_smiley.cpp_CSmiley_getPropertyList_FUN_005a3810
// Address: 005a3810
// Address Range: [[005a3810, 005a384c]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_getPropertyList_FUN_005a3810 (CSmiley *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_smiley_cpp_CSmiley_getPropertyList_FUN_005a3810
          (CSmiley *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
