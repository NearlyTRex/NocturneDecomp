// Name: core_weapon.cpp_CWeapon_fire_FUN_005adde0
// Address: 005adde0
// Address Range: [[005adde0, 005ade02]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005adde0(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005adde0(CWeapon *this_ptr)

{
  if (0 < *(int *)&this_ptr->field_0x568) {
    *(int *)&this_ptr->field_0x568 = *(int *)&this_ptr->field_0x568 + -1;
    return 1;
  }
  return 0;
}
