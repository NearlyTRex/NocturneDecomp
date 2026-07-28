// Name: core_weapon.cpp_CWeapon_fire_FUN_00554600
// Address: 00554600
// Address Range: [[00554600, 00554623]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_00554600(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_00554600(CWeapon *this_ptr)

{
  if (0 < this_ptr->ammo_count) {
    this_ptr->ammo_count = this_ptr->ammo_count + -1;
    return 1;
  }
  return 0;
}
