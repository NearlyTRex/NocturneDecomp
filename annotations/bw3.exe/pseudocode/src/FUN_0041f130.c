// Name: FUN_0041f130
// Address: 0041f130
// Address Range: [[0041f130, 0041f1d0]]
// Convention: unknown
// Signature: void FUN_0041f130(int param_1)

#include "nocturne.h"

void FUN_0041f130(int param_1)

{
  int iVar1;
  
  FUN_00408890(param_1);
  FUN_00462580(param_1 + 0x158);
  iVar1 = FUN_004625a0(param_1 + 0x158);
  iVar1 = *(int *)(iVar1 + 0x100);
  if (*(float *)(param_1 + 0x310) < 0.0) {
    *(uint *)(param_1 + 0x310) = 0;
  }
  if ((float)iVar1 <= *(float *)(param_1 + 0x310)) {
    *(float *)(param_1 + 0x310) = (float)(iVar1 + -1);
  }
  if (*(int *)(param_1 + 0x5e8) < 0) {
    FUN_0041f1e0(param_1);
  }
  *(uint *)(param_1 + 0x6dc) = 0;
  *(uint *)(param_1 + 0x6e4) = 0x10000;
  *(uint *)(param_1 + 0x328) = 0;
  return;
}
