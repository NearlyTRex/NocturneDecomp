// Name: core_passngr.cpp_FUN_0050a7d0
// Address: 0050a7d0
// Address Range: [[0050a7d0, 0050a9ac]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_0050a7d0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_passngr_cpp_FUN_0050a7d0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  int iVar2;
  float fVar3;
  CDemonMission *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1014 [1014];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  if (1.0 <= *(float *)&param_1[2].field_0x7868) {
    return;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar2 = *(int *)(pSVar5 + 0x24);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar3 = param_2 / _DAT_005e2fd8 + *(float *)&param_1[2].field_0x7868,
        *(float *)&param_1[2].field_0x7868 = fVar3, 1.0 <= fVar3 &&
        (*(CDemonActor **)&param_1[2].field_0x6c38 != (CDemonActor *)0x0)))) {
      core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[2].field_0x6c38);
      pCVar4 = 0x01D81080;
      *(uint *)&param_1[2].field_0x6c38 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,param_1,1);
    }
  }
  else {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1[2].field_0x6b30);
    if (iVar6 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,1,1);
      if (param_1[2].field_0x6bd4 != '\0') {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1[2].field_0x6bd4);
        param_1[2].field_0x6bd4 = 0;
      }
    }
  }
  fStack_30 = param_2;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  while (0.0 < fStack_30) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xffffffd0);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar6);
  }
  if (iVar2 != 0) {
    core_actor_cpp_FUN_00408b00(param_1,&param_1->field_0x249c);
    puVar1 = &param_1->field_0x20;
    fStack_2c = fStack_20;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(float *)puVar1 = *(float *)puVar1 + fStack_2c;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_28;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_24;
    iVar2 = *(int *)&param_1[2].field_0x6c38;
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x20) = *(uint *)puVar1;
      *(uint *)(iVar2 + 0x24) = *(uint *)&param_1->field_0x24;
      *(uint *)(iVar2 + 0x28) = *(uint *)&param_1->field_0x28;
      *(uint *)(iVar2 + 0x2c) = *(uint *)&param_1->field_0x2c;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
