// Name: core_hero.cpp_CHero_setup_FUN_004ce4a0
// Address: 004ce4a0
// Address Range: [[004ce4a0, 004ce4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setup_FUN_004ce4a0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setup_FUN_004ce4a0(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_setup_FUN_00422930(&this_ptr->base);
  this_ptr->invincibility_timer = 0.0;
  core_inv_cpp_FUN_004dc850(this_ptr->inventories);
  this_ptr->hero_action = 0;
  this_ptr->hero_action_actor = (CDemonActor *)0x0;
  this_ptr->hero_action_target = (CDemonActor *)0x0;
  this_ptr->hero_action_range = 1e+30;
  return;
}
