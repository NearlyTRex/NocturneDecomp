// Name: core_beast.cpp_CBeast_process_FUN_00414770
// Address: 00414770
// Address Range: [[00414770, 004147f5]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_process_FUN_00414770(CBeast *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_process_FUN_00414770(CBeast *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float fStack_10;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar1 != 0) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_10 = delta_time * (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < fStack_10) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&this_ptr_00->base,&fStack_10);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_00);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  }
  return;
}
