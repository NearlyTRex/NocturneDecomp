// Name: FUN_004ba490
// Address: 004ba490
// Address Range: [[004ba490, 004ba53c]]
// Convention: unknown
// Signature: int FUN_004ba490(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ba490(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (0 < _DAT_01cc4470) {
    iVar1 = 0x1cc4474;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(&DAT_01cc45bc + iVar3 * 0x2e4);
      iVar5 = *(int *)(iVar2 + 0x1cc7bb4) + iVar4;
      if ((_DAT_01cc7b90 < *(int *)(iVar1 + 0x140)) ||
         (*(int *)(iVar1 + 0x140) + *(int *)(iVar1 + 0x144) <= _DAT_01cc7b90)) {
        iVar4 = 0x246;
      }
      if ((((iVar4 <= param_1) && (*(int *)(&DAT_01cc45c0 + iVar3 * 0x2e4) <= param_2)) &&
          (param_1 < iVar5)) &&
         (param_2 < *(int *)(iVar2 + 0x1cc7bb8) + *(int *)(&DAT_01cc45c0 + iVar3 * 0x2e4))) {
        return iVar3;
      }
      iVar1 = iVar1 + 0x2e4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < _DAT_01cc4470);
  }
  return -1;
}
