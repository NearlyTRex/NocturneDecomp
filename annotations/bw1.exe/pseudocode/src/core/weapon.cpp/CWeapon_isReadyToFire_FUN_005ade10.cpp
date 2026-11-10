// Name: core_weapon.cpp_CWeapon_isReadyToFire_FUN_005ade10
// Address: 005ade10
// Address Range: [[005ade10, 005ade26]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ade10(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ade10(CWeapon *this_ptr)

{
  return (uint)(ABS(this_ptr->fire_cooldown_timer) == 0.0);
}
