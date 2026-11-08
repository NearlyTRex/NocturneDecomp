// Name: FUN_004bfb20
// Address: 004bfb20
// Address Range: [[004bfb20, 004bfb5c]]
// Convention: unknown
// Signature: void FUN_004bfb20(int param_1)

#include "nocturne.h"

void FUN_004bfb20(int param_1)

{
  int iVar1;
  
  FUN_00408850(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    do {
      FUN_004c0530(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x164));
  }
  *(uint *)(param_1 + 0x2a1c) = 1;
  return;
}
