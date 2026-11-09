// Name: core_weapon.cpp_CWeapon_isReadyToFire_FUN_0058a2c0
// Address: 0058a2c0
// Address Range: [[0058a2c0, 0058a2d6]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_0058a2c0(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_0058a2c0(CWeapon *this_ptr)

{
  return (uint)((*(uint *)&this_ptr->field_0x45c & 0x7fffffff) == 0);
}
