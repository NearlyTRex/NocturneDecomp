// Name: FUN_00541a00
// Address: 00541a00
// Address Range: [[00541a00, 00541a50]]
// Convention: unknown
// Signature: int FUN_00541a00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00541a00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_2 * 4 + param_1;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      *(uint *)(*DAT_0060b280 + 0x2c + iVar1) = _DAT_01c38aec;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  return iVar1;
}
