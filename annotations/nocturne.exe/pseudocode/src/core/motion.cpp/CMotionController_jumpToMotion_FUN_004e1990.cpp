// Name: core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
// Address: 004e1990
// Address Range: [[004e1990, 004e19eb]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(CMotionController *this_ptr,int target_motion_index,float target_frame_number)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(CMotionController *this_ptr,int target_motion_index,float target_frame_number)

{
  int iVar1;
  
  if (target_frame_number == -1.0f) {
    iVar1 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       target_motion_index);
    target_frame_number = (float)iVar1;
  }
  this_ptr->in_transition = (SMotionTransition *)0x0;
  this_ptr->current_motion_index = target_motion_index;
  this_ptr->current_frame_number = target_frame_number;
  core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(this_ptr);
  return;
}
