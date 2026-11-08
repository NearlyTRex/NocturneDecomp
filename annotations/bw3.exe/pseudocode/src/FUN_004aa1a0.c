// Name: FUN_004aa1a0
// Address: 004aa1a0
// Address Range: [[004aa1a0, 004aa1fe]]
// Convention: unknown
// Signature: undefined4 FUN_004aa1a0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004aa1a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x5f0)) {
    iVar3 = param_1 + 0x5f4;
    do {
      iVar1 = FUN_005a3260(iVar3,param_2);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x6c4 + iVar2 * 0xd4) = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xd4;
    } while (iVar2 < *(int *)(param_1 + 0x5f0));
  }
  return 0;
}
