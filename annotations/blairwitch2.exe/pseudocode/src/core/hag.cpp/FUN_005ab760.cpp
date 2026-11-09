// Name: core_hag.cpp_FUN_005ab760
// Address: 005ab760
// Address Range: [[005ab760, 005ab780]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005ab760(int param_1)

#include "nocturne.h"

void core_hag_cpp_FUN_005ab760(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),6,1);
  return;
}
