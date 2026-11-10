// Name: core_melee.cpp_CMelee_setWeaponState_FUN_004e74b0
// Address: 004e74b0
// Address Range: [[004e74b0, 004e74cc]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004e74b0(CMelee *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004e74b0(CMelee *this_ptr,int weapon_state)

{
  this_ptr->blood_spurt_count = 0;
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(&this_ptr->base,weapon_state);
  return;
}
