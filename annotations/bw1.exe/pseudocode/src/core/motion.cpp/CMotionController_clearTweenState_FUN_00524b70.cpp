// Name: core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70
// Address: 00524b70
// Address Range: [[00524b70, 00524b82]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController *this_ptr)

{
  this_ptr->tween_progress = -1.0;
  this_ptr->tween_type = MOTION_CMD_NONE;
  return;
}
