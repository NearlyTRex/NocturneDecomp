// Name: core_stranger.cpp_FUN_0056a1e0
// Address: 0056a1e0
// Address Range: [[0056a1e0, 0056a231]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056a1e0(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_0056a1e0(int param_1)

{
  *(uint *)(param_1 + 0x256ac) = 0x40800000;
  if (*(int *)(param_1 + 0x2698) == *(int *)(param_1 + 0x25698)) {
    *(uint *)(param_1 + 0x25698) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),0,1);
  return;
}
