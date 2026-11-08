// Name: FUN_004962b0
// Address: 004962b0
// Address Range: [[004962b0, 00496832]]
// Convention: unknown
// Signature: void FUN_004962b0(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004967b7) */
/* WARNING: Removing unreachable block (ram,0x00496812) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004962b0(uint param_1,float param_2,float param_3)

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
  
  if (_DAT_01c3eb5c < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x7ed;
    FUN_005030e0("CEditorTools::updatePercentageWindow - no window open!");
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
  fVar14 = (float10)local_54 * (float10)_DAT_005dc0d0 + (float10)_DAT_005dc0d8;
  FUN_005c03a0();
  iVar2 = (int)ROUND(fVar14);
  iVar7 = FUN_005b2420();
  iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
  if ((iVar2 != *(int *)(iVar1 + 0x1c3ed50)) || (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c3ed54))) {
    FUN_00496ee0(param_1);
    FUN_00406bd0(0xffff);
    FUN_00512320(0x3f800000);
    FUN_004c23a0(_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,_DAT_01c4f00c,_DAT_01c3f578,0xffffffff,
                 "%d%% complete",iVar2);
    iVar4 = _DAT_01c4f010;
    iVar11 = _DAT_01c4f008;
    uVar6 = _DAT_01c3f584;
    iVar8 = _DAT_01c3f53c * 2 + _DAT_01c4f00c;
    iVar1 = iVar8 + 1;
    iVar12 = _DAT_01c4f008 + 1;
    iVar13 = _DAT_01c4f010 + -1;
    iVar9 = _DAT_01c3f53c * 4 + _DAT_01c4f00c;
    iVar10 = iVar9 + -1;
    if (_DAT_01c3f544 == 0) {
      FUN_00403250(iVar12,iVar1,iVar13,iVar10,_DAT_01c3f584,_DAT_01c3f58c);
    }
    else {
      iVar3 = (_DAT_01c3f58c & 0xff) * 3;
      FUN_00517d50((uint)(byte)(&DAT_01c4e9f9)[iVar3] << 8 |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c4e9fa)[iVar3]);
      FUN_00518290(iVar11,iVar8,iVar4,iVar9);
      if (_DAT_01c3f544 == 0) {
        _DAT_01c4f020 = uVar6;
      }
      else {
        iVar9 = (uVar6 & 0xff) * 3;
        FUN_00517d50((uint)(byte)(&DAT_01c4e9f8)[iVar9] << 0x10 |
                     (uint)(byte)(&DAT_01c4e9f9)[iVar9] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar9]);
      }
      FUN_00518010(iVar12,iVar1,iVar13,iVar10);
    }
    uVar6 = _DAT_01c3f590;
    if (_DAT_01c3f544 != 0) {
      iVar9 = (_DAT_01c3f590 & 0xff) * 3;
      FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar9] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar9] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar9] << 8);
      uVar6 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar6;
    if (_DAT_01c3f544 == 0) {
      FUN_00402f30(iVar11,iVar8,iVar13);
    }
    else {
      FUN_005182e0(iVar11,iVar8,iVar13);
    }
    if (_DAT_01c3f544 == 0) {
      FUN_00403040(iVar11,iVar8,iVar10);
    }
    else {
      FUN_00518300(iVar11,iVar8,iVar10);
    }
    fVar14 = (float10)((iVar13 - iVar12) + 1) * (float10)local_54 + (float10)_DAT_005dc0d8;
    FUN_005c03a0();
    iVar11 = (int)ROUND(fVar14) + iVar12;
    if (iVar12 < iVar11) {
      if (iVar13 <= iVar11) {
        iVar11 = iVar4 + -2;
      }
      if (_DAT_01c3f544 == 0) {
        FUN_004031c0(iVar12,iVar1,iVar11,iVar10,_DAT_01c3f588);
      }
      else {
        iVar4 = (_DAT_01c3f588 & 0xff) * 3;
        FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                     (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                     (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
        FUN_00518010(iVar12,iVar1,iVar11,iVar10);
      }
    }
    if (0 < iVar2) {
      fVar5 = (float)(iVar7 - *(int *)((_DAT_01c3eb5c + -1) * 0x1f8 + 0x1c3ed4c)) *
              (float)_DAT_005dc0e0;
      dVar16 = (double)fVar5;
      if ((float)_DAT_005dc0e8 < fVar5) {
        fVar14 = (((float10)param_3 - (float10)param_2) * (float10)fVar5) / (float10)param_2 +
                 (float10)_DAT_005dc0d8;
        FUN_005c03a0(dVar16);
        if (0 < (int)ROUND(fVar14)) {
          fVar15 = (float10)dVar16 + (float10)_DAT_005dc0d8;
          FUN_005c03a0();
          FUN_00406bd0(0xffff);
          FUN_00512320(0x3f800000);
          FUN_004c23a0(_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,_DAT_01c4f014 - _DAT_01c3f53c,
                       _DAT_01c3f578,0xffffffff,"%d:%02d elapsed, approximately %d:%02d remaining",
                       (int)ROUND(fVar15) / 0x3c,(int)ROUND(fVar15) % 0x3c,(int)ROUND(fVar14) / 0x3c
                       ,extraout_EDX);
        }
      }
    }
    FUN_005acff0();
    iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
    *(int *)(iVar1 + 0x1c3ed50) = iVar2;
    *(int *)(iVar1 + 0x1c3ed54) = iVar7;
  }
  return;
}
