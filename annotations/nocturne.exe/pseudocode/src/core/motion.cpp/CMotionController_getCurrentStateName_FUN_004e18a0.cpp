// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0
// Address: 004e18a0
// Address Range: [[004e18a0, 004e18c4]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(int *param_1)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(int *param_1)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1);
  return *(int *)(iVar1 + 0x24) * 0x1e + *param_1 + 4;
}
