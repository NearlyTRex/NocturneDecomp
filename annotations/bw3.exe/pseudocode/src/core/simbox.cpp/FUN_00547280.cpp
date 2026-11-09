// Name: core_simbox.cpp_FUN_00547280
// Address: 00547280
// Address Range: [[00547280, 005473bd]]
// Convention: unknown
// Signature: void core_simbox_cpp_FUN_00547280(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_simbox_cpp_FUN_00547280(CDemonActor *param_1)

{
  byte *position;
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_100c [995];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar4 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408890(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffac;
  pfVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)*puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&stack0xffffffc4 != &stack0xffffff94) {
    fStack_3c = fStack_6c;
    fStack_38 = fStack_68;
    fStack_34 = fStack_64;
  }
  if (&stack0xffffffd0 != &stack0xffffffa0) {
    fStack_30 = fStack_60;
    fStack_2c = fStack_5c;
    fStack_28 = fStack_58;
  }
  fStack_18 = fStack_30 - fStack_3c;
  afStack_14[0] = fStack_2c - fStack_38;
  afStack_14[1] = fStack_28 - fStack_34;
  CStack_24._0_4_ = fStack_30 - fStack_3c;
  *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + 4) = afStack_14[(uint)bVar4 * 0xfffffffe];
  *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_14[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  position = &param_1->field_0x20;
  core_box_cpp_CBox_setupCorners_FUN_0041ae00
            ((CBox *)&param_1[2].field_0xa8,(CVector3f *)position,(CVector3f *)&param_1->field_0x30,
             &CStack_24,*(float *)&param_1[2].field_0x28);
  if (&param_1[4].field_0x54 != position) {
    *(uint *)&param_1[4].field_0x54 = *(uint *)position;
    *(uint *)&param_1[4].field_0x58 = *(uint *)&param_1->field_0x24;
    *(uint *)&param_1[4].field_0x5c = *(uint *)&param_1->field_0x28;
  }
  if (&param_1[4].field_0x60 != &param_1->field_0x30) {
    *(uint *)&param_1[4].field_0x60 = *(uint *)&param_1->field_0x30;
    *(uint *)&param_1[4].field_0x64 = *(uint *)&param_1->field_0x34;
    *(uint *)&param_1[4].field_0x68 = *(uint *)&param_1->field_0x38;
  }
  if (*(int *)&param_1[2].field_0x24 != 1) {
    return;
  }
  *(uint *)&param_1[4].field_0x4c = 0;
  return;
}
