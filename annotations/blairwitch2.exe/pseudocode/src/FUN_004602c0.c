// Name: FUN_004602c0
// Address: 004602c0
// Address Range: [[004602c0, 004602f7]]
// Convention: unknown
// Signature: undefined4 FUN_004602c0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004602c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
  return 1;
}
