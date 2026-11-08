// Name: FUN_0047ee50
// Address: 0047ee50
// Address Range: [[0047ee50, 0047f3d2]]
// Convention: unknown
// Signature: void FUN_0047ee50(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047f357) */
/* WARNING: Removing unreachable block (ram,0x0047f3b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ee50(uint param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint extraout_EDX;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  float local_54;
  
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x7f0;
    FUN_004e4330("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_54 = 0.0;
  if (0.0 < param_3) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    local_54 = param_2 / param_3;
  }
  fVar14 = (float10)local_54 * (float10)_DAT_005bd18d + (float10)_DAT_005bd195;
  FUN_005a3120();
  iVar2 = (int)ROUND(fVar14);
  iVar7 = FUN_005806a0();
  iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
  if ((iVar2 != *(int *)(iVar1 + 0x1c5b2f8)) || (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c5b2fc))) {
    FUN_0047fa80(param_1);
    FUN_00406bf0(0xffff);
    FUN_004edaf0(0x3f800000);
    FUN_004b0ff0(_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,_DAT_01c6b5ac,_DAT_01c5bb20,0xffffffff,
                 "%d%% complete",iVar2);
    iVar4 = _DAT_01c6b5b0;
    iVar11 = _DAT_01c6b5a8;
    uVar6 = _DAT_01c5bb2c;
    iVar8 = _DAT_01c5bae4 * 2 + _DAT_01c6b5ac;
    iVar1 = iVar8 + 1;
    iVar12 = _DAT_01c6b5a8 + 1;
    iVar13 = _DAT_01c6b5b0 + -1;
    iVar9 = _DAT_01c5bae4 * 4 + _DAT_01c6b5ac;
    iVar10 = iVar9 + -1;
    if (_DAT_01c5baec == 0) {
      FUN_00403250(iVar12,iVar1,iVar13,iVar10,_DAT_01c5bb2c,_DAT_01c5bb34);
    }
    else {
      iVar3 = (_DAT_01c5bb34 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af99)[iVar3] << 8 |
                   (uint)(byte)(&DAT_01c6af98)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c6af9a)[iVar3]);
      FUN_004f3a60(iVar11,iVar8,iVar4,iVar9);
      if (_DAT_01c5baec == 0) {
        _DAT_01c6b5c0 = uVar6;
      }
      else {
        iVar9 = (uVar6 & 0xff) * 3;
        FUN_004f3520((uint)(byte)(&DAT_01c6af98)[iVar9] << 0x10 |
                     (uint)(byte)(&DAT_01c6af99)[iVar9] << 8 | (uint)(byte)(&DAT_01c6af9a)[iVar9]);
      }
      FUN_004f37e0(iVar12,iVar1,iVar13,iVar10);
    }
    uVar6 = _DAT_01c5bb38;
    if (_DAT_01c5baec != 0) {
      iVar9 = (_DAT_01c5bb38 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar9] |
                   (uint)(byte)(&DAT_01c6af98)[iVar9] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar9] << 8);
      uVar6 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar6;
    if (_DAT_01c5baec == 0) {
      FUN_00402f30(iVar11,iVar8,iVar13);
    }
    else {
      FUN_004f3ab0(iVar11,iVar8,iVar13);
    }
    if (_DAT_01c5baec == 0) {
      FUN_00403040(iVar11,iVar8,iVar10);
    }
    else {
      FUN_004f3ad0(iVar11,iVar8,iVar10);
    }
    fVar14 = (float10)((iVar13 - iVar12) + 1) * (float10)local_54 + (float10)_DAT_005bd195;
    FUN_005a3120();
    iVar11 = (int)ROUND(fVar14) + iVar12;
    if (iVar12 < iVar11) {
      if (iVar13 <= iVar11) {
        iVar11 = iVar4 + -2;
      }
      if (_DAT_01c5baec == 0) {
        FUN_004031c0(iVar12,iVar1,iVar11,iVar10,_DAT_01c5bb30);
      }
      else {
        iVar4 = (_DAT_01c5bb30 & 0xff) * 3;
        FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                     (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                     (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
        FUN_004f37e0(iVar12,iVar1,iVar11,iVar10);
      }
    }
    if (0 < iVar2) {
      fVar5 = (float)(iVar7 - *(int *)((_DAT_01c5b104 + -1) * 0x1f8 + 0x1c5b2f4)) *
              (float)_DAT_005bd19d;
      dVar16 = (double)fVar5;
      if ((float)_DAT_005bd1a5 < fVar5) {
        fVar14 = (((float10)param_3 - (float10)param_2) * (float10)fVar5) / (float10)param_2 +
                 (float10)_DAT_005bd195;
        FUN_005a3120(dVar16);
        if (0 < (int)ROUND(fVar14)) {
          fVar15 = (float10)dVar16 + (float10)_DAT_005bd195;
          FUN_005a3120();
          FUN_00406bf0(0xffff);
          FUN_004edaf0(0x3f800000);
          FUN_004b0ff0(_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,_DAT_01c6b5b4 - _DAT_01c5bae4,
                       _DAT_01c5bb20,0xffffffff,"%d:%02d elapsed, approximately %d:%02d remaining",
                       (int)ROUND(fVar15) / 0x3c,(int)ROUND(fVar15) % 0x3c,(int)ROUND(fVar14) / 0x3c
                       ,extraout_EDX);
        }
      }
    }
    FUN_0057a8a0();
    iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
    *(int *)(iVar1 + 0x1c5b2f8) = iVar2;
    *(int *)(iVar1 + 0x1c5b2fc) = iVar7;
  }
  return;
}
