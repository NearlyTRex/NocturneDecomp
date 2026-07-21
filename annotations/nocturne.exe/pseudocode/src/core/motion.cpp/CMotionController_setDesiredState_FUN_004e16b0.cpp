// Name: core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
// Address: 004e16b0
// Address Range: [[004e16b0, 004e1737]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(uint *param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_1[10] = 0xffffffff;
    return;
  }
  if (*(int *)*param_1 <= param_2) {
    _DAT_01cc4800 = "?..\\core\\motion.cpp" + 1;
    _DAT_01cc4804 = 0x274;
    FUN_004c8440("CMotionController::setDesiredState - invalid state index");
  }
  if (param_2 != param_1[10]) {
    if (param_1[0xb] != 0) {
      if (param_1[8] == 0) {
        core_motion_cpp_CMotionController_reverseTransition_FUN_004e1600(param_1);
      }
      param_1[0xb] = 0;
    }
    param_1[9] = 0;
    param_1[10] = param_2;
  }
  if (param_3 == 0) {
    return;
  }
  core_motion_cpp_CMotionController_findAndStartTransition_FUN_004e1500(param_1);
  return;
}
