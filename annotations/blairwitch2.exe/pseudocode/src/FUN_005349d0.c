// Name: FUN_005349d0
// Address: 005349d0
// Address Range: [[005349d0, 00534a07]]
// Convention: unknown
// Signature: int FUN_005349d0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005349d0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = _DAT_01fc8d00;
  iVar2 = 0;
  if (0 < _DAT_01fc8d00) {
    do {
      iVar1 = iVar2 * 4;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
      *param_2 = *(int *)(*(int *)(&DAT_01fc8d04 + iVar1) + 0x1cb4);
    } while (iVar2 < _DAT_01fc8d00);
  }
  return iVar2;
}
