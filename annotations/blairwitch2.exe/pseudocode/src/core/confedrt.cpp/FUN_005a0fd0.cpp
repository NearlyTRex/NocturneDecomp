// Name: core_confedrt.cpp_FUN_005a0fd0
// Address: 005a0fd0
// Address Range: [[005a0fd0, 005a0ff0]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a0fd0(int param_1)

#include "nocturne.h"

void core_confedrt_cpp_FUN_005a0fd0(int param_1)

{
  if (*(int *)(param_1 + 0x11390) < 0) {
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),*(int *)(param_1 + 0x11390),1);
  return;
}
