// Name: core_vessel.cpp_FUN_00585030
// Address: 00585030
// Address Range: [[00585030, 00585184]]
// Convention: unknown
// Signature: void core_vessel_cpp_FUN_00585030(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vessel_cpp_FUN_00585030(CDemonActor *param_1)

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
  core_actor_cpp_FUN_00408a80(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[3].field_0x108);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
  iVar1 = *(int *)&param_1[1].field_0x250;
  *(uint *)&param_1[1].field_0x17c = 0;
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
        (float)_DAT_005eddd2) {
      *(float *)&param_1->field_0x20 = *(float *)(iVar1 + 0x20);
      *(uint *)&param_1->field_0x24 = *(uint *)(iVar1 + 0x24);
      *(uint *)&param_1->field_0x28 = *(uint *)(iVar1 + 0x28);
      *(uint *)&param_1->field_0x2c = *(uint *)(iVar1 + 0x2c);
      iVar1 = *(int *)&param_1[1].field_0x250;
      if ((uint *)&param_1->field_0x30 != (uint *)(iVar1 + 0x30)) {
        *(uint *)&param_1->field_0x30 = *(uint *)(iVar1 + 0x30);
        *(uint *)&param_1->field_0x34 = *(uint *)(iVar1 + 0x34);
        *(uint *)&param_1->field_0x38 = *(uint *)(iVar1 + 0x38);
      }
    }
  }
  *(uint *)&param_1[1].field_0x268 = 1;
  *(uint *)&param_1[3].field_0x8 = 0;
  *(uint *)&param_1[3].field_0x14 = 1;
  *(uint *)&param_1[3].field_0xc = 0;
  *(uint *)&param_1[2].field_0x26c = 0x3f000000;
  *(uint *)&param_1[2].field_0x270 = 0x3f800000;
  *(uint *)&param_1[2].field_0x274 = 0x3f000000;
  core_flame_cpp_CFlame_setup_FUN_0049f270((CFlame *)&param_1[1].field_0x26c);
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
