// Name: core_bat.cpp_FUN_00411200
// Address: 00411200
// Address Range: [[00411200, 004113ee]]
// Convention: unknown
// Signature: void core_bat_cpp_FUN_00411200(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bat_cpp_FUN_00411200(int param_1,float param_2)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_102c [1010];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_18;
  
  bVar4 = 0;
  fStack_38 = *(float *)(param_1 + 0x20);
  fStack_34 = *(float *)(param_1 + 0x24);
  fStack_30 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x460) = *(float *)(param_1 + 0x464) * param_2 + *(float *)(param_1 + 0x460);
  core_bat_cpp_FUN_004114e0(param_1);
  fStack_44 = *(float *)(param_1 + 0x20) - fStack_38;
  fStack_40 = *(float *)(param_1 + 0x24) - fStack_34;
  fStack_3c = *(float *)(param_1 + 0x28) - fStack_30;
  fStack_2c = fStack_44;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_48 = (fStack_28 * (float)_DAT_005cb6e6) / param_2 + (float)_DAT_005cb6ee;
  if (fStack_48 < (float)_DAT_005cb6f6) {
    fStack_48 = 10.0;
  }
  if ((float)_DAT_005cb6fe < fStack_48) {
    fStack_48 = 60.0;
  }
  *(float *)(param_1 + 0x46c) =
       (fStack_48 - *(float *)(param_1 + 0x46c)) * (float)_DAT_005cb706 +
       *(float *)(param_1 + 0x46c);
  *(float *)(param_1 + 0x2e0) =
       param_2 * *(float *)(param_1 + 0x46c) * *(float *)(param_1 + 0x468) +
       *(float *)(param_1 + 0x2e0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2e4));
  iStack_18 = *(int *)&pCVar1->field_0x100;
  if (*(float *)(param_1 + 0x2e0) < (float)iStack_18) {
    if (*(float *)(param_1 + 0x2e0) < 0.0) {
      iStack_18 = iStack_18 + -1;
      *(float *)(param_1 + 0x2e0) = (float)iStack_18;
    }
  }
  else {
    *(uint *)(param_1 + 0x2e0) = 0;
  }
  if ((*(char *)(param_1 + 0x470) != '\0') &&
     (param_2 = *(float *)(param_1 + 0x4e0) - param_2, *(float *)(param_1 + 0x4e0) = param_2,
     param_2 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x4dc));
    if (iVar2 == 0) {
      iVar2 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                         (double)*(float *)(param_1 + 0x28),0x42480000);
      if (iVar2 != 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
        *(uint *)(param_1 + 0x4dc) = uVar3;
      }
    }
    uVar3 = core_actor_cpp_FUN_0040cf60();
    *(uint *)(param_1 + 0x4e0) = uVar3;
    return;
  }
  return;
}
