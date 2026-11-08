// Name: FUN_004b39d0
// Address: 004b39d0
// Address Range: [[004b39d0, 004b3b01]]
// Convention: unknown
// Signature: void FUN_004b39d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b39d0(int param_1)

{
  int iVar1;
  uint uStack_18;
  
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x9e0) != 0)) {
    uStack_18 = *(float *)(param_1 + 0x9e4);
    iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x38);
    if (iVar1 != 0) {
      uStack_18 = uStack_18 * (float)_DAT_005d732b;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0x9e0) = **(float **)(param_1 + 0x9e0) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0x9e0) = **(float **)(param_1 + 0x9e0) + uStack_18;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x48);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9e0) + 8) =
           *(float *)(*(int *)(param_1 + 0x9e0) + 8) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x50);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9e0) + 8) =
           *(float *)(*(int *)(param_1 + 0x9e0) + 8) + uStack_18;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1e);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9e0) + 4) =
           *(float *)(*(int *)(param_1 + 0x9e0) + 4) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x10);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9e0) + 4) =
           *(float *)(*(int *)(param_1 + 0x9e0) + 4) + uStack_18;
      return;
    }
  }
  return;
}
