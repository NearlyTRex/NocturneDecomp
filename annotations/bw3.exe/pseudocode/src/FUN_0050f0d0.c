// Name: FUN_0050f0d0
// Address: 0050f0d0
// Address Range: [[0050f0d0, 0050f10e]]
// Convention: unknown
// Signature: undefined4 FUN_0050f0d0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0050f0d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x440) == 0) {
    return 0;
  }
  iVar1 = FUN_004625a0(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x158;
  }
  return 1;
}
