// Name: FUN_004787d0
// Address: 004787d0
// Address Range: [[004787d0, 00478807]]
// Convention: unknown
// Signature: undefined4 FUN_004787d0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004787d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00468900(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x158;
  return 1;
}
