// Name: core_burncrss.cpp_FUN_00425300
// Address: 00425300
// Address Range: [[00425300, 00425355]]
// Convention: unknown
// Signature: void core_burncrss_cpp_FUN_00425300(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_burncrss_cpp_FUN_00425300(CWeapon *param_1,int param_2)

{
  if ((*(int *)&param_1->field_0x2d4 == 2) && (param_2 == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x10);
    *(uint *)&param_1[1].field_0x10 = 0;
    *(uint *)&param_1[1].field_0x8 = 0;
    *(uint *)&param_1[1].field_0xc = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(param_1,param_2);
  return;
}
