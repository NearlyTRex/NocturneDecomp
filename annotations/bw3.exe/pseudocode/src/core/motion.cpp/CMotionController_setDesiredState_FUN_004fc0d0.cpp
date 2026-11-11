// Name: core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
// Address: 004fc0d0
// Address Range: [[004fc0d0, 004fc157]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController *this_ptr,int desired_state_index,int force_immediate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController *this_ptr,int desired_state_index,int force_immediate)

{
  if (desired_state_index < 0) {
    this_ptr->state_index = -1;
    return;
  }
  if (this_ptr->motion_list_ptr->state_count <= desired_state_index) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x2bd;
    core_main_c_FUN_004e4330("CMotionController::setDesiredState - invalid state index");
  }
  if (desired_state_index != this_ptr->state_index) {
    if (this_ptr->in_transition != (SMotionTransition *)0x0) {
      if (this_ptr->tween_direction == 0) {
        core_motion_cpp_CMotionController_reverseTransition_FUN_004fc010(this_ptr);
      }
      this_ptr->in_transition = (SMotionTransition *)0x0;
    }
    this_ptr->tween_set_new_state = 0;
    this_ptr->state_index = desired_state_index;
  }
  if (force_immediate == 0) {
    return;
  }
  core_motion_cpp_CMotionController_findAndStartTransition_FUN_004fbf20(this_ptr);
  return;
}
