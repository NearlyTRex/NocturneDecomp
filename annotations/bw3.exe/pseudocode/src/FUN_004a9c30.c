// Name: FUN_004a9c30
// Address: 004a9c30
// Address Range: [[004a9c30, 004a9c7d]]
// Convention: unknown
// Signature: undefined4 FUN_004a9c30(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004a9c30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      iVar1 = FUN_005a3260(*(uint *)(iVar2 + 0x154),param_2);
      if (iVar1 == 0) {
        return *(uint *)(iVar2 + 0x154);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  return 0;
}
