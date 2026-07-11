// Name: FUN_0044b430
// Address: 0044b430
// Address Range: [[0044b430, 0044b4ff]]
// Convention: unknown
// Signature: void FUN_0044b430(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b430(int param_1,uint param_2)

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
      iVar2 = FUN_00449720(*(int *)(param_1 + 0x2c) + iVar5,param_2);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if (-1 < iVar4) {
    puVar1 = *(uint **)(iVar4 * 0x20 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_014b89e8) {
      _DAT_014b89e8 = *puVar1;
      _DAT_014b89f0 = puVar1[2];
      _DAT_014b89ec = puVar1[1];
    }
    puVar1 = *(uint **)(iVar4 * 0x20 + 4 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_014b89f4) {
      _DAT_014b89f4 = *puVar1;
      _DAT_014b89fc = puVar1[2];
      _DAT_014b89f8 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 8 + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_014b8a00) {
      _DAT_014b8a04 = puVar1[1];
      _DAT_014b8a08 = puVar1[2];
      _DAT_014b8a00 = *puVar1;
      return;
    }
  }
  return;
}
