// Name: FUN_0047eff0
// Address: 0047eff0
// Address Range: [[0047eff0, 0047f1bc]]
// Convention: unknown
// Signature: void FUN_0047eff0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eff0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x93b;
    FUN_004e4500("CEditorTools::paintWindow() called but no window was opened!");
  }
  uVar2 = _DAT_01c35e60;
  uVar1 = _DAT_01c35e4c;
  iVar7 = (_DAT_01c2559c + -1) * 0x1f8;
  _DAT_01c35e4c = *(uint *)(iVar7 + 0x1c255a4);
  iVar4 = DAT_006141bc / 0x60;
  iVar5 = FUN_00485380(0);
  iVar4 = *(int *)(iVar7 + 0x1c255ac) - ((param_2 + 1) * iVar4 + param_2 * iVar5);
  uVar3 = _DAT_01c2638c;
  if (_DAT_01c25f84 != 0) {
    iVar5 = (_DAT_01c2638c & 0xff) * 3;
    FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar5] |
                 (uint)(byte)(&DAT_01c35838)[iVar5] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar5] << 8);
    uVar3 = _DAT_01c35e60;
  }
  _DAT_01c35e60 = uVar3;
  iVar5 = *(int *)(iVar7 + 0x1c255a0) + 1;
  iVar6 = *(int *)(iVar7 + 0x1c255a8) + -2;
  if (_DAT_01c25f84 == 0) {
    FUN_00402f30(iVar5,iVar4,iVar6);
  }
  else {
    FUN_004f9390(iVar5,iVar4,iVar6);
  }
  if (_DAT_01c26390 != _DAT_01c2638c) {
    if (_DAT_01c25f84 == 0) {
      _DAT_01c35e60 = _DAT_01c26390;
    }
    else {
      iVar5 = (_DAT_01c26390 & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c35839)[iVar5] << 8 |
                   (uint)(byte)(&DAT_01c35838)[iVar5] << 0x10 | (uint)(byte)(&DAT_01c3583a)[iVar5]);
    }
    iVar5 = *(int *)(iVar7 + 0x1c255a0) + 1;
    iVar7 = *(int *)(iVar7 + 0x1c255a8) + -2;
    if (_DAT_01c25f84 == 0) {
      FUN_00402f30(iVar5,iVar4 + -1,iVar7);
    }
    else {
      FUN_004f9390(iVar5,iVar4 + -1,iVar7);
    }
  }
  _DAT_01c35e60 = uVar2;
  _DAT_01c35e4c = uVar1;
  return;
}
