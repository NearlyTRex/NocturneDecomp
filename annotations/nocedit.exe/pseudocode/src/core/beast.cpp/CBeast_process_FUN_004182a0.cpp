// Name: core_beast.cpp_CBeast_process_FUN_004182a0
// Address: 004182a0
// Address Range: [[004182a0, 00418325]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_process_FUN_004182a0(CBeast *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_process_FUN_004182a0(CBeast *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float local_10;
  
  iVar1 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar1 != 0) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    local_10 = delta_time * (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < local_10) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                (&this_ptr_00->motion_controller,&local_10);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr_00);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  }
  return;
}
