// Name: core_melee.cpp_CMelee_setWeaponState_FUN_004cf180
// Address: 004cf180
// Address Range: [[004cf180, 004cf19c]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(CMelee *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(CMelee *this_ptr,int weapon_state)

{
  this_ptr->blood_spurt_count = 0;
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(&this_ptr->base,weapon_state);
  return;
}
