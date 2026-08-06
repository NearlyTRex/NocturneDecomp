// Name: core_hiram.cpp_CHiram_process_FUN_004b6770
// Address: 004b6770
// Address Range: [[004b6770, 004b68ad]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_process_FUN_004b6770(CHiram *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_process_FUN_004b6770(CHiram *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  SMotion *pSVar3;
  CDemonActor *actor_ptr;
  CGlass *this_ptr_00;
  uint class_name_hash;
  float local_18 [2];
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  if (pSVar3->state_index != 1) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->kill_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,1,1)
      ;
      class_name_hash = g_CGlassActorType_01c78c40.name_hash;
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                            (g_CDemonMission_PTR_005baf90,"GlassHiram");
      this_ptr_00 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040d890(actor_ptr,class_name_hash)
      ;
      if (this_ptr_00 != (CGlass *)0x0) {
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (this_ptr_00,&(this_ptr_00->base).location.position);
      }
    }
  }
  local_18[0] = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (0.0 < local_18[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,local_18);
    if (iVar2 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110
                (g_CDemonMission_PTR_005baf90,this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar2);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar1);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar1);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
