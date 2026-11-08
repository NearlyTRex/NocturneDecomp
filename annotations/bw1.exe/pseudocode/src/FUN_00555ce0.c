// Name: FUN_00555ce0
// Address: 00555ce0
// Address Range: [[00555ce0, 00555d17]]
// Convention: unknown
// Signature: int FUN_00555ce0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00555ce0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = _DAT_01fe4cb4;
  iVar2 = 0;
  if (0 < _DAT_01fe4cb4) {
    do {
      iVar1 = iVar2 * 4;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
      *param_2 = *(int *)(*(int *)(&DAT_01fe4cb8 + iVar1) + 0x1cb4);
    } while (iVar2 < _DAT_01fe4cb4);
  }
  return iVar2;
}
