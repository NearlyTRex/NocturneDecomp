// Name: FUN_004583d0
// Address: 004583d0
// Address Range: [[004583d0, 0045849f]]
// Convention: unknown
// Signature: void FUN_004583d0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004583d0(int param_1,uint param_2)

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
      iVar2 = FUN_004566c0(*(int *)(param_1 + 0x2c) + iVar5,param_2);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if (-1 < iVar4) {
    puVar1 = *(uint **)(iVar4 * 0x20 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_0152c2a8) {
      _DAT_0152c2a8 = *puVar1;
      _DAT_0152c2b0 = puVar1[2];
      _DAT_0152c2ac = puVar1[1];
    }
    puVar1 = *(uint **)(iVar4 * 0x20 + 4 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_0152c2b4) {
      _DAT_0152c2b4 = *puVar1;
      _DAT_0152c2bc = puVar1[2];
      _DAT_0152c2b8 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 8 + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_0152c2c0) {
      _DAT_0152c2c4 = puVar1[1];
      _DAT_0152c2c8 = puVar1[2];
      _DAT_0152c2c0 = *puVar1;
      return;
    }
  }
  return;
}
