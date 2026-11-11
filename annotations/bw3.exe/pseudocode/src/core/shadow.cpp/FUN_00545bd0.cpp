// Name: core_shadow.cpp_FUN_00545bd0
// Address: 00545bd0
// Address Range: [[00545bd0, 00545c0d]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_00545bd0(int param_1)

#include "nocturne.h"

uint core_shadow_cpp_FUN_00545bd0(int param_1)

{
  SMotion *pSVar1;
  
  if (*(int *)(param_1 + 0x70) != 2) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)(param_1 + 0x158));
    switch(pSVar1->state_index) {
    case 0xd:
    case 0xe:
      return 1;
    case 0xf:
    case 0x10:
      return 2;
    default:
      return 0;
    }
  }
  return 2;
}
