// Name: core_armour.cpp_CArmour_getPropertyList_FUN_00412470
// Address: 00412470
// Address Range: [[00412470, 004124c3]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_getPropertyList_FUN_00412470 (CArmour *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_armour_cpp_CArmour_getPropertyList_FUN_00412470
          (CArmour *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
