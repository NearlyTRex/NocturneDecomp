// Name: core_styldemo.cpp_FUN_005a02b0
// Address: 005a02b0
// Address Range: [[005a02b0, 005a02d0]]
// Convention: unknown
// Signature: bool core_styldemo_cpp_FUN_005a02b0(int param_1)

#include "nocturne.h"

bool core_styldemo_cpp_FUN_005a02b0(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  return *(int *)(pSVar1 + 0x24) == 0x1b;
}
