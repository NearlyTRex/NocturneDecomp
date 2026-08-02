// Name: core_weapon.cpp_CWeapon_isReadyToFire_FUN_00554630
// Address: 00554630
// Address Range: [[00554630, 00554646]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_00554630(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_00554630(CWeapon *this_ptr)

{
  return (uint)(ABS(this_ptr->fire_cooldown_timer) == 0.0);
}
