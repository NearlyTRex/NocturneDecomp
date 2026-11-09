// Name: core_pendulum.cpp_FUN_0050de10
// Address: 0050de10
// Address Range: [[0050de10, 0050df6a]]
// Convention: unknown
// Signature: void core_pendulum_cpp_FUN_0050de10(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_pendulum_cpp_FUN_0050de10(CDemonActor *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1024 [999];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408890(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  pfVar2 = (float *)&stack0xffffff7c;
  pfVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&stack0xffffffac != &stack0xffffff94) {
    fStack_54 = fStack_6c;
    fStack_50 = fStack_68;
    fStack_4c = fStack_64;
  }
  if (&stack0xffffffb8 != &stack0xffffffa0) {
    fStack_48 = fStack_60;
    fStack_44 = fStack_5c;
    fStack_40 = fStack_58;
  }
  *(float *)&param_1[2].field_0xf4 =
       SQRT((fStack_44 - fStack_50) * (float)_DAT_005cbad5) * (float)_DAT_005cbadd;
  fStack_3c = fStack_54 + fStack_48;
  fStack_38 = fStack_50 + fStack_44;
  fStack_34 = fStack_4c + fStack_40;
  fStack_24 = fStack_54 + fStack_48;
  *(float *)((int)&stack0xffffffe0 + (uint)bVar4 * -8) =
       (&stack0xffffffc8)[(uint)bVar4 * 0xfffffffe];
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_18 = fStack_24 * _DAT_005cbae5;
  fStack_14 = fStack_20 * _DAT_005cbae5;
  fStack_10 = fStack_1c * _DAT_005cbae5;
  fStack_30 = fStack_24 * _DAT_005cbae5;
  (&stack0xffffffd4)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if ((float *)&param_1[3].field_0x8 == &stack0xffffffd0) {
    *(float *)&param_1[3].field_0xc = fStack_50;
    return;
  }
  *(float *)&param_1[3].field_0x8 = fStack_30;
  *(float *)&param_1[3].field_0xc = fStack_2c;
  *(uint *)&param_1[3].field_0x10 = uStack_28;
  *(float *)&param_1[3].field_0xc = fStack_50;
  return;
}
