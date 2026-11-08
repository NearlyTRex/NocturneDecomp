// Name: FUN_0059d880
// Address: 0059d880
// Address Range: [[0059d880, 0059d8df]]
// Convention: unknown
// Signature: undefined4 FUN_0059d880(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0059d880(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x838) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x838))) {
    iVar4 = param_1 + 500;
    do {
      iVar1 = FUN_005b8c30(param_2,iVar4);
      if (iVar1 == 0) {
        uVar2 = FUN_0059d940(param_1,*(uint *)(param_1 + 0x210 + iVar3 * 0x20));
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x838));
  }
  return 0;
}
