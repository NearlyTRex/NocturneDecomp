// Name: core_spirbear.cpp_FUN_0059b470
// Address: 0059b470
// Address Range: [[0059b470, 0059b492]]
// Convention: unknown
// Signature: bool core_spirbear_cpp_FUN_0059b470(int param_1)

#include "nocturne.h"

bool core_spirbear_cpp_FUN_0059b470(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  return *(int *)(pSVar1 + 0x24) == 0x92;
}
