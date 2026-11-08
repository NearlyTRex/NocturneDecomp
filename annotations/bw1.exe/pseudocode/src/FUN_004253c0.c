// Name: FUN_004253c0
// Address: 004253c0
// Address Range: [[004253c0, 00425476]]
// Convention: unknown
// Signature: void FUN_004253c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004253c0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042e1a0(param_1,param_2);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x19c44) == 0) &&
       (iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x19c4c), iVar1 != 0)) {
      *(uint *)(param_1 + 0x19c44) = 1;
    }
    if ((*(int *)(param_1 + 0x19c48) == 0) &&
       (iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x19cb0), iVar1 != 0)) {
      *(uint *)(param_1 + 0x19c48) = 1;
    }
    switch(*(uint *)(param_1 + 0xc268)) {
    case 0:
      FUN_00426030(param_1,param_2);
      break;
    case 1:
      FUN_004263d0(param_1,param_2);
      return;
    case 2:
      FUN_00426860(param_1,param_2);
      return;
    }
  }
  return;
}
