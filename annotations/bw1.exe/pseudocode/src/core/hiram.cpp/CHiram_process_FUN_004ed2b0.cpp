// Name: core_hiram.cpp_CHiram_process_FUN_004ed2b0
// Address: 004ed2b0
// Address Range: [[004ed2b0, 004ed3ed]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_process_FUN_004ed2b0(CHiram *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_process_FUN_004ed2b0(CHiram *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  SMotion *pSVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  float afStack_18 [2];
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  if (*(int *)(pSVar3 + 0x24) != 1) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x1fab8);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
      uVar5 = g_CGlassClassInfo.name_hash;
      pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0
                         (0x01D2C900,"GlassHiram");
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar4,uVar5);
      if (iVar2 != 0) {
        core_glass_cpp_FUN_004e34b0(iVar2,iVar2 + 0x20);
      }
    }
  }
  afStack_18[0] = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (0.0 < afStack_18[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,afStack_18);
    if (iVar2 == 0x29a) {
      core_mission_cpp_FUN_0051b740(0x01D2C900,this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar2);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar1);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar1);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
