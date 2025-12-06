// Name: core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
// Address: 0052da50
// Address Range: [[0052da50, 0052daaf]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50(CMotionController * this_ptr)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(CMotionController *this_ptr)

{
  int iVar1;
  float fVar2;
  
  this_ptr->tween_direction = 1;
  iVar1 = this_ptr->current_motion_index;
  this_ptr->current_motion_index = this_ptr->tween_target_motion;
  this_ptr->tween_target_motion = iVar1;
  fVar2 = this_ptr->current_frame_number;
  this_ptr->current_frame_number = this_ptr->tween_target_frame;
  this_ptr->tween_target_frame = fVar2;
  if (this_ptr->tween_type == 5) {
    this_ptr->tween_type = 4;
  }
  else if (this_ptr->tween_type == 4) {
    this_ptr->tween_type = 5;
    this_ptr->tween_progress = 1.0 - this_ptr->tween_progress;
    return;
  }
  this_ptr->tween_progress = 1.0 - this_ptr->tween_progress;
  return;
}
