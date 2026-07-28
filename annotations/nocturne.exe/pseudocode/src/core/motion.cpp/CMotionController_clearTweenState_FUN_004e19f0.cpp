// Name: core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
// Address: 004e19f0
// Address Range: [[004e19f0, 004e1a02]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(CMotionController *this_ptr)

{
  this_ptr->tween_progress = -1.0;
  this_ptr->tween_type = MOTION_CMD_NONE;
  return;
}
