// Name: FUN_00528fc0
// Address: 00528fc0
// Address Range: [[00528fc0, 0052920f]]
// Convention: unknown
// Signature: void FUN_00528fc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528fc0(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  if (*(int *)(0x01D2130C + 0x24c) == 0) {
    fVar3 = (float)FUN_00434b00(0x01D2130C);
    _DAT_01ed7010 = _DAT_01ed7010 - fVar3 / _DAT_005cde18;
  }
  else {
    _DAT_01ed3800 = *(int *)(0x01D2130C + 0x24c);
    fVar3 = (float)FUN_00434b00(0x01D2130C);
    _DAT_01ed7010 = fVar3 / _DAT_005cde18 + _DAT_01ed7010;
  }
  iVar10 = DAT_005fba1c;
  iVar1 = DAT_005fba18;
  if (_DAT_01ed7010 < 0.0) {
    _DAT_01ed7010 = 0.0;
  }
  if (1.0 < _DAT_01ed7010) {
    _DAT_01ed7010 = 1.0;
  }
  iVar4 = FUN_00528f60(param_1);
  if (0 < iVar4) {
    if (_DAT_01ed3800 != 2) {
      FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    FUN_004031c0(0,iVar10 - iVar4,iVar1 + -1,iVar10 + -1,0);
  }
  uVar2 = _DAT_01c6b5ac;
  if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(0x01D2130C + 0x10) != 0)) {
    uVar9 = _DAT_01549aa0;
    if (DAT_005fba1c < 0x1e0) {
      uVar9 = _DAT_01549aa4;
    }
    if ((DAT_005fba1c < 0x180) && (uVar9 = _DAT_01549abc, _DAT_01dd4890 != 0)) {
      uVar9 = _DAT_01549ab4;
    }
    iVar5 = FUN_004b2e40(uVar9,param_1 + 0x50,0x1ed3808,10,0x400,(DAT_005fba18 * 9) / 10);
    iVar6 = FUN_004b30f0(uVar9,0x58);
    iVar7 = ((iVar10 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar10 - iVar4 < iVar7) {
      iVar7 = iVar10 - iVar4;
    }
    FUN_00406bf0(0xffff);
    iVar10 = 0;
    if (0 < iVar5) {
      iVar4 = 0x1ed3808;
      do {
        iVar8 = FUN_004b2a80(uVar9,iVar4);
        iVar10 = iVar10 + 1;
        FUN_004b0a20(uVar9,iVar4,(iVar1 - iVar8) / 2,iVar7,0xf8,0);
        iVar4 = iVar4 + 0x400;
        iVar7 = iVar7 + iVar6;
      } while (iVar10 < iVar5);
    }
  }
  _DAT_01c6b5ac = uVar2;
  return;
}
