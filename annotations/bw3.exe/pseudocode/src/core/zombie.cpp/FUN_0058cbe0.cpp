// Name: core_zombie.cpp_FUN_0058cbe0
// Address: 0058cbe0
// Address Range: [[0058cbe0, 0058cc12]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_FUN_0058cbe0(int param_1)

#include "nocturne.h"

uint core_zombie_cpp_FUN_0058cbe0(int param_1)

{
  int iVar1;
  SMotion *pSVar2;
  
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  iVar1 = *(int *)(pSVar2 + 0x24);
  if ((((iVar1 != 0xf) && (iVar1 != 0x16)) && (iVar1 != 0x17)) && (iVar1 != 0x15)) {
    return 0;
  }
  return 1;
}
