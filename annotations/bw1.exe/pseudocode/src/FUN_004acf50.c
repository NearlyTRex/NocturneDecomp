// Name: FUN_004acf50
// Address: 004acf50
// Address Range: [[004acf50, 004ad006]]
// Convention: unknown
// Signature: void FUN_004acf50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004acf50(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x48) = 1;
  }
  else {
    lVar1 = (longlong)_DAT_01c43530 * (longlong)*(int *)(param_1 + 0x50);
    lVar1 = (longlong)*(int *)(param_1 + 0x44) *
            (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    iVar2 = *(int *)(param_1 + 0x40) -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x40) = iVar2;
    if (iVar2 < 0) {
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x40) = 0;
    }
  }
  uVar3 = *(uint *)(0x01CCF390 + 0x294);
  lVar1 = (longlong)*(int *)(param_1 + 0x50) * (longlong)_DAT_01c43530;
  FUN_004d7f50(0x01CCF390,
               (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
               (float)_DAT_005df1dc,uVar3);
  FUN_00532250(param_1);
  FUN_004d7f50(0x01CCF390,uVar3);
  return;
}
