// Name: core_motion.cpp_CMotionController_reset_FUN_004e1680
// Address: 004e1680
// Address Range: [[004e1680, 004e16a9]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reset_FUN_004e1680(int param_1)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reset_FUN_004e1680(int param_1)

{
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(param_1);
  return;
}
