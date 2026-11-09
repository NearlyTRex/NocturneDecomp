// Name: core_passngr.cpp_FUN_005117a0
// Address: 005117a0
// Address Range: [[005117a0, 0051197c]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_005117a0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_passngr_cpp_FUN_005117a0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  CDemonMission *pCVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1014 [1014];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar6 = 0;
  if (1.0 <= *(float *)&param_1[2].field_0x3bc0) {
    return;
  }
  iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iVar4 = *(int *)(iVar4 + 0x24);
  if ((iVar4 == 1) || (iVar4 == 2)) {
    if ((iVar4 == 2) &&
       ((fVar2 = param_2 / _DAT_005fa918 + *(float *)&param_1[2].field_0x3bc0,
        *(float *)&param_1[2].field_0x3bc0 = fVar2, 1.0 <= fVar2 &&
        (*(CDemonActor **)&param_1[2].field_0x2f90 != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                (0x01D182F0,*(CDemonActor **)&param_1[2].field_0x2f90);
      pCVar3 = 0x01D182F0;
      *(uint *)&param_1[2].field_0x2f90 = 0;
      core_mission_cpp_FUN_004fc7b0(pCVar3,param_1,1);
    }
  }
  else {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[2].field_0x2e88);
    if (iVar5 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,1,1);
      if (param_1[2].field_0x2f2c != '\0') {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,&param_1[2].field_0x2f2c);
        param_1[2].field_0x2f2c = 0;
      }
    }
  }
  fStack_30 = param_2;
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  while (0.0 < fStack_30) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,&stack0xffffffd0);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,iVar5);
  }
  if (iVar4 != 0) {
    core_actor_cpp_FUN_00408cf0(param_1,&param_1->field_0x2508);
    puVar1 = &param_1->field_0x20;
    fStack_2c = fStack_20;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(float *)puVar1 = *(float *)puVar1 + fStack_2c;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_28;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_24;
    iVar4 = *(int *)&param_1[2].field_0x2f90;
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x20) = *(uint *)puVar1;
      *(uint *)(iVar4 + 0x24) = *(uint *)&param_1->field_0x24;
      *(uint *)(iVar4 + 0x28) = *(uint *)&param_1->field_0x28;
      *(uint *)(iVar4 + 0x2c) = *(uint *)&param_1->field_0x2c;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
  return;
}
