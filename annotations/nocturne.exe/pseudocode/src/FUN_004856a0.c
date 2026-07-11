// Name: FUN_004856a0
// Address: 004856a0
// Address Range: [[004856a0, 004856b7]]
// Convention: unknown
// Signature: void FUN_004856a0(int param_1)

#include "nocturne.h"

void FUN_004856a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x20) = iVar1;
  if (-1 < iVar1) {
    return;
  }
  *(uint *)(param_1 + 0x20) = 0;
  return;
}
