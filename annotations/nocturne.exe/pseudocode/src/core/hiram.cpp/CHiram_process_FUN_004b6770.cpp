// Name: core_hiram.cpp_CHiram_process_FUN_004b6770
// Address: 004b6770
// Address Range: [[004b6770, 004b68ad]]
// Convention: unknown
// Signature: void core_hiram_cpp_CHiram_process_FUN_004b6770(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_hiram_cpp_CHiram_process_FUN_004b6770(CCharacter *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  SMotion *pSVar2;
  CDemonActor *actor_ptr;
  CGlass *this_ptr_00;
  uint class_name_hash;
  float local_18 [2];
  
  iVar1 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->model).motion_controller);
  if (pSVar2->state_index != 1) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1[2].flames[0x1b].off_event + 0xc);
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->model).motion_controller,1,1);
      class_name_hash = g_CGlassActorType_01c78c40.name_hash;
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                            (0x01CC9450,"GlassHiram");
      this_ptr_00 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040d890(actor_ptr,class_name_hash)
      ;
      if (this_ptr_00 != (CGlass *)0x0) {
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (this_ptr_00,&(this_ptr_00->base).location.position);
      }
    }
  }
  local_18[0] = param_2;
  (param_1->model).accumulated_root_motion.z = 0.0;
  this_ptr = &param_1->model;
  (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
  (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
  while (0.0 < local_18[0]) {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,local_18);
    if (iVar1 == 0x29a) {
      core_mission_cpp_FUN_004d9110(0x01CC9450,param_1,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar1);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(this_ptr);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(this_ptr);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
