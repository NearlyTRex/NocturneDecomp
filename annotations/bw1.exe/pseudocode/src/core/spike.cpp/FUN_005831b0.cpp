// Name: core_spike.cpp_FUN_005831b0
// Address: 005831b0
// Address Range: [[005831b0, 005834dd]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_005831b0(CSpike *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_spike_cpp_FUN_005831b0(CSpike *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1050 [1016];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_14;
  
  bVar4 = 0;
  if ((*(int *)&param_1->field_0x2d4 == 0) || (*(int *)&param_1->field_0x2d4 == 1)) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x2f0);
    if (iVar1 != 0) {
      *(uint *)&param_1->field_0x2dc = 1;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x354);
    if (iVar1 == 0) goto LAB_00583399;
    *(uint *)&param_1->field_0x2dc = 0;
LAB_00583219:
    if (*(int *)&param_1->field_0x2d8 == 0) {
      return;
    }
    if (*(int *)&param_1->field_0x2d8 == 2) {
      *(uint *)&param_1->field_0x2d8 = 3;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x3b8);
    if (iVar1 != 0) {
      *(uint *)&param_1->field_0x2dc = 1;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x41c);
    if (iVar1 == 0) {
LAB_00583399:
      if (*(int *)&param_1->field_0x2dc == 0) goto LAB_00583219;
    }
    else {
      *(uint *)&param_1->field_0x2dc = 1;
    }
  }
  fVar2 = *(float *)&param_1->field_0x488 - param_2;
  *(float *)&param_1->field_0x488 = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  iVar1 = *(int *)&param_1->field_0x2d8;
  *(uint *)&param_1->field_0x488 = 0;
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x2d8 = 1;
    *(uint *)&param_1->field_0x55c = 0;
    goto LAB_0058327b;
  }
  if (iVar1 == 1) {
    fVar2 = param_2 / *(float *)&param_1->field_0x480 + *(float *)&param_1->field_0x55c;
    *(float *)&param_1->field_0x55c = fVar2;
    if (fVar2 <= 1.0) goto LAB_0058327b;
    *(uint *)&param_1->field_0x2d8 = 2;
    *(uint *)&param_1->field_0x55c = 0x3f800000;
    if (*(int *)&param_1->field_0x2d4 == 2) {
LAB_0058340c:
      *(uint *)&param_1->field_0x2dc = 0;
      goto LAB_0058327b;
    }
    if (*(int *)&param_1->field_0x2d4 != 1) {
      *(uint *)&param_1->field_0x488 = *(uint *)&param_1->field_0x554;
      goto LAB_0058327b;
    }
  }
  else {
    if (iVar1 == 2) {
      *(uint *)&param_1->field_0x55c = 0x3f800000;
      *(uint *)&param_1->field_0x2d8 = 3;
      goto LAB_0058327b;
    }
    if ((iVar1 != 3) ||
       (fVar2 = *(float *)&param_1->field_0x55c - param_2 / *(float *)&param_1->field_0x484,
       *(float *)&param_1->field_0x55c = fVar2, 0.0 <= fVar2)) goto LAB_0058327b;
    *(uint *)&param_1->field_0x2d8 = 0;
    *(uint *)&param_1->field_0x55c = 0;
    if (*(int *)&param_1->field_0x2d4 == 2) goto LAB_0058340c;
    if (*(int *)&param_1->field_0x2d4 != 1) {
      *(uint *)&param_1->field_0x488 = *(uint *)&param_1->field_0x554;
      goto LAB_0058327b;
    }
  }
  fVar2 = (float)core_actor_cpp_FUN_0040cc00(0x3f400000,0x3fa00000);
  *(float *)&param_1->field_0x488 = fVar2 * *(float *)&param_1->field_0x554;
LAB_0058327b:
  puVar3 = (uint *)((int)param_1 + (uint)bVar4 * -8 + 0x24);
  fStack_50 = *(float *)&param_1->field_0x20;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8) = *puVar3;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  fStack_30 = *(float *)&param_1->field_0x2ec * *(float *)&param_1->field_0x55c;
  uStack_38 = 0;
  uStack_34 = 0;
  fStack_14 = fStack_30;
  core_actor_cpp_FUN_00408ac0(param_1,&stack0xffffffc8);
  fStack_68 = fStack_44;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_2c = *(float *)&param_1->field_0x2e0 + fStack_68;
  fStack_28 = *(float *)&param_1->field_0x2e4 + fStack_64;
  fStack_24 = *(float *)&param_1->field_0x2e8 + fStack_60;
  fStack_5c = fStack_2c;
  *(float *)((int)&stack0xffffffa8 + (uint)bVar4 * -8) =
       (&stack0xffffffd8)[(uint)bVar4 * 0xfffffffe];
  *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(float *)&param_1->field_0x20 = fStack_5c;
  fVar2 = fStack_50 - *(float *)&param_1->field_0x20;
  *(uint *)&param_1->field_0x24 = uStack_58;
  fStack_4c = fStack_4c - *(float *)&param_1->field_0x24;
  *(uint *)&param_1->field_0x28 = uStack_54;
  fStack_48 = fStack_48 - *(float *)&param_1->field_0x28;
  if (fStack_48 * fStack_48 + fStack_4c * fStack_4c + fVar2 * fVar2 <= (float)_DAT_005f6210) {
    return;
  }
  core_spike_cpp_FUN_00583700(param_1);
  return;
}
