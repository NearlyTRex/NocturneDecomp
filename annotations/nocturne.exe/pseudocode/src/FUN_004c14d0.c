// Name: FUN_004c14d0
// Address: 004c14d0
// Address Range: [[004c14d0, 004c150f]]
// Convention: unknown
// Signature: void FUN_004c14d0(int param_1)

#include "nocturne.h"

void FUN_004c14d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_004d8cd0(0x01CC9450,*(uint *)(iVar2 + 0xc));
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  *(uint *)(param_1 + 0x450) = 0;
  return;
}
