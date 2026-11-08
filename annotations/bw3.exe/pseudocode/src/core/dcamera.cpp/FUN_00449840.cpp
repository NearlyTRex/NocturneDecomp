// Name: FUN_00449840
// Address: 00449840
// Address Range: [[00449840, 004499f6]]
// Convention: unknown
// Signature: void FUN_00449840(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449840(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x436;
    FUN_004e4330("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_0149ef08 = _DAT_0149ef08 + 1;
  if (_DAT_0149ef08 == 1) {
    _DAT_0149ef0c = DAT_005fba20;
    _DAT_0149ef10 = _DAT_01c6cee8;
    puVar5 = (uint *)&DAT_01c5faec;
    puVar6 = (uint *)&DAT_0149ef14;
    for (uVar2 = DAT_005fba1c & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
    _DAT_014a01d4 = _DAT_01c6af74;
    DAT_005fba20 = 0x20;
    _DAT_01c6cee8 = 0;
    _DAT_014a01d8 = _DAT_01c6af80;
    _DAT_01c6af80 = 8;
    _DAT_014a01dc = _DAT_01c6af8c;
    _DAT_01c6af8c = 0;
    _DAT_01c6af74 = 0x10;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      iVar4 = 0;
      do {
        *(int *)(&DAT_01c5faec + iVar4) =
             *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x148));
    }
    FUN_0046d2f0(DAT_005f2afc,0,0,*(int *)(param_1 + 0x144) + -1,*(int *)(param_1 + 0x148) + -1);
    uVar1 = DAT_005f2afc;
    *(uint *)(param_1 + 0x1c0) = _DAT_01c6b598;
    *(uint *)(param_1 + 0x1c4) = _DAT_01c6b59c;
    *(uint *)(param_1 + 0x1c8) = _DAT_01c6b5a0;
    *(uint *)(param_1 + 0x1cc) = _DAT_01c6b5a4;
    FUN_0046e880(uVar1,0x14a01f0);
    FUN_0046cb90(DAT_005f2afc,param_1 + 4);
    FUN_0046d090(DAT_005f2afc,*(uint *)(param_1 + 0x38));
    FUN_0046cc40(DAT_005f2afc,param_1 + 0x10);
  }
  return;
}
