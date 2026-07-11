// Name: FUN_0050e860
// Address: 0050e860
// Address Range: [[0050e860, 0050e897]]
// Convention: unknown
// Signature: int FUN_0050e860(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050e860(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = _DAT_01fb99d0;
  iVar2 = 0;
  if (0 < _DAT_01fb99d0) {
    do {
      iVar1 = iVar2 * 4;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
      *param_2 = *(int *)(*(int *)(&DAT_01fb99d4 + iVar1) + 0x1cb4);
    } while (iVar2 < _DAT_01fb99d0);
  }
  return iVar2;
}
