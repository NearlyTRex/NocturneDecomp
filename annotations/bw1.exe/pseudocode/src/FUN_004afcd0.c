// Name: FUN_004afcd0
// Address: 004afcd0
// Address Range: [[004afcd0, 004afce7]]
// Convention: unknown
// Signature: void FUN_004afcd0(int param_1)

#include "nocturne.h"

void FUN_004afcd0(int param_1)

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
