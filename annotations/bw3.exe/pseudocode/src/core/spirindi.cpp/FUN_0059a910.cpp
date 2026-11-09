// Name: core_spirindi.cpp_FUN_0059a910
// Address: 0059a910
// Address Range: [[0059a910, 0059a932]]
// Convention: unknown
// Signature: bool core_spirindi_cpp_FUN_0059a910(int param_1)

#include "nocturne.h"

bool core_spirindi_cpp_FUN_0059a910(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  return *(int *)(pSVar1 + 0x24) == 0x92;
}
