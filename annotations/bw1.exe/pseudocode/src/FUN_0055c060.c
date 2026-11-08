// Name: FUN_0055c060
// Address: 0055c060
// Address Range: [[0055c060, 0055c09f] [0055c0a1, 0055c0ae]]
// Convention: unknown
// Signature: undefined4 FUN_0055c060(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0055c060(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x15b428)) {
    do {
      iVar1 = FUN_0055b990(param_1,iVar3,param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_0055c020(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b428));
  }
  return 0xffffffff;
}
