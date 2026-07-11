// Name: FUN_0049b260
// Address: 0049b260
// Address Range: [[0049b260, 0049b391]]
// Convention: unknown
// Signature: void FUN_0049b260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b260(int param_1)

{
  int iVar1;
  uint uStack_18;
  
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x9bc) != 0)) {
    uStack_18 = *(float *)(param_1 + 0x9c0);
    iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x38);
    if (iVar1 != 0) {
      uStack_18 = uStack_18 * (float)_DAT_005823fa;
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x4b);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0x9bc) = **(float **)(param_1 + 0x9bc) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x4d);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0x9bc) = **(float **)(param_1 + 0x9bc) + uStack_18;
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x48);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 8) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 8) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x50);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 8) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 8) + uStack_18;
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1e);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 4) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 4) - uStack_18;
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x10);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 4) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 4) + uStack_18;
      return;
    }
  }
  return;
}
