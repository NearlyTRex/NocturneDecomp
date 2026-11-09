// Name: core_hiram.cpp_FUN_004d1070
// Address: 004d1070
// Address Range: [[004d1070, 004d11ad]]
// Convention: unknown
// Signature: void core_hiram_cpp_FUN_004d1070(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_hiram_cpp_FUN_004d1070(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  float afStack_18 [2];
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  if (*(int *)(iVar1 + 0x24) != 1) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[2].field_0x2e88);
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,1,1);
      uVar3 = g_CGlassClassInfo.name_hash;
      pCVar2 = core_mission_cpp_FUN_004fc740(0x01D182F0,"GlassHiram");
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar2,uVar3);
      if (iVar1 != 0) {
        core_glass_cpp_FUN_004c6d40(iVar1,iVar1 + 0x20);
      }
    }
  }
  afStack_18[0] = param_2;
  *(uint *)&param_1->field_0x2510 = 0;
  this_ptr = &param_1->field_0x2b4;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  while (0.0 < afStack_18[0]) {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,afStack_18);
    if (iVar1 == 0x29a) {
      core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_1,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,iVar1);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)this_ptr);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)this_ptr);
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
  return;
}
