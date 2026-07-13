// Name: FUN_0041ef40
// Address: 0041ef40
// Address Range: [[0041ef40, 0041ef89]]
// Convention: unknown
// Signature: undefined4 FUN_0041ef40(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0041ef40(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5f0) != 0) && (*(int *)(param_1 + 0x310) == 0)) {
    iVar1 = FUN_00454530(param_1 + 0x150);
    if (*(int *)(iVar1 + 0x358) != 0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x150;
    }
    return 1;
  }
  return 0;
}
