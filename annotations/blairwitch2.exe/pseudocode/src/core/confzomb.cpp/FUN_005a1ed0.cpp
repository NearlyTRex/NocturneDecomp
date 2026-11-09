// Name: core_confzomb.cpp_FUN_005a1ed0
// Address: 005a1ed0
// Address Range: [[005a1ed0, 005a1f37]]
// Convention: unknown
// Signature: void core_confzomb_cpp_FUN_005a1ed0(int param_1)

#include "nocturne.h"

void core_confzomb_cpp_FUN_005a1ed0(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),5,1);
  *(uint *)(param_1 + 0x2814) = 1;
  if ((*(int *)(param_1 + 0x113b8) == 0) && (0.0 < *(float *)(param_1 + 0x113c4))) {
    unkafter_basicene_cpp_FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0,0x400ccccd);
    unkafter_basicene_cpp_FUN_0059f570(param_1);
    return;
  }
  return;
}
