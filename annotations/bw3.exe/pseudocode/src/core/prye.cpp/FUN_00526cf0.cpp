// Name: core_prye.cpp_FUN_00526cf0
// Address: 00526cf0
// Address Range: [[00526cf0, 00526db1]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00526cf0(int param_1)

#include "nocturne.h"

void core_prye_cpp_FUN_00526cf0(int param_1)

{
  uint *puVar1;
  int iVar2;
  SMotion *pSVar3;
  uint auStack_24 [3];
  uint auStack_18 [3];
  
  if (0 < *(int *)(param_1 + 0x2f08)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    iVar2 = *(int *)(param_1 + 0x309c);
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)(param_1 + 0x158));
    puVar1 = (uint *)(iVar2 + 0x3ab24);
    if (pSVar3->state_index == 0x37) {
      if (puVar1 != auStack_18) {
        *(uint *)(iVar2 + 0x3ab28) = 0;
        *puVar1 = 0;
        *(uint *)(iVar2 + 0x3ab2c) = 0xc1a00000;
        return;
      }
    }
    else if ((pSVar3->state_index == 0x38) && (puVar1 != auStack_24)) {
      *(uint *)(iVar2 + 0x3ab28) = 0;
      *puVar1 = 0;
      *(uint *)(iVar2 + 0x3ab2c) = 0x41a00000;
      return;
    }
  }
  return;
}
