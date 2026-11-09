// Name: core_union.cpp_FUN_005a4e60
// Address: 005a4e60
// Address Range: [[005a4e60, 005a4e80]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a4e60(int param_1)

#include "nocturne.h"

void core_union_cpp_FUN_005a4e60(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),6,1);
  return;
}
