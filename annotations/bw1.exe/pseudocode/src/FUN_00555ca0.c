// Name: FUN_00555ca0
// Address: 00555ca0
// Address Range: [[00555ca0, 00555cd8]]
// Convention: unknown
// Signature: void FUN_00555ca0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555ca0(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_01fe4cb4 == *param_2) && (iVar3 = 0, 0 < *param_2)) {
    do {
      iVar2 = iVar3 * 4;
      piVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *(int *)(*(int *)(&DAT_01fe4cb8 + iVar2) + 0x1cb4) = *piVar1;
    } while (iVar3 < _DAT_01fe4cb4);
  }
  return;
}
