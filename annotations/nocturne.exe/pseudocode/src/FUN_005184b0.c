// Name: FUN_005184b0
// Address: 005184b0
// Address Range: [[005184b0, 00518500]]
// Convention: unknown
// Signature: int FUN_005184b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005184b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_2 * 4 + param_1;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      *(uint *)(*DAT_005ae704 + 0x2c + iVar1) = _DAT_01c038f4;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  return iVar1;
}
