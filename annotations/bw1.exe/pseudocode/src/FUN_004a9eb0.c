// Name: FUN_004a9eb0
// Address: 004a9eb0
// Address Range: [[004a9eb0, 004a9efa]]
// Convention: unknown
// Signature: int FUN_004a9eb0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_004a9eb0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x258c)) {
    iVar3 = param_1 + 0x2590;
    do {
      iVar1 = FUN_005c04e0(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x258c));
  }
  return -1;
}
