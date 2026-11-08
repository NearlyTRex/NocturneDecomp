// Name: FUN_00494d80
// Address: 00494d80
// Address Range: [[00494d80, 00494dca]]
// Convention: unknown
// Signature: int FUN_00494d80(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00494d80(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1908)) {
    iVar3 = param_1 + 0x190c;
    do {
      iVar1 = FUN_005a3260(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x1908));
  }
  return -1;
}
