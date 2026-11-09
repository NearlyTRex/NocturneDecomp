// Name: core_twigzomb.cpp_FUN_005a2a90
// Address: 005a2a90
// Address Range: [[005a2a90, 005a2ab0]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_FUN_005a2a90(int param_1)

#include "nocturne.h"

void core_twigzomb_cpp_FUN_005a2a90(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),3,1);
  return;
}
