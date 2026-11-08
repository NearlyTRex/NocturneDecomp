// Name: FUN_00421de0
// Address: 00421de0
// Address Range: [[00421de0, 00421e7a]]
// Convention: unknown
// Signature: void FUN_00421de0(int param_1)

#include "nocturne.h"

void FUN_00421de0(int param_1)

{
  int iVar1;
  
  FUN_00408850(param_1);
  FUN_004688e0(param_1 + 0x158);
  iVar1 = FUN_00468900(param_1 + 0x158);
  iVar1 = *(int *)(iVar1 + 0x100);
  if (*(float *)(param_1 + 0x310) < 0.0) {
    *(uint *)(param_1 + 0x310) = 0;
  }
  if ((float)iVar1 <= *(float *)(param_1 + 0x310)) {
    *(float *)(param_1 + 0x310) = (float)(iVar1 + -1);
  }
  if (-1 < *(int *)(param_1 + 0x5e8)) {
    *(uint *)(param_1 + 0x328) = 0;
    return;
  }
  FUN_00421e80(param_1);
  *(uint *)(param_1 + 0x328) = 0;
  return;
}
