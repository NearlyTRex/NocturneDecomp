// Name: FUN_004b8540
// Address: 004b8540
// Address Range: [[004b8540, 004b857f]]
// Convention: unknown
// Signature: undefined4 FUN_004b8540(int param_1)

#include "nocturne.h"

uint FUN_004b8540(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x1f920) != 0) && (*(int *)(param_1 + 0x1f924) != 3)) &&
     (*(int *)(param_1 + 0x1f924) != 4)) {
    iVar1 = FUN_004e1660(param_1 + 0x150);
    if (*(int *)(iVar1 + 0x24) != 10) {
      return 1;
    }
  }
  return 0;
}
