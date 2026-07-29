// Name: core_hero.cpp_FUN_004b48d0
// Address: 004b48d0
// Address Range: [[004b48d0, 004b4907]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004b48d0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004b48d0(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_setup_FUN_00424260(&this_ptr->base);
  this_ptr->invincibility_timer = 0.0;
  core_inv_cpp_CInventory_setupItems_FUN_004c1510(&this_ptr->inventory);
  return;
}
