// Name: FUN_005373f0
// Address: 005373f0
// Address Range: [[005373f0, 0053742e]]
// Convention: unknown
// Signature: undefined4 FUN_005373f0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005373f0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x440) == 0) {
    return 0;
  }
  iVar1 = FUN_00468900(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x158;
  }
  return 1;
}
