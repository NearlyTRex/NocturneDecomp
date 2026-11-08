// Name: FUN_004f6870
// Address: 004f6870
// Address Range: [[004f6870, 004f6960]]
// Convention: unknown
// Signature: void FUN_004f6870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6870(uint *param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (((float)param_3[5] - (float)param_2[5]) * ((float)param_2[6] - (float)param_1[6]) <
      ((float)param_2[5] - (float)param_1[5]) * ((float)param_3[6] - (float)param_2[6])) {
    if ((9999 < _DAT_01d0d2e8 + _DAT_01d0d2ec + 3) || (9999 < _DAT_01d0d2f0 + 3)) {
      FUN_004f6970();
    }
    puVar2 = (uint *)(_DAT_01d09b7c + (_DAT_01d0d2e8 + _DAT_01d0d2ec) * 0x40);
    puVar4 = puVar2;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    puVar4 = puVar2 + 0x10;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    sVar1 = _DAT_01d0d2ec;
    puVar4 = puVar2 + 0x20;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    *(short *)(_DAT_01d0d2f0 * 2 + 0x1d0d2f6) = sVar1 + 1;
    _DAT_01d0d2f0 = _DAT_01d0d2f0 + 3;
    *(short *)(_DAT_01d0d2f0 * 2 + 0x1d0d2f2) = sVar1 + 2;
    _DAT_01d0d2ec = _DAT_01d0d2ec + 3;
    *(short *)(_DAT_01d0d2f0 * 2 + 0x1d0d2ee) = sVar1;
  }
  return;
}
