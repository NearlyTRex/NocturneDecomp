// Name: core_flamecan.cpp_FUN_004a6fa0
// Address: 004a6fa0
// Address Range: [[004a6fa0, 004a7109]]
// Convention: unknown
// Signature: void core_flamecan_cpp_FUN_004a6fa0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flamecan_cpp_FUN_004a6fa0(CDemonActor *param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1030 [1001];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  core_actor_cpp_FUN_00408890(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  iVar2 = *(int *)&param_1->field_0x154;
  *(uint *)&param_1[3].field_0xec = 0;
  (**(code **)(iVar2 + 0x1c))(param_1);
  puVar3 = (uint *)&stack0xffffffa0;
  puVar4 = &stack0xffffff88;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(uint *)&param_1[2].field_0xb0 = *(uint *)&param_1->field_0x20;
  fStack_18 = fStack_68 - fStack_74;
  *(uint *)&param_1[2].field_0xb4 = *(uint *)&param_1->field_0x24;
  *(uint *)&param_1[2].field_0xb8 = *(uint *)&param_1->field_0x28;
  fStack_30 = fStack_6c - fStack_78;
  *(uint *)&param_1[2].field_0xbc = *(uint *)&param_1->field_0x2c;
  fStack_28 = fStack_64 - fStack_70;
  fStack_2c = fStack_18;
  *(float *)&param_1[2].field_0xb4 = *(float *)&param_1[2].field_0xb4 + fStack_18;
  fStack_3c = fStack_6c - fStack_78;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_24 = fStack_3c;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  fStack_48 = fStack_3c;
  (&stack0xffffffbc)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)&param_1[3].field_0x90 != &stack0xffffffb8) {
    *(float *)&param_1[3].field_0x90 = fStack_48;
    *(float *)&param_1[3].field_0x94 = fStack_44;
    *(uint *)&param_1[3].field_0x98 = uStack_40;
  }
  *(uint *)&param_1[3].field_0xe0 = 0;
  fVar1 = *(float *)&param_1[3].field_0x90 * (float)_DAT_005c0cac;
  *(uint *)&param_1[3].field_0xe4 = 0;
  if (*(float *)&param_1[3].field_0x94 < fVar1) {
    *(float *)&param_1[3].field_0x94 = fVar1;
  }
  *(uint *)&param_1[4].field_0x84 = 0;
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
