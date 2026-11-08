// Name: FUN_00534990
// Address: 00534990
// Address Range: [[00534990, 005349c8]]
// Convention: unknown
// Signature: void FUN_00534990(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534990(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_01fc8d00 == *param_2) && (iVar3 = 0, 0 < *param_2)) {
    do {
      iVar2 = iVar3 * 4;
      piVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *(int *)(*(int *)(&DAT_01fc8d04 + iVar2) + 0x1cb4) = *piVar1;
    } while (iVar3 < _DAT_01fc8d00);
  }
  return;
}
