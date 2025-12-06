// Name: core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
// Address: 0052de40
// Address Range: [[0052de40, 0052de52]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController *this_ptr)

{
  this_ptr->tween_progress = -1.0;
  this_ptr->tween_type = 0;
  return;
}
