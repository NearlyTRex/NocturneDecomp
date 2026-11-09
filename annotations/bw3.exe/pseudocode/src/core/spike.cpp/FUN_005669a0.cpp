// Name: core_spike.cpp_FUN_005669a0
// Address: 005669a0
// Address Range: [[005669a0, 00566a75]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_005669a0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_spike_cpp_FUN_005669a0(CDemonActor *param_1)

{
  byte bVar1;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  float fStack_10;
  
  bVar1 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408890(param_1);
  fStack_2c = *(float *)&param_1[2].field_0x3c * *(float *)&param_1[3].field_0x154;
  uStack_34 = 0;
  uStack_30 = 0;
  fStack_10 = fStack_2c;
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffffcc);
  fStack_40 = fStack_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_4c = *(float *)&param_1->field_0x20 - fStack_40;
  fStack_48 = *(float *)&param_1->field_0x24 - fStack_3c;
  fStack_44 = *(float *)&param_1->field_0x28 - fStack_38;
  fStack_1c = fStack_4c;
  (&stack0xffffffe8)[(uint)bVar1 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((float *)&param_1[2].field_0x30 == &stack0xffffffe4) {
    *(uint *)&param_1[3].field_0x80 = 0;
    return;
  }
  *(float *)&param_1[2].field_0x30 = fStack_1c;
  *(float *)&param_1[2].field_0x34 = fStack_18;
  *(uint *)&param_1[2].field_0x38 = uStack_14;
  *(uint *)&param_1[3].field_0x80 = 0;
  return;
}
