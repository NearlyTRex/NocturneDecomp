// Name: core_hero.cpp_CHero_setup_FUN_004d26b0
// Address: 004d26b0
// Address Range: [[004d26b0, 004d2719]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setup_FUN_004d26b0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setup_FUN_004d26b0(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(&this_ptr->base);
  this_ptr->invincibility_timer = 0.0;
  core_inv_cpp_setupItems_FUN_004dcad0(&this_ptr->inventory);
  this_ptr->hero_action = 0;
  this_ptr->hero_action_actor = (CDemonActor *)0x0;
  this_ptr->hero_action_target = (CDemonActor *)0x0;
  this_ptr->hero_action_range = 1e+30;
  this_ptr->hero_action_started = 0;
  return;
}
