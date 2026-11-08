// Name: FUN_00454520
// Address: 00454520
// Address Range: [[00454520, 004545ef]]
// Convention: unknown
// Signature: void FUN_00454520(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454520(int param_1,uint param_2)

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
      iVar2 = FUN_00452810(*(int *)(param_1 + 0x2c) + iVar5,param_2);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if (-1 < iVar4) {
    puVar1 = *(uint **)(iVar4 * 0x20 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_01548b58) {
      _DAT_01548b58 = *puVar1;
      _DAT_01548b60 = puVar1[2];
      _DAT_01548b5c = puVar1[1];
    }
    puVar1 = *(uint **)(iVar4 * 0x20 + 4 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_01548b64) {
      _DAT_01548b64 = *puVar1;
      _DAT_01548b6c = puVar1[2];
      _DAT_01548b68 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 8 + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_01548b70) {
      _DAT_01548b74 = puVar1[1];
      _DAT_01548b78 = puVar1[2];
      _DAT_01548b70 = *puVar1;
      return;
    }
  }
  return;
}
