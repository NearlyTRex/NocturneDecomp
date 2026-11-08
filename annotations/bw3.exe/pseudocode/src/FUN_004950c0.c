// Name: FUN_004950c0
// Address: 004950c0
// Address Range: [[004950c0, 0049510a]]
// Convention: unknown
// Signature: int FUN_004950c0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_004950c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34e8)) {
    iVar3 = param_1 + 0x34ec;
    do {
      iVar1 = FUN_005a3260(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1e;
    } while (iVar2 < *(int *)(param_1 + 0x34e8));
  }
  return -1;
}
