// Name: FUN_0041be70
// Address: 0041be70
// Address Range: [[0041be70, 0041bf0a]]
// Convention: unknown
// Signature: void FUN_0041be70(int param_1)

#include "nocturne.h"

void FUN_0041be70(int param_1)

{
  int iVar1;
  
  FUN_00408a80(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  iVar1 = *(int *)(iVar1 + 0x100);
  if (*(float *)(param_1 + 0x46c) < 0.0) {
    *(uint *)(param_1 + 0x46c) = 0;
  }
  if ((float)iVar1 <= *(float *)(param_1 + 0x46c)) {
    *(float *)(param_1 + 0x46c) = (float)(iVar1 + -1);
  }
  if (-1 < *(int *)(param_1 + 0x744)) {
    *(uint *)(param_1 + 0x484) = 0;
    return;
  }
  FUN_0041bf10(param_1);
  *(uint *)(param_1 + 0x484) = 0;
  return;
}
