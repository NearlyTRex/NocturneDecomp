// Name: FUN_00446d20
// Address: 00446d20
// Address Range: [[00446d20, 00446def]]
// Convention: unknown
// Signature: void FUN_00446d20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446d20(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar5 = 0;
    do {
      iVar2 = FUN_00445010(*(int *)(param_1 + 0x2c) + iVar5,param_2);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if (-1 < iVar4) {
    puVar1 = *(uint **)(iVar4 * 0x20 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_01510da8) {
      _DAT_01510da8 = *puVar1;
      _DAT_01510db0 = puVar1[2];
      _DAT_01510dac = puVar1[1];
    }
    puVar1 = *(uint **)(iVar4 * 0x20 + 4 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_01510db4) {
      _DAT_01510db4 = *puVar1;
      _DAT_01510dbc = puVar1[2];
      _DAT_01510db8 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 8 + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_01510dc0) {
      _DAT_01510dc4 = puVar1[1];
      _DAT_01510dc8 = puVar1[2];
      _DAT_01510dc0 = *puVar1;
      return;
    }
  }
  return;
}
