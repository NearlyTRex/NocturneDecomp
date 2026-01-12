// Name: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
// Address: 0052dd20
// Address Range: [[0052dd20, 0052dda7]]
// Convention: __cdecl
// Signature: float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)

#include "nocturne.h"

float __cdecl
core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
          (CMotionController *this_ptr,int desired_state_index)

{
  float fStack_c;
  
  if (this_ptr->tween_progress <= 0.0) {
    if (desired_state_index !=
        this_ptr->motion_list_ptr->motions[this_ptr->current_motion_index].state_index) {
      return 0.0;
    }
    fStack_c = 1.0;
  }
  else if (desired_state_index ==
           this_ptr->motion_list_ptr->motions[this_ptr->tween_target_motion].state_index) {
    fStack_c = this_ptr->tween_progress;
  }
  else {
    if (desired_state_index !=
        this_ptr->motion_list_ptr->motions[this_ptr->current_motion_index].state_index) {
      return 0.0;
    }
    fStack_c = 1.0 - this_ptr->tween_progress;
  }
  return fStack_c;
}
