// Name: FUN_00448380
// Address: 00448380
// Address Range: [[00448380, 004483e2]]
// Convention: unknown
// Signature: void FUN_00448380(int param_1)

#include "nocturne.h"

void FUN_00448380(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00481a28(*(int *)(param_1 + 0x13c) << 2);
    } while (iVar1 < *(int *)(param_1 + 0x140));
  }
  return;
}
