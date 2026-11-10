// Name: core_motion.cpp_CMotionController_reset_FUN_004fc090
// Address: 004fc090
// Address Range: [[004fc090, 004fc0b9]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reset_FUN_004fc090(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reset_FUN_004fc090(CMotionController *this_ptr)

{
  this_ptr->current_motion_index = 0;
  this_ptr->current_frame_number = 0.0;
  this_ptr->in_transition = (SMotionTransition *)0x0;
  this_ptr->state_index = -1;
  core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(this_ptr);
  return;
}
