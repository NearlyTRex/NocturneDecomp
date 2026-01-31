// Name: core_hero.cpp_CHero_setup_FUN_004f2540
// Address: 004f2540
// Address Range: [[004f2540, 004f2577]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setup_FUN_004f2540(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setup_FUN_004f2540(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_setup_FUN_00428140(&this_ptr->base);
  this_ptr->unk1 = 0;
  core_inv_cpp_CInventory_setupItems_FUN_004ff780(&this_ptr->inventory);
  return;
}
