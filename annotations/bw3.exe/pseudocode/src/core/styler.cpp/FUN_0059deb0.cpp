// Name: core_styler.cpp_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059ded2]]
// Convention: unknown
// Signature: bool core_styler_cpp_FUN_0059deb0(int param_1)

#include "nocturne.h"

bool core_styler_cpp_FUN_0059deb0(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  return *(int *)(pSVar1 + 0x24) == 0x9a;
}
