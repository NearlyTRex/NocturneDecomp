// Name: core_hero.cpp_CHero_createDefaultWeapon_FUN_004cec30
// Address: 004cec30
// Address Range: [[004cec30, 004cec42]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004cec30(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004cec30(CHero *this_ptr)

{
  core_inv_cpp_CInventory_initialize_FUN_004da900(this_ptr->inventories);
  return;
}
