// Name: core_weapon.cpp_CWeapon_fire_FUN_00554600
// Address: 00554600
// Address Range: [[00554600, 00554623]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_weapon_cpp_CWeapon_fire_FUN_00554600(int param_1)

#include "nocturne.h"

uint __cdecl core_weapon_cpp_CWeapon_fire_FUN_00554600(int param_1)

{
  if (0 < *(int *)(param_1 + 0x560)) {
    *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + -1;
    return 1;
  }
  return 0;
}
