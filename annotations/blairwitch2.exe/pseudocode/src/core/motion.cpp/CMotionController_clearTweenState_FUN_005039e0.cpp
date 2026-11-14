// Name: core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0
// Address: 005039e0
// Address Range: [[005039e0, 005039f2]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(CMotionController *this_ptr)

{
  this_ptr->tween_progress = -1.0;
  this_ptr->tween_type = MOTION_CMD_NONE;
  return;
}
