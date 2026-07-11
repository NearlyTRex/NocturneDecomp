// Name: FUN_00480ba0
// Address: 00480ba0
// Address Range: [[00480ba0, 00480bea]]
// Convention: unknown
// Signature: int FUN_00480ba0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00480ba0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34e8)) {
    iVar3 = param_1 + 0x34ec;
    do {
      iVar1 = FUN_00564520(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1e;
    } while (iVar2 < *(int *)(param_1 + 0x34e8));
  }
  return -1;
}
