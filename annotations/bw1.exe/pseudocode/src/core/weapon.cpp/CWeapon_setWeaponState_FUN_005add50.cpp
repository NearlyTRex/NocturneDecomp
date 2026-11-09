// Name: core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50
// Address: 005add50
// Address Range: [[005add50, 005add5e]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_005add50(CWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_005add50(CWeapon *this_ptr,int weapon_state)

{
  *(int *)&this_ptr->field_0x2d4 = weapon_state;
  return;
}
