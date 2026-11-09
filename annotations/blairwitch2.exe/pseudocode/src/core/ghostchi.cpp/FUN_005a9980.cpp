// Name: core_ghostchi.cpp_FUN_005a9980
// Address: 005a9980
// Address Range: [[005a9980, 005a99e7]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9980(int param_1)

#include "nocturne.h"

void core_ghostchi_cpp_FUN_005a9980(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  *(uint *)(param_1 + 0x2814) = 1;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),10,1);
  if ((*(int *)(param_1 + 0x113b8) == 0) && (0.0 < *(float *)(param_1 + 0x113c4))) {
    unkafter_basicene_cpp_FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0,0x400ccccd);
    unkafter_basicene_cpp_FUN_0059f570(param_1);
    return;
  }
  return;
}
