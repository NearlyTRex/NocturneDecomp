// Name: core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
// Address: 004e16b0
// Address Range: [[004e16b0, 004e1737]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController *this_ptr,int desired_state_index,int force_immediate)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController *this_ptr,int desired_state_index,int force_immediate)

{
  if (desired_state_index < 0) {
    this_ptr->state_index = -1;
    return;
  }
  if (this_ptr->motion_list_ptr->state_count <= desired_state_index) {
    g_CHAR_PTR_01cc4800 = "..\\core\\motion.cpp";
    g_INT_01cc4804 = 0x274;
    core_main_c_FUN_004c8440("CMotionController::setDesiredState - invalid state index");
  }
  if (desired_state_index != this_ptr->state_index) {
    if (this_ptr->in_transition != (SMotionTransition *)0x0) {
      if (this_ptr->tween_direction == 0) {
        core_motion_cpp_CMotionController_reverseTransition_FUN_004e1600(this_ptr);
      }
      this_ptr->in_transition = (SMotionTransition *)0x0;
    }
    this_ptr->tween_set_new_state = 0;
    this_ptr->state_index = desired_state_index;
  }
  if (force_immediate == 0) {
    return;
  }
  core_motion_cpp_CMotionController_findAndStartTransition_FUN_004e1500(this_ptr);
  return;
}
