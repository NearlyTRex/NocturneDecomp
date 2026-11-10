// Name: core_melee.cpp_CMelee_setWeaponState_FUN_00509a70
// Address: 00509a70
// Address Range: [[00509a70, 00509a8c]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_00509a70(CMelee *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_00509a70(CMelee *this_ptr,int weapon_state)

{
  this_ptr->blood_spurt_count = 0;
  core_weapon_cpp_CWeapon_setWeaponState_FUN_005add50(&this_ptr->base,weapon_state);
  return;
}
