// Name: FUN_0056a0a0
// Address: 0056a0a0
// Address Range: [[0056a0a0, 0056a120]]
// Convention: unknown
// Signature: int FUN_0056a0a0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_0056a0a0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < 0x400)) {
    iVar2 = FUN_005a3260(param_2 * 0x60 + param_1 + 8,param_3);
    if (iVar2 == 0) {
      return param_2;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18004)) {
    iVar3 = param_1 + 8;
    do {
      iVar1 = FUN_005a3260(iVar3,param_3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x18004));
  }
  return -1;
}
