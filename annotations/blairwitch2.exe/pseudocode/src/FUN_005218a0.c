// Name: FUN_005218a0
// Address: 005218a0
// Address Range: [[005218a0, 00521aef]]
// Convention: unknown
// Signature: void FUN_005218a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005218a0(int param_1)

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
  
  if (*(int *)(0x01CB6900 + 0x244) == 0) {
    fVar3 = (float)FUN_0042bff0(0x01CB6900);
    _DAT_01e65900 = _DAT_01e65900 - fVar3 / _DAT_005e2eb3;
  }
  else {
    _DAT_01e620f0 = *(int *)(0x01CB6900 + 0x244);
    fVar3 = (float)FUN_0042bff0(0x01CB6900);
    _DAT_01e65900 = fVar3 / _DAT_005e2eb3 + _DAT_01e65900;
  }
  iVar10 = DAT_006141bc;
  iVar1 = DAT_006141b8;
  if (_DAT_01e65900 < 0.0) {
    _DAT_01e65900 = 0.0;
  }
  if (1.0 < _DAT_01e65900) {
    _DAT_01e65900 = 1.0;
  }
  iVar4 = FUN_00521840(param_1);
  if (0 < iVar4) {
    if (_DAT_01e620f0 != 2) {
      FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    FUN_004031c0(0,iVar10 - iVar4,iVar1 + -1,iVar10 + -1,0);
  }
  uVar2 = _DAT_01c35e4c;
  if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(0x01CB6900 + 0x10) != 0)) {
    uVar9 = _DAT_01511cb8;
    if (DAT_006141bc < 0x1e0) {
      uVar9 = _DAT_01511cbc;
    }
    if ((DAT_006141bc < 0x180) && (uVar9 = _DAT_01511ccc, _DAT_01d63250 != 0)) {
      uVar9 = _DAT_01511cc4;
    }
    iVar5 = FUN_004ab2b0(uVar9,param_1 + 0x50,0x1e620f8,10,0x400,(DAT_006141b8 * 9) / 10);
    iVar6 = FUN_004ab560(uVar9,0x58);
    iVar7 = ((iVar10 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar10 - iVar4 < iVar7) {
      iVar7 = iVar10 - iVar4;
    }
    FUN_00406da0(0xffff);
    iVar10 = 0;
    if (0 < iVar5) {
      iVar4 = 0x1e620f8;
      do {
        iVar8 = FUN_004aaf00(uVar9,iVar4);
        iVar10 = iVar10 + 1;
        FUN_004a8df0(uVar9,iVar4,(iVar1 - iVar8) / 2,iVar7,0xf8,0);
        iVar4 = iVar4 + 0x400;
        iVar7 = iVar7 + iVar6;
      } while (iVar10 < iVar5);
    }
  }
  _DAT_01c35e4c = uVar2;
  return;
}
