// Name: FUN_0040f0e0
// Address: 0040f0e0
// Address Range: [[0040f0e0, 0040f11e]]
// Convention: unknown
// Signature: undefined4 FUN_0040f0e0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0040f0e0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2d8) == 0) {
    return 0;
  }
  iVar1 = FUN_00468900(param_1 + 0x15c);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x15c;
  }
  return 1;
}
