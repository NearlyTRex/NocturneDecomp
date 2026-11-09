// Name: core_flamegun.cpp_FUN_004b9710
// Address: 004b9710
// Address Range: [[004b9710, 004b9801]]
// Convention: unknown
// Signature: void core_flamegun_cpp_FUN_004b9710(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flamegun_cpp_FUN_004b9710(CWeapon *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  core_weapon_cpp_CWeapon_process_FUN_005ad770(param_1,param_2);
  if (*(int *)(param_1 + 1) == 0) {
    if (*(uint *)&param_1[1].field_0x4 != 0) {
      core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)&param_1[1].field_0x4);
      *(uint *)&param_1[1].field_0x4 = 0;
    }
  }
  else {
    iVar2 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x4);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fl-throw.wav");
      *(uint *)&param_1[1].field_0x4 = uVar3;
    }
    param_2 = *(float *)&param_1[1].field_0xc - param_2;
    *(float *)&param_1[1].field_0xc = param_2;
    if (param_2 < 0.0) {
      fVar1 = 1.0 / _DAT_006005c0;
      iVar2 = *(int *)&param_1->field_0x568 + -1;
      *(int *)&param_1->field_0x568 = iVar2;
      *(float *)&param_1[1].field_0xc = fVar1 + param_2;
      if (iVar2 < 0) {
        *(uint *)&param_1->field_0x568 = 0;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = 0;
  *(uint *)&param_1[1].field_0x8 = uVar3;
  return;
}
