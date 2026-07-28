// Name: core_hostage.cpp_CHostage_isGrabbable_FUN_004b8540
// Address: 004b8540
// Address Range: [[004b8540, 004b857f]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(int param_1)

#include "nocturne.h"

uint core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(int param_1)

{
  SMotion *pSVar1;
  
  if (((*(int *)(param_1 + 0x1f920) != 0) && (*(int *)(param_1 + 0x1f924) != 3)) &&
     (*(int *)(param_1 + 0x1f924) != 4)) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       ((CMotionController *)(param_1 + 0x150));
    if (pSVar1->state_index != 10) {
      return 1;
    }
  }
  return 0;
}
