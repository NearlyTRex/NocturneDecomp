// Name: FUN_004a6b50
// Address: 004a6b50
// Address Range: [[004a6b50, 004a6b8c]]
// Convention: unknown
// Signature: void FUN_004a6b50(int param_1)

#include "nocturne.h"

void FUN_004a6b50(int param_1)

{
  int iVar1;
  
  FUN_00408a80(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    do {
      FUN_004a7560(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x2c0));
  }
  *(uint *)(param_1 + 0x2b78) = 1;
  return;
}
