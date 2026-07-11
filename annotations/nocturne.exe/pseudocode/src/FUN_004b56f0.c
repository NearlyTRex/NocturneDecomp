// Name: FUN_004b56f0
// Address: 004b56f0
// Address Range: [[004b56f0, 004b5744]]
// Convention: unknown
// Signature: void FUN_004b56f0(int param_1)

#include "nocturne.h"

void FUN_004b56f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fa0c) == 0) {
    return;
  }
  iVar1 = FUN_0040d890(*(int *)(param_1 + 0x1fa0c),DAT_00764838);
  if (param_1 == *(int *)(iVar1 + 0x318)) {
    *(uint *)(iVar1 + 0x318) = 0;
    FUN_00527230(*(uint *)(iVar1 + 800));
  }
  *(uint *)(param_1 + 0x1fa0c) = 0;
  return;
}
