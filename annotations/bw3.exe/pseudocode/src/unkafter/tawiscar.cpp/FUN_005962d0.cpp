// Name: unkafter_tawiscar.cpp_FUN_005962d0
// Address: 005962d0
// Address Range: [[005962d0, 0059630a]]
// Convention: unknown
// Signature: undefined4 unkafter_tawiscar_cpp_FUN_005962d0(int param_1)

#include "nocturne.h"

uint unkafter_tawiscar_cpp_FUN_005962d0(int param_1)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  uVar1 = *(uint *)(pSVar2 + 0x24);
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return 1;
    }
    if (uVar1 == 0xd) {
      return 2;
    }
  }
  return 0;
}
