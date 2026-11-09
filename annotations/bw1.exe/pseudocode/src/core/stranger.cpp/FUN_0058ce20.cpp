// Name: core_stranger.cpp_FUN_0058ce20
// Address: 0058ce20
// Address Range: [[0058ce20, 0058ce71]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0058ce20(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_0058ce20(int param_1)

{
  *(uint *)(param_1 + 0x20014) = 0x40800000;
  if (*(int *)(param_1 + 0x2628) == *(int *)(param_1 + 0x20004)) {
    *(uint *)(param_1 + 0x20004) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),0,1);
  return;
}
