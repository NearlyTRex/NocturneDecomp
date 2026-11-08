// Name: FUN_0053b6a0
// Address: 0053b6a0
// Address Range: [[0053b6a0, 0053b6d7]]
// Convention: unknown
// Signature: int FUN_0053b6a0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0053b6a0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = _DAT_0203a414;
  iVar2 = 0;
  if (0 < _DAT_0203a414) {
    do {
      iVar1 = iVar2 * 4;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
      *param_2 = *(int *)(*(int *)(&DAT_0203a418 + iVar1) + 0x1cb4);
    } while (iVar2 < _DAT_0203a414);
  }
  return iVar2;
}
