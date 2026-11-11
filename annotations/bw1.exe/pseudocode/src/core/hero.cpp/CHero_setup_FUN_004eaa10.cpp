// Name: core_hero.cpp_CHero_setup_FUN_004eaa10
// Address: 004eaa10
// Address Range: [[004eaa10, 004eaa6f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setup_FUN_004eaa10(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setup_FUN_004eaa10(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_setup_FUN_0042c510(&this_ptr->base);
  this_ptr->invincibility_timer = 0.0;
  core_inv_cpp_FUN_004f9b20(&this_ptr->inventory);
  this_ptr->hero_action = 0;
  this_ptr->hero_action_actor = (CDemonActor *)0x0;
  this_ptr->hero_action_target = (CDemonActor *)0x0;
  this_ptr->hero_action_range = 1e+30;
  return;
}
