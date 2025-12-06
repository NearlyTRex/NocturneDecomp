// Name: core_motion.cpp_CMotionController_reset_FUN_0052dad0
// Address: 0052dad0
// Address Range: [[0052dad0, 0052daf9]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_reset_FUN_0052dad0(CMotionController * this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reset_FUN_0052dad0(CMotionController *this_ptr)

{
  this_ptr->current_motion_index = 0;
  this_ptr->current_frame_number = 0.0;
  this_ptr->in_transition = 0;
  this_ptr->state_index = -1;
  core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(this_ptr);
  return;
}
