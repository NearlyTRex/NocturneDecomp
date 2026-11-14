// Name: core_melee.cpp_CMelee_setWeaponState_FUN_004ead10
// Address: 004ead10
// Address Range: [[004ead10, 004ead2c]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004ead10(CMelee *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004ead10(CMelee *this_ptr,int weapon_state)

{
  this_ptr->blood_spurt_count = 0;
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0058a200(&this_ptr->base,weapon_state);
  return;
}
