// Name: FUN_00480860
// Address: 00480860
// Address Range: [[00480860, 004808aa]]
// Convention: unknown
// Signature: int FUN_00480860(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00480860(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1908)) {
    iVar3 = param_1 + 0x190c;
    do {
      iVar1 = FUN_00564520(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x1908));
  }
  return -1;
}
