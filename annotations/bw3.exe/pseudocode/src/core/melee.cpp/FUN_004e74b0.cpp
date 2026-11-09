// Name: core_melee.cpp_FUN_004e74b0
// Address: 004e74b0
// Address Range: [[004e74b0, 004e74cc]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_004e74b0(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_melee_cpp_FUN_004e74b0(CWeapon *param_1,int param_2)

{
  *(uint *)&param_1[1].field_0x18 = 0;
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(param_1,param_2);
  return;
}
