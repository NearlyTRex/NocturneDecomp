// Name: core_firestff.cpp_FUN_004a5770
// Address: 004a5770
// Address Range: [[004a5770, 004a57b1]]
// Convention: unknown
// Signature: void core_firestff_cpp_FUN_004a5770(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_firestff_cpp_FUN_004a5770(CWeapon *param_1,int param_2)

{
  if ((*(int *)&param_1->field_0x2d4 == 2) && (param_2 == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[6].field_0x44c);
    *(uint *)&param_1[6].field_0x44c = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(param_1,param_2);
  return;
}
