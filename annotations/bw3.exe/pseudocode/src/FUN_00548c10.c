// Name: FUN_00548c10
// Address: 00548c10
// Address Range: [[00548c10, 00548c60]]
// Convention: unknown
// Signature: int FUN_00548c10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00548c10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_2 * 4 + param_1;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      *(uint *)(*DAT_005f2afc + 0x2c + iVar1) = _DAT_01c6e24c;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  return iVar1;
}
