// Name: core_tommygun.cpp_FUN_0056bf80
// Address: 0056bf80
// Address Range: [[0056bf80, 0056bfa7]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_0056bf80(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_tommygun_cpp_FUN_0056bf80(CWeapon *param_1,int param_2)

{
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x4);
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(param_1,param_2);
  return;
}
