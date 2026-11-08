// Name: FUN_004b4f00
// Address: 004b4f00
// Address Range: [[004b4f00, 004b5031]]
// Convention: unknown
// Signature: void FUN_004b4f00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4f00(int param_1)

{
  int iVar1;
  uint uStack_18;
  
  iVar1 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xa70) != 0)) {
    uStack_18 = *(float *)(param_1 + 0xa74);
    iVar1 = (**(code **)*0x01D70A78)(0x01D70A78,0x38);
    if (iVar1 != 0) {
      uStack_18 = uStack_18 * (float)_DAT_005c2238;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0xa70) = **(float **)(param_1 + 0xa70) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0xa70) = **(float **)(param_1 + 0xa70) + uStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x48);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0xa70) + 8) =
           *(float *)(*(int *)(param_1 + 0xa70) + 8) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x50);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0xa70) + 8) =
           *(float *)(*(int *)(param_1 + 0xa70) + 8) + uStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1e);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0xa70) + 4) =
           *(float *)(*(int *)(param_1 + 0xa70) + 4) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x10);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0xa70) + 4) =
           *(float *)(*(int *)(param_1 + 0xa70) + 4) + uStack_18;
      return;
    }
  }
  return;
}
