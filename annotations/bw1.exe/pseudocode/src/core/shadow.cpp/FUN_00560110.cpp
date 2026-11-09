// Name: core_shadow.cpp_FUN_00560110
// Address: 00560110
// Address Range: [[00560110, 0056014d]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_00560110(int param_1)

#include "nocturne.h"

uint core_shadow_cpp_FUN_00560110(int param_1)

{
  SMotion *pSVar1;
  
  if (*(int *)(param_1 + 0x70) != 2) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    switch(*(uint *)(pSVar1 + 0x24)) {
    case 0xf:
    case 0x10:
      return 1;
    case 0x11:
    case 0x12:
      return 2;
    default:
      return 0;
    }
  }
  return 2;
}
