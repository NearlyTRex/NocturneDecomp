// Name: FUN_004aa1d0
// Address: 004aa1d0
// Address Range: [[004aa1d0, 004aa23e]]
// Convention: unknown
// Signature: undefined4 FUN_004aa1d0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004aa1d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_004aa240(param_1,param_2);
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01E82168 + 0x14d164); iVar4 = iVar4 + 1) {
      iVar2 = FUN_005c04e0(*(uint *)(iVar3 + 0x14d168 + 0x01E82168),
                           param_1 + 0x37da + iVar1 * 0x1e);
      if (iVar2 == 0) {
        return *(uint *)(iVar3 + 0x14d168 + 0x01E82168);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return 0;
}
