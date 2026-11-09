// Name: core_spike.cpp_FUN_00560760
// Address: 00560760
// Address Range: [[00560760, 00560a8d]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00560760(CSpike *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_spike_cpp_FUN_00560760(CSpike *param_1,float param_2)

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
  if ((*(int *)&param_1->field_0x430 == 0) || (*(int *)&param_1->field_0x430 == 1)) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x44c);
    if (iVar1 != 0) {
      *(uint *)&param_1->field_0x438 = 1;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x4b0);
    if (iVar1 == 0) goto LAB_00560949;
    *(uint *)&param_1->field_0x438 = 0;
LAB_005607c9:
    if (*(int *)&param_1->field_0x434 == 0) {
      return;
    }
    if (*(int *)&param_1->field_0x434 == 2) {
      *(uint *)&param_1->field_0x434 = 3;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x514);
    if (iVar1 != 0) {
      *(uint *)&param_1->field_0x438 = 1;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x578);
    if (iVar1 == 0) {
LAB_00560949:
      if (*(int *)&param_1->field_0x438 == 0) goto LAB_005607c9;
    }
    else {
      *(uint *)&param_1->field_0x438 = 1;
    }
  }
  fVar2 = *(float *)&param_1->field_0x5e4 - param_2;
  *(float *)&param_1->field_0x5e4 = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  iVar1 = *(int *)&param_1->field_0x434;
  *(uint *)&param_1->field_0x5e4 = 0;
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x434 = 1;
    *(uint *)&param_1->field_0x6b8 = 0;
    goto LAB_0056082b;
  }
  if (iVar1 == 1) {
    fVar2 = param_2 / *(float *)&param_1->field_0x5dc + *(float *)&param_1->field_0x6b8;
    *(float *)&param_1->field_0x6b8 = fVar2;
    if (fVar2 <= 1.0) goto LAB_0056082b;
    *(uint *)&param_1->field_0x434 = 2;
    *(uint *)&param_1->field_0x6b8 = 0x3f800000;
    if (*(int *)&param_1->field_0x430 == 2) {
LAB_005609bc:
      *(uint *)&param_1->field_0x438 = 0;
      goto LAB_0056082b;
    }
    if (*(int *)&param_1->field_0x430 != 1) {
      *(uint *)&param_1->field_0x5e4 = *(uint *)&param_1->field_0x6b0;
      goto LAB_0056082b;
    }
  }
  else {
    if (iVar1 == 2) {
      *(uint *)&param_1->field_0x6b8 = 0x3f800000;
      *(uint *)&param_1->field_0x434 = 3;
      goto LAB_0056082b;
    }
    if ((iVar1 != 3) ||
       (fVar2 = *(float *)&param_1->field_0x6b8 - param_2 / *(float *)&param_1->field_0x5e0,
       *(float *)&param_1->field_0x6b8 = fVar2, 0.0 <= fVar2)) goto LAB_0056082b;
    *(uint *)&param_1->field_0x434 = 0;
    *(uint *)&param_1->field_0x6b8 = 0;
    if (*(int *)&param_1->field_0x430 == 2) goto LAB_005609bc;
    if (*(int *)&param_1->field_0x430 != 1) {
      *(uint *)&param_1->field_0x5e4 = *(uint *)&param_1->field_0x6b0;
      goto LAB_0056082b;
    }
  }
  fVar2 = (float)core_actor_cpp_FUN_0040cf60(0x3f400000,0x3fa00000);
  *(float *)&param_1->field_0x5e4 = fVar2 * *(float *)&param_1->field_0x6b0;
LAB_0056082b:
  puVar3 = (uint *)((int)param_1 + (uint)bVar4 * -8 + 0x24);
  fStack_50 = *(float *)&param_1->field_0x20;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8) = *puVar3;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  fStack_30 = *(float *)&param_1->field_0x448 * *(float *)&param_1->field_0x6b8;
  uStack_38 = 0;
  uStack_34 = 0;
  fStack_14 = fStack_30;
  core_actor_cpp_FUN_00408cf0(param_1,&stack0xffffffc8);
  fStack_68 = fStack_44;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_2c = *(float *)&param_1->field_0x43c + fStack_68;
  fStack_28 = *(float *)&param_1->field_0x440 + fStack_64;
  fStack_24 = *(float *)&param_1->field_0x444 + fStack_60;
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
  if (fStack_48 * fStack_48 + fStack_4c * fStack_4c + fVar2 * fVar2 <= (float)_DAT_005eb00c) {
    return;
  }
  core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0(param_1);
  return;
}
