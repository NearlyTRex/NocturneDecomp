// Name: FUN_005439b0
// Address: 005439b0
// Address Range: [[005439b0, 00543bff]]
// Convention: unknown
// Signature: void FUN_005439b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005439b0(int param_1)

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
  
  if (*(int *)(0x01CCF390 + 0x244) == 0) {
    fVar3 = (float)FUN_004355d0(0x01CCF390);
    _DAT_01e818b0 = _DAT_01e818b0 - fVar3 / _DAT_005ee1b7;
  }
  else {
    _DAT_01e7e0a0 = *(int *)(0x01CCF390 + 0x244);
    fVar3 = (float)FUN_004355d0(0x01CCF390);
    _DAT_01e818b0 = fVar3 / _DAT_005ee1b7 + _DAT_01e818b0;
  }
  iVar10 = DAT_0061b49c;
  iVar1 = DAT_0061b498;
  if (_DAT_01e818b0 < 0.0) {
    _DAT_01e818b0 = 0.0;
  }
  if (1.0 < _DAT_01e818b0) {
    _DAT_01e818b0 = 1.0;
  }
  iVar4 = FUN_00543950(param_1);
  if (0 < iVar4) {
    if (_DAT_01e7e0a0 != 2) {
      FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    FUN_004031c0(0,iVar10 - iVar4,iVar1 + -1,iVar10 + -1,0);
  }
  uVar2 = _DAT_01c4f00c;
  if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(0x01CCF390 + 0x10) != 0)) {
    uVar9 = _DAT_0152d23c;
    if (DAT_0061b49c < 0x1e0) {
      uVar9 = _DAT_0152d240;
    }
    if ((DAT_0061b49c < 0x180) && (uVar9 = _DAT_0152d250, _DAT_01d7f1b8 != 0)) {
      uVar9 = _DAT_0152d248;
    }
    iVar5 = FUN_004c4260(uVar9,param_1 + 0x50,0x1e7e0a8,10,0x400,(DAT_0061b498 * 9) / 10);
    iVar6 = FUN_004c4510(uVar9,0x58);
    iVar7 = ((iVar10 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar10 - iVar4 < iVar7) {
      iVar7 = iVar10 - iVar4;
    }
    FUN_00406bd0(0xffff);
    iVar10 = 0;
    if (0 < iVar5) {
      iVar4 = 0x1e7e0a8;
      do {
        iVar8 = FUN_004c3ea0(uVar9,iVar4);
        iVar10 = iVar10 + 1;
        FUN_004c1dd0(uVar9,iVar4,(iVar1 - iVar8) / 2,iVar7,0xf8,0);
        iVar4 = iVar4 + 0x400;
        iVar7 = iVar7 + iVar6;
      } while (iVar10 < iVar5);
    }
  }
  _DAT_01c4f00c = uVar2;
  return;
}
