// Name: core_hiram.cpp_CHiram_process_FUN_004d1070
// Address: 004d1070
// Address Range: [[004d1070, 004d11ad]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_process_FUN_004d1070(CHiram *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_process_FUN_004d1070(CHiram *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  SMotion *pSVar3;
  CDemonActor *actor_ptr;
  CGlass *this_ptr_00;
  uint class_name_hash;
  float afStack_18 [2];
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  if (pSVar3->state_index != 1) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->kill_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
      class_name_hash = g_CGlassClassInfo.name_hash;
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                            (0x01D182F0,"GlassHiram");
      this_ptr_00 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,class_name_hash)
      ;
      if (this_ptr_00 != (CGlass *)0x0) {
        core_glass_cpp_CGlass_shatter_FUN_004c6d40
                  (this_ptr_00,&(this_ptr_00->base).location.position);
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
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCVar1->base,afStack_18);
    if (iVar2 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(0x01D182F0,this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar2);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar1);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar1);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
