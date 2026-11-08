// Name: FUN_00497250
// Address: 00497250
// Address Range: [[00497250, 004972bd]]
// Convention: unknown
// Signature: void FUN_00497250(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497250(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(0x01CB6900 + 0x284);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar1;
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + fVar1;
  FUN_00510ef0(param_1);
  iVar2 = *(int *)(param_1 + 0x40) - _DAT_01c2a370 / 6;
  *(int *)(param_1 + 0x40) = iVar2;
  if (-1 < iVar2) {
    return;
  }
  *(uint *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  return;
}
