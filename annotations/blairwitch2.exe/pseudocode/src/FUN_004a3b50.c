// Name: FUN_004a3b50
// Address: 004a3b50
// Address Range: [[004a3b50, 004a3bae]]
// Convention: unknown
// Signature: undefined4 FUN_004a3b50(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004a3b50(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    iVar3 = param_1 + 0x2c4;
    do {
      iVar1 = FUN_005b8130(iVar3,param_2);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x394 + iVar2 * 0xd4) = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xd4;
    } while (iVar2 < *(int *)(param_1 + 0x2c0));
  }
  return 0;
}
