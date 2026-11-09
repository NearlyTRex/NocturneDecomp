// Name: core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0
// Address: 0057b7f0
// Address Range: [[0057b7f0, 0057b7fe]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(CWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(CWeapon *this_ptr,int weapon_state)

{
  *(int *)&this_ptr->field_0x2d4 = weapon_state;
  return;
}
