// Name: FUN_004aa3b0
// Address: 004aa3b0
// Address Range: [[004aa3b0, 004aa3fd]]
// Convention: unknown
// Signature: int FUN_004aa3b0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_004aa3b0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    iVar3 = param_1 + 0x3ad0;
    do {
      iVar1 = FUN_005c04e0(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x120;
    } while (iVar2 < *(int *)(param_1 + 0x3ac8));
  }
  return -1;
}
