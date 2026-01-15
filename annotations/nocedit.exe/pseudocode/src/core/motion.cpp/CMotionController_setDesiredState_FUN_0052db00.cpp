// Name: core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
// Address: 0052db00
// Address Range: [[0052db00, 0052db87]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
          (CMotionController *this_ptr,int desired_state_index,int force_immediate)

{
  if (desired_state_index < 0) {
    this_ptr->state_index = -1;
    return;
  }
  if (this_ptr->motion_list_ptr->state_count <= desired_state_index) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x274;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMotionController::setDesiredState - invalid state index");
  }
  if (desired_state_index != this_ptr->state_index) {
    if (this_ptr->in_transition != 0) {
      if (this_ptr->tween_direction == 0) {
        core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(this_ptr);
      }
      this_ptr->in_transition = 0;
    }
    this_ptr->tween_set_new_state = 0;
    this_ptr->state_index = desired_state_index;
  }
  if (force_immediate == 0) {
    return;
  }
  core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(this_ptr);
  return;
}
