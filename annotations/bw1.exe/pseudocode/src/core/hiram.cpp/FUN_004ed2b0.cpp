// Name: core_hiram.cpp_FUN_004ed2b0
// Address: 004ed2b0
// Address Range: [[004ed2b0, 004ed3ed]]
// Convention: unknown
// Signature: void core_hiram_cpp_FUN_004ed2b0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_hiram_cpp_FUN_004ed2b0(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  int iVar1;
  SMotion *pSVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  float afStack_18 [2];
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  if (*(int *)(pSVar2 + 0x24) != 1) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1[2].field_0x7718);
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,1,1);
      uVar4 = g_CGlassClassInfo.name_hash;
      pCVar3 = core_mission_cpp_FUN_0051b6c0(0x01D2C900,"GlassHiram");
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,uVar4);
      if (iVar1 != 0) {
        core_glass_cpp_FUN_004e34b0(iVar1,iVar1 + 0x20);
      }
    }
  }
  afStack_18[0] = param_2;
  *(uint *)&param_1->field_0x24a4 = 0;
  this_ptr = &param_1->field_0x158;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  while (0.0 < afStack_18[0]) {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_18);
    if (iVar1 == 0x29a) {
      core_mission_cpp_FUN_0051b740(0x01D2C900,param_1,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,iVar1);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)this_ptr);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)this_ptr);
  core_charactr_cpp_FUN_00433e80(param_1,param_2);
  return;
}
