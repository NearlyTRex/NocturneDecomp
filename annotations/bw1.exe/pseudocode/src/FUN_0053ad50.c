// Name: FUN_0053ad50
// Address: 0053ad50
// Address Range: [[0053ad50, 0053ad8b]]
// Convention: unknown
// Signature: undefined4 FUN_0053ad50(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0053ad50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00468900(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x158;
  return 1;
}
