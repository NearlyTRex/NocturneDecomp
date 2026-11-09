// Name: core_hostage.cpp_FUN_004ef240
// Address: 004ef240
// Address Range: [[004ef240, 004ef27f]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_FUN_004ef240(int param_1)

#include "nocturne.h"

uint core_hostage_cpp_FUN_004ef240(int param_1)

{
  SMotion *pSVar1;
  
  if (((*(int *)(param_1 + 0x1fe68) != 0) && (*(int *)(param_1 + 0x1fe6c) != 3)) &&
     (*(int *)(param_1 + 0x1fe6c) != 4)) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    if (*(int *)(pSVar1 + 0x24) != 10) {
      return 1;
    }
  }
  return 0;
}
