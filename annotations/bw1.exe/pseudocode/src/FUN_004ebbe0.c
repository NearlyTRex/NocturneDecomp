// Name: FUN_004ebbe0
// Address: 004ebbe0
// Address Range: [[004ebbe0, 004ebc34]]
// Convention: unknown
// Signature: void FUN_004ebbe0(int param_1)

#include "nocturne.h"

void FUN_004ebbe0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ff7c) == 0) {
    return;
  }
  iVar1 = FUN_0040c600(*(int *)(param_1 + 0x1ff7c),DAT_007c5094);
  if (param_1 == *(int *)(iVar1 + 800)) {
    *(uint *)(iVar1 + 800) = 0;
    FUN_00573a80(*(uint *)(iVar1 + 0x328));
  }
  *(uint *)(param_1 + 0x1ff7c) = 0;
  return;
}
