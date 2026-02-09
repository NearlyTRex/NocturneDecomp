// Name: core_armour.cpp_CArmour_process_FUN_00412260
// Address: 00412260
// Address Range: [[00412260, 0041239e]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_process_FUN_00412260(CArmour *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_process_FUN_00412260(CArmour *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar1 = (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < delta_time * fVar1) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    }
    fVar1 = (this_ptr->base).speed;
    fVar2 = (float)3.1415926535000001;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.turn_speed = delta_time * fVar2 * fVar1;
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&this_ptr_00->motion_controller)
    ;
    iVar3 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
    if (iVar3 != 0) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(g_CEventListPtr,this_ptr->unk);
    if (iVar3 != 0) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"armour.wav");
      core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
      return;
    }
  }
  return;
}
