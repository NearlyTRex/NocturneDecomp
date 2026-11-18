// Name: core_hero.cpp_CHero_createDefaultWeapon_FUN_004d2cd0
// Address: 004d2cd0
// Address Range: [[004d2cd0, 004d2ce2]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004d2cd0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004d2cd0(CHero *this_ptr)

{
  core_inv_cpp_CInventory_initialize_FUN_004da4e0(&this_ptr->inventory);
  return;
}
