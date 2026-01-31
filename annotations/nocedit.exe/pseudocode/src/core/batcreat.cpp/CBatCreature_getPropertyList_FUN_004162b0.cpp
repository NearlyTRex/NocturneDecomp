// Name: core_batcreat.cpp_CBatCreature_getPropertyList_FUN_004162b0
// Address: 004162b0
// Address Range: [[004162b0, 004162ec]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_getPropertyList_FUN_004162b0 (CBatCreature *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_batcreat_cpp_CBatCreature_getPropertyList_FUN_004162b0
          (CBatCreature *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
