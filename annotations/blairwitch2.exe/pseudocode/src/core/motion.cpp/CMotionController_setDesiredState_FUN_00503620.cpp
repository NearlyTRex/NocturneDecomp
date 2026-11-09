// Name: core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
// Address: 00503620
// Address Range: [[00503620, 005036a7]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController *this_ptr,int desired_state_index,int force_immediate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController *this_ptr,int desired_state_index,int force_immediate)

{
  if (desired_state_index < 0) {
    *(uint *)&this_ptr->field_0x28 = 0xffffffff;
    return;
  }
  if (**(int **)this_ptr <= desired_state_index) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x2a4;
    core_main_c_FUN_004e4500("CMotionController::setDesiredState - invalid state index");
  }
  if (desired_state_index != *(int *)&this_ptr->field_0x28) {
    if (*(int *)&this_ptr->field_0x2c != 0) {
      if (*(int *)&this_ptr->field_0x20 == 0) {
        core_motion_cpp_CMotionController_reverseTransition_FUN_00503560(this_ptr);
      }
      *(uint *)&this_ptr->field_0x2c = 0;
    }
    *(uint *)&this_ptr->field_0x24 = 0;
    *(int *)&this_ptr->field_0x28 = desired_state_index;
  }
  if (force_immediate == 0) {
    return;
  }
  core_motion_cpp_CMotionController_findAndStartTransition_FUN_00503470(this_ptr);
  return;
}
