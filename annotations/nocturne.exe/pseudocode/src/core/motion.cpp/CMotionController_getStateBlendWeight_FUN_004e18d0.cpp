// Name: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
// Address: 004e18d0
// Address Range: [[004e18d0, 004e1957]]
// Convention: __cdecl
// Signature: float __cdecl core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController *this_ptr,int desired_state_index)

#include "nocturne.h"

float __cdecl core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController *this_ptr,int desired_state_index)

{
  float local_10;
  
  if (this_ptr->tween_progress <= 0.0) {
    if (desired_state_index !=
        this_ptr->motion_list_ptr->motions[this_ptr->current_motion_index].state_index) {
      return 0.0;
    }
    local_10 = 1.0;
  }
  else if (desired_state_index ==
           this_ptr->motion_list_ptr->motions[this_ptr->tween_target_motion].state_index) {
    local_10 = this_ptr->tween_progress;
  }
  else {
    if (desired_state_index !=
        this_ptr->motion_list_ptr->motions[this_ptr->current_motion_index].state_index) {
      return 0.0;
    }
    local_10 = 1.0 - this_ptr->tween_progress;
  }
  return local_10;
}
