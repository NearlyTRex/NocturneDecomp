// Name: FUN_0041f390
// Address: 0041f390
// Address Range: [[0041f390, 0041f446]]
// Convention: unknown
// Signature: void FUN_0041f390(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0041f390(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004244b0(param_1,param_2);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x1e4d4) == 0) &&
       (iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x1e4dc), iVar1 != 0)) {
      *(uint *)(param_1 + 0x1e4d4) = 1;
    }
    if ((*(int *)(param_1 + 0x1e4d8) == 0) &&
       (iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x1e540), iVar1 != 0)) {
      *(uint *)(param_1 + 0x1e4d8) = 1;
    }
    switch(*(uint *)(param_1 + 0x10af8)) {
    case 0:
      FUN_00420000(param_1,param_2);
      break;
    case 1:
      FUN_004203a0(param_1,param_2);
      return;
    case 2:
      FUN_00420830(param_1,param_2);
      return;
    }
  }
  return;
}
