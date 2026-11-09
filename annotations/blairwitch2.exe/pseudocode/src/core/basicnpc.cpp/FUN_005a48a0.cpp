// Name: core_basicnpc.cpp_FUN_005a48a0
// Address: 005a48a0
// Address Range: [[005a48a0, 005a48c0]]
// Convention: unknown
// Signature: void core_basicnpc_cpp_FUN_005a48a0(int param_1)

#include "nocturne.h"

void core_basicnpc_cpp_FUN_005a48a0(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),0,1);
  return;
}
