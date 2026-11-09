// Name: unkafter_lightgun.cpp_FUN_004e3e60
// Address: 004e3e60
// Address Range: [[004e3e60, 004e3eab]]
// Convention: unknown
// Signature: void unkafter_lightgun_cpp_FUN_004e3e60(CWeapon *param_1,int param_2)

#include "nocturne.h"

void unkafter_lightgun_cpp_FUN_004e3e60(CWeapon *param_1,int param_2)

{
  uint sfx_handle;
  
  if ((*(int *)&param_1->field_0x2d4 == 2) && (param_2 == 1)) {
    sfx_handle = *(uint *)&param_1[1].field_0x30;
    *(uint *)(param_1 + 1) = 0;
    sound_sndmain_cpp_killSfx_FUN_00556be0(sfx_handle);
    *(uint *)&param_1[1].field_0x30 = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(param_1,param_2);
  return;
}
