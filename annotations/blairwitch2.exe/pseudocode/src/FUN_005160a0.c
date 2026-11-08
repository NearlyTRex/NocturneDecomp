// Name: FUN_005160a0
// Address: 005160a0
// Address Range: [[005160a0, 005160de]]
// Convention: unknown
// Signature: undefined4 FUN_005160a0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005160a0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x59c) == 0) {
    return 0;
  }
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
  }
  return 1;
}
