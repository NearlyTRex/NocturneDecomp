// Name: core_weapon.cpp_CWeapon_fire_FUN_005ee6e0
// Address: 005ee6e0
// Address Range: [[005ee6e0, 005ee703]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(CWeapon *this_ptr)

{
  if (0 < this_ptr->ammo_count) {
    this_ptr->ammo_count = this_ptr->ammo_count + -1;
    return 1;
  }
  return 0;
}
