// Name: core_styldemo.cpp_FUN_005a0180
// Address: 005a0180
// Address Range: [[005a0180, 005a01b2]]
// Convention: unknown
// Signature: undefined4 core_styldemo_cpp_FUN_005a0180(int param_1)

#include "nocturne.h"

uint core_styldemo_cpp_FUN_005a0180(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  switch(*(uint *)(pSVar1 + 0x24)) {
  case 5:
  case 0xe:
    return 1;
  case 6:
  case 0xf:
    return 2;
  default:
    return 0;
  }
}
