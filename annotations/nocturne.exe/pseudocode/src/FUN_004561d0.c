// Name: FUN_004561d0
// Address: 004561d0
// Address Range: [[004561d0, 00456207]]
// Convention: unknown
// Signature: undefined4 FUN_004561d0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004561d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x150;
  return 1;
}
