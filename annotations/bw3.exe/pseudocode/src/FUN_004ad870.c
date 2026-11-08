// Name: FUN_004ad870
// Address: 004ad870
// Address Range: [[004ad870, 004ad8ac]]
// Convention: unknown
// Signature: void FUN_004ad870(int param_1)

#include "nocturne.h"

void FUN_004ad870(int param_1)

{
  int iVar1;
  
  FUN_00408890(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    do {
      FUN_004ae280(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x164));
  }
  *(uint *)(param_1 + 0x2a1c) = 1;
  return;
}
