// Name: FUN_004a80d0
// Address: 004a80d0
// Address Range: [[004a80d0, 004a817c]]
// Convention: unknown
// Signature: int FUN_004a80d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a80d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (0 < _DAT_01d0d210) {
    iVar1 = 0x1d0d214;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(&DAT_01d0d35c + iVar3 * 0x2e4);
      iVar5 = *(int *)(iVar2 + 0x1d19bcc) + iVar4;
      if ((_DAT_01d19ba8 < *(int *)(iVar1 + 0x140)) ||
         (*(int *)(iVar1 + 0x140) + *(int *)(iVar1 + 0x144) <= _DAT_01d19ba8)) {
        iVar4 = 0x246;
      }
      if ((((iVar4 <= param_1) && (*(int *)(&DAT_01d0d360 + iVar3 * 0x2e4) <= param_2)) &&
          (param_1 < iVar5)) &&
         (param_2 < *(int *)(iVar2 + 0x1d19bd0) + *(int *)(&DAT_01d0d360 + iVar3 * 0x2e4))) {
        return iVar3;
      }
      iVar1 = iVar1 + 0x2e4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < _DAT_01d0d210);
  }
  return -1;
}
