// Name: core_melee.cpp_CMelee_setWeaponState_FUN_0050ecd0
// Address: 0050ecd0
// Address Range: [[0050ecd0, 0050ecec]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_0050ecd0(CMelee *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_0050ecd0(CMelee *this_ptr,int weapon_state)

{
  this_ptr->blood_spurt_count = 0;
  core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640(&this_ptr->base,weapon_state);
  return;
}
