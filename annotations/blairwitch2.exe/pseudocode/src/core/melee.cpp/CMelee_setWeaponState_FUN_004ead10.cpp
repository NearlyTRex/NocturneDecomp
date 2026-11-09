// Name: core_melee.cpp_CMelee_setWeaponState_FUN_004ead10
// Address: 004ead10
// Address Range: [[004ead10, 004ead2c]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004ead10(CMelee *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004ead10(CMelee *this_ptr,int weapon_state)

{
  *(uint *)&this_ptr->field_0x6ec = 0;
  core_weapon_cpp_FUN_0058a200((CWeapon *)this_ptr,weapon_state);
  return;
}
