// Name: core_exorcism.cpp_FUN_0048b640
// Address: 0048b640
// Address Range: [[0048b640, 0048b68d]]
// Convention: unknown
// Signature: void core_exorcism_cpp_FUN_0048b640(CWeapon *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_exorcism_cpp_FUN_0048b640(CWeapon *param_1,int param_2)

{
  if ((*(int *)&param_1->field_0x2d4 == 2) && (param_2 == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_01c6e35c);
    *(uint *)&param_1[1].field_0x4 = 0;
    _DAT_01c6e35c = 0;
    *(uint *)(param_1 + 1) = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(param_1,param_2);
  return;
}
