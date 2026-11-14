// Name: core_motion.cpp_CMotionController_reverseTransition_FUN_00503560
// Address: 00503560
// Address Range: [[00503560, 005035bf]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_00503560(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_00503560(CMotionController *this_ptr)

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
  if (this_ptr->tween_type == MOTION_CMD_TWEEN_ADVANCE_BOTH) {
    this_ptr->tween_type = MOTION_CMD_TWEEN_ADVANCE;
  }
  else if (this_ptr->tween_type == MOTION_CMD_TWEEN_ADVANCE) {
    this_ptr->tween_type = MOTION_CMD_TWEEN_ADVANCE_BOTH;
    this_ptr->tween_progress = 1.0 - this_ptr->tween_progress;
    return;
  }
  this_ptr->tween_progress = 1.0 - this_ptr->tween_progress;
  return;
}
