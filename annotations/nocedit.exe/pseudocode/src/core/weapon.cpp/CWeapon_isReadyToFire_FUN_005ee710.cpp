// Name: core_weapon.cpp_CWeapon_isReadyToFire_FUN_005ee710
// Address: 005ee710
// Address Range: [[005ee710, 005ee726]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710(CWeapon *this_ptr)

{
  return (uint)(ABS(this_ptr->fire_cooldown_timer) == 0.0);
}
