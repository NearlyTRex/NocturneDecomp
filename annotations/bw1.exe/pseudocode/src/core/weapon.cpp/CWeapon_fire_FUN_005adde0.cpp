// Name: core_weapon.cpp_CWeapon_fire_FUN_005adde0
// Address: 005adde0
// Address Range: [[005adde0, 005ade02]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005adde0(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005adde0(CWeapon *this_ptr)

{
  if (0 < this_ptr->ammo_count) {
    this_ptr->ammo_count = this_ptr->ammo_count + -1;
    return 1;
  }
  return 0;
}
