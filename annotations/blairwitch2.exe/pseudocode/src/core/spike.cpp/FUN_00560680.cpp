// Name: core_spike.cpp_FUN_00560680
// Address: 00560680
// Address Range: [[00560680, 00560755]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00560680(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_spike_cpp_FUN_00560680(CDemonActor *param_1)

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
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408a80(param_1);
  fStack_2c = *(float *)&param_1[1].field_0x194 * *(float *)&param_1[2].field_0x150;
  uStack_34 = 0;
  uStack_30 = 0;
  fStack_10 = fStack_2c;
  core_actor_cpp_FUN_00408cf0(param_1,&stack0xffffffcc);
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
  if ((float *)&param_1[1].field_0x188 == &stack0xffffffe4) {
    *(uint *)&param_1[2].field_0x7c = 0;
    return;
  }
  *(float *)&param_1[1].field_0x188 = fStack_1c;
  *(float *)&param_1[1].field_0x18c = fStack_18;
  *(uint *)&param_1[1].field_0x190 = uStack_14;
  *(uint *)&param_1[2].field_0x7c = 0;
  return;
}
