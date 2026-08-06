// Name: core_beast.cpp_CBeast_process_FUN_004150d0
// Address: 004150d0
// Address Range: [[004150d0, 00415155]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_process_FUN_004150d0(CBeast *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_process_FUN_004150d0(CBeast *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float local_10;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar1 != 0) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    local_10 = delta_time * (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < local_10) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0
                (&this_ptr_00->motion_controller,&local_10);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(this_ptr_00);
    core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  }
  return;
}
