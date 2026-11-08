// Name: FUN_00449a00
// Address: 00449a00
// Address Range: [[00449a00, 00449b2b]]
// Convention: unknown
// Signature: void FUN_00449a00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449a00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  
  bVar9 = 0;
  _DAT_0149ef08 = _DAT_0149ef08 + -1;
  if (_DAT_0149ef08 == 0) {
    thunk_FUN_004e6c50(DAT_005f2afc);
    *(uint *)(param_1 + 0x1c0) = _DAT_01c6b598;
    *(uint *)(param_1 + 0x1c4) = _DAT_01c6b59c;
    *(uint *)(param_1 + 0x1c8) = _DAT_01c6b5a0;
    uVar3 = DAT_005fba1c;
    *(uint *)(param_1 + 0x1cc) = _DAT_01c6b5a4;
    DAT_005fba20 = _DAT_0149ef0c;
    _DAT_01c6cee8 = _DAT_0149ef10;
    puVar6 = (uint *)&DAT_0149ef14;
    puVar7 = (uint *)&DAT_01c5faec;
    for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
      puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    }
    _DAT_01c6af74 = _DAT_014a01d4;
    _DAT_01c6af80 = _DAT_014a01d8;
    _DAT_01c6af8c = _DAT_014a01dc;
    if (param_2 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x148)) {
        iVar8 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x144) * iVar4;
          piVar1 = (int *)(&DAT_01c60dac + iVar8);
          iVar2 = *(int *)(param_1 + 0x144) * 4;
          iVar8 = iVar8 + 4;
          iVar4 = iVar4 + 1;
          FUN_00471271(iVar5 * 4 + *(int *)(param_1 + 0x15c),*piVar1 + iVar2,iVar2);
        } while (iVar4 < *(int *)(param_1 + 0x148));
      }
      if (_DAT_01c6cee8 != 0) {
        FUN_00566350(0);
        return;
      }
    }
  }
  return;
}
