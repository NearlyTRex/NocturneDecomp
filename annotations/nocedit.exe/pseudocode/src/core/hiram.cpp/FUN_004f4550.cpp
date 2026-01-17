// Name: core_hiram.cpp_FUN_004f4550
// Address: 004f4550
// Address Range: [[004f4550, 004f468d]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_FUN_004f4550()

#include "nocturne.h"

/* Signature: byte actors_npc_hiram.cpp_FUN_004f4550(uint param_1, uint param_2)
    */

void core_hiram_cpp_FUN_004f4550(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  SMotion *pSVar2;
  CDemonActor *actor_ptr;
  CGlass *this_ptr_00;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  uint class_name_hash;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar1 == 0) {
    return;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(in_stack_00000004->model).motion_controller);
  if (pSVar2->state_index != 1) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x5028);
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,1,1);
      class_name_hash = g_CGlassClassInfo.name_hash;
      actor_ptr = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      this_ptr_00 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash)
      ;
      if (this_ptr_00 != (CGlass *)0x0) {
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (this_ptr_00,&(this_ptr_00->base).location.position);
      }
    }
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  this_ptr = &in_stack_00000004->model;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  while (0.0 < in_stack_00000008) {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    if (iVar1 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}
