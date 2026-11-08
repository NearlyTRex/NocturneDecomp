// Name: FUN_0044a3e0
// Address: 0044a3e0
// Address Range: [[0044a3e0, 0044a4cd]]
// Convention: unknown
// Signature: void FUN_0044a3e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a3e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0x1b0;
    FUN_004e4500("CDemonLight::beginBackgroundScene - Scene not open");
  }
  _DAT_01b11db4 = _DAT_01b11db4 + 1;
  if (_DAT_01b11db4 == 1) {
    puVar4 = (uint *)&DAT_01c2a38c;
    puVar5 = (uint *)&DAT_01b11db8;
    for (uVar1 = *(uint *)(param_1 + 0x1cc4) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    if (*(int *)(param_1 + 0x2f9c) == 0) {
      _DAT_01d046a0 = "..\\core\\dlight.cpp";
      _DAT_01d046a4 = 0x1bd;
      FUN_004e4500("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      iVar3 = 0;
      do {
        *(int *)(&DAT_01c2a38c + iVar3) =
             *(int *)(param_1 + 0x2f9c) + *(int *)(param_1 + 0x1cc0) * iVar2 * 2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x1cc4));
    }
    FUN_0046b940(DAT_0060b280,1);
  }
  return;
}
