// Name: FUN_00491630
// Address: 00491630
// Address Range: [[00491630, 0049167a]]
// Convention: unknown
// Signature: int FUN_00491630(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00491630(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x337c)) {
    iVar3 = param_1 + 0x3380;
    do {
      iVar1 = FUN_005b8130(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x337c));
  }
  return -1;
}
