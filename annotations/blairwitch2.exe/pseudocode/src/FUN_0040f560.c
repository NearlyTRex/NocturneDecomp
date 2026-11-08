// Name: FUN_0040f560
// Address: 0040f560
// Address Range: [[0040f560, 0040f59e]]
// Convention: unknown
// Signature: undefined4 FUN_0040f560(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0040f560(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x434) == 0) {
    return 0;
  }
  iVar1 = FUN_0044fd20(param_1 + 0x2b8);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x2b8;
  }
  return 1;
}
