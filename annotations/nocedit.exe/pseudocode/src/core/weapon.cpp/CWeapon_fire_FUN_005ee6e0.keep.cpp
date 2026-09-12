// Name: core_weapon.cpp_CWeapon_fire_FUN_005ee6e0
// Address: 005ee6e0
// MANUAL RECONSTRUCTION
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
#if !NOCTURNE_AUTHENTIC_INPUT_REPEAT
  this_ptr->fire_cooldown_timer = 0.3f;
#endif
  return 0;
}
