// Name: core_vessel.cpp_FUN_005764b0
// Address: 005764b0
// Address Range: [[005764b0, 00576604]]
// Convention: unknown
// Signature: void core_vessel_cpp_FUN_005764b0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vessel_cpp_FUN_005764b0(CDemonActor *param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1010 [1011];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  core_actor_cpp_FUN_00408890(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&param_1[4].field_0x10c);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  iVar1 = *(int *)&param_1[2].field_0xf8;
  *(uint *)&param_1[2].field_0x24 = 0;
  if (iVar1 != 0) {
    fStack_1c = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
    fStack_18 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
    fStack_14 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
    fStack_28 = fStack_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (SQRT(fStack_20 * fStack_20 + fStack_28 * fStack_28 + fStack_24 * fStack_24) <
        (float)_DAT_005d7097) {
      *(float *)&param_1->field_0x20 = *(float *)(iVar1 + 0x20);
      *(uint *)&param_1->field_0x24 = *(uint *)(iVar1 + 0x24);
      *(uint *)&param_1->field_0x28 = *(uint *)(iVar1 + 0x28);
      *(uint *)&param_1->field_0x2c = *(uint *)(iVar1 + 0x2c);
      iVar1 = *(int *)&param_1[2].field_0xf8;
      if ((uint *)&param_1->field_0x30 != (uint *)(iVar1 + 0x30)) {
        *(uint *)&param_1->field_0x30 = *(uint *)(iVar1 + 0x30);
        *(uint *)&param_1->field_0x34 = *(uint *)(iVar1 + 0x34);
        *(uint *)&param_1->field_0x38 = *(uint *)(iVar1 + 0x38);
      }
    }
  }
  *(uint *)&param_1[2].field_0x110 = 1;
  *(uint *)&param_1[4].field_0xc = 0;
  *(uint *)&param_1[4].field_0x18 = 1;
  *(uint *)&param_1[4].field_0x10 = 0;
  *(uint *)&param_1[3].field_0x114 = 0x3f000000;
  *(uint *)&param_1[3].field_0x118 = 0x3f800000;
  *(uint *)&param_1[3].field_0x11c = 0x3f000000;
  core_flame_cpp_FUN_004a5aa0(&param_1[2].field_0x114);
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
