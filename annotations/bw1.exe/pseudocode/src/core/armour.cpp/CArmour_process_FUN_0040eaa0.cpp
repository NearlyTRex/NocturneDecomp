// Name: core_armour.cpp_CArmour_process_FUN_0040eaa0
// Address: 0040eaa0
// Address Range: [[0040eaa0, 0040ebdf]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_process_FUN_0040eaa0(CArmour *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_process_FUN_0040eaa0(CArmour *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  float fStack_20;
  CVector3f CStack_1c;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 != 0) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_20 = delta_time * (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < fStack_20) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&this_ptr_00->base,&fStack_20);
    }
    fVar1 = (this_ptr->base).speed;
    *(float *)&(this_ptr->base).base.field_0x2524 =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar1);
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                      ((CCharacter *)this_ptr,delta_time);
    if (iVar2 != 0) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0xc268);
    if (iVar2 != 0) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"armour.wav");
      CStack_1c.x = 0.0;
      CStack_1c.y = 0.0;
      CStack_1c.z = 5.0;
      core_charactr_cpp_CCharacter_dismember_FUN_00430d90((CCharacter *)this_ptr,&CStack_1c,-1.0,1);
      return;
    }
  }
  return;
}
