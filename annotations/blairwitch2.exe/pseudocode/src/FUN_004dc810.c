// Name: FUN_004dc810
// Address: 004dc810
// Address Range: [[004dc810, 004dc84f]]
// Convention: unknown
// Signature: void FUN_004dc810(int param_1)

#include "nocturne.h"

void FUN_004dc810(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_004fc270(0x01D182F0,*(uint *)(iVar2 + 0x14));
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  *(uint *)(param_1 + 0x460) = 0;
  return;
}
