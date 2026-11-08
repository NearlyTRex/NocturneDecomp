// Name: FUN_00480200
// Address: 00480200
// Address Range: [[00480200, 004803cc]]
// Convention: unknown
// Signature: void FUN_00480200(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480200(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x99f;
    FUN_004e4330("CEditorTools::paintWindow() called but no window was opened!");
  }
  uVar2 = _DAT_01c6b5c0;
  uVar1 = _DAT_01c6b5ac;
  iVar7 = (_DAT_01c5b104 + -1) * 0x1f8;
  _DAT_01c6b5ac = *(uint *)(iVar7 + 0x1c5b10c);
  iVar4 = DAT_005fba1c / 0x60;
  iVar5 = FUN_00486580(0);
  iVar4 = *(int *)(iVar7 + 0x1c5b114) - ((param_2 + 1) * iVar4 + param_2 * iVar5);
  uVar3 = _DAT_01c5baf4;
  if (_DAT_01c5baec != 0) {
    iVar5 = (_DAT_01c5baf4 & 0xff) * 3;
    FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar5] |
                 (uint)(byte)(&DAT_01c6af98)[iVar5] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar5] << 8);
    uVar3 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = uVar3;
  iVar5 = *(int *)(iVar7 + 0x1c5b108) + 1;
  iVar6 = *(int *)(iVar7 + 0x1c5b110) + -2;
  if (_DAT_01c5baec == 0) {
    FUN_00402f30(iVar5,iVar4,iVar6);
  }
  else {
    FUN_004f3ab0(iVar5,iVar4,iVar6);
  }
  if (_DAT_01c5baf8 != _DAT_01c5baf4) {
    if (_DAT_01c5baec == 0) {
      _DAT_01c6b5c0 = _DAT_01c5baf8;
    }
    else {
      iVar5 = (_DAT_01c5baf8 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af99)[iVar5] << 8 |
                   (uint)(byte)(&DAT_01c6af98)[iVar5] << 0x10 | (uint)(byte)(&DAT_01c6af9a)[iVar5]);
    }
    iVar5 = *(int *)(iVar7 + 0x1c5b108) + 1;
    iVar7 = *(int *)(iVar7 + 0x1c5b110) + -2;
    if (_DAT_01c5baec == 0) {
      FUN_00402f30(iVar5,iVar4 + -1,iVar7);
    }
    else {
      FUN_004f3ab0(iVar5,iVar4 + -1,iVar7);
    }
  }
  _DAT_01c6b5c0 = uVar2;
  _DAT_01c6b5ac = uVar1;
  return;
}
