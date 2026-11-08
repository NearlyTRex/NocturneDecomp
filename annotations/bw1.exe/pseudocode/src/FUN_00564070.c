// Name: FUN_00564070
// Address: 00564070
// Address Range: [[00564070, 005640c0]]
// Convention: unknown
// Signature: int FUN_00564070(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00564070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_2 * 4 + param_1;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      *(uint *)(*DAT_00612560 + 0x2c + iVar1) = _DAT_01c51cac;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  return iVar1;
}
