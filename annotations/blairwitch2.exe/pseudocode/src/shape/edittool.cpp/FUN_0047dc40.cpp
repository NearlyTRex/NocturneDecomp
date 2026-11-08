// Name: FUN_0047dc40
// Address: 0047dc40
// Address Range: [[0047dc40, 0047e1c2]]
// Convention: unknown
// Signature: void FUN_0047dc40(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e147) */
/* WARNING: Removing unreachable block (ram,0x0047e1a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dc40(uint param_1,float param_2,float param_3)

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
  
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x795;
    FUN_004e4500("CEditorTools::updatePercentageWindow - no window open!");
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
  fVar14 = (float10)local_54 * (float10)_DAT_005d2337 + (float10)_DAT_005d233f;
  FUN_005b7ff0();
  iVar2 = (int)ROUND(fVar14);
  iVar7 = FUN_0058e9e0();
  iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
  if ((iVar2 != *(int *)(iVar1 + 0x1c25790)) || (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c25794))) {
    FUN_0047e870(param_1);
    FUN_00406da0(0xffff);
    FUN_004f3570(0x3f800000);
    FUN_004a93f0(_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,_DAT_01c35e4c,_DAT_01c263b8,0xffffffff,
                 "%d%% complete",iVar2);
    iVar4 = _DAT_01c35e50;
    iVar11 = _DAT_01c35e48;
    uVar6 = _DAT_01c263c4;
    iVar8 = _DAT_01c25f7c * 2 + _DAT_01c35e4c;
    iVar1 = iVar8 + 1;
    iVar12 = _DAT_01c35e48 + 1;
    iVar13 = _DAT_01c35e50 + -1;
    iVar9 = _DAT_01c25f7c * 4 + _DAT_01c35e4c;
    iVar10 = iVar9 + -1;
    if (_DAT_01c25f84 == 0) {
      FUN_00403250(iVar12,iVar1,iVar13,iVar10,_DAT_01c263c4,_DAT_01c263cc);
    }
    else {
      iVar3 = (_DAT_01c263cc & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c35839)[iVar3] << 8 |
                   (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c3583a)[iVar3]);
      FUN_004f9340(iVar11,iVar8,iVar4,iVar9);
      if (_DAT_01c25f84 == 0) {
        _DAT_01c35e60 = uVar6;
      }
      else {
        iVar9 = (uVar6 & 0xff) * 3;
        FUN_004f8e20((uint)(byte)(&DAT_01c35838)[iVar9] << 0x10 |
                     (uint)(byte)(&DAT_01c35839)[iVar9] << 8 | (uint)(byte)(&DAT_01c3583a)[iVar9]);
      }
      FUN_004f90d0(iVar12,iVar1,iVar13,iVar10);
    }
    uVar6 = _DAT_01c263d0;
    if (_DAT_01c25f84 != 0) {
      iVar9 = (_DAT_01c263d0 & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar9] |
                   (uint)(byte)(&DAT_01c35838)[iVar9] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar9] << 8);
      uVar6 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar6;
    if (_DAT_01c25f84 == 0) {
      FUN_00402f30(iVar11,iVar8,iVar13);
    }
    else {
      FUN_004f9390(iVar11,iVar8,iVar13);
    }
    if (_DAT_01c25f84 == 0) {
      FUN_00403040(iVar11,iVar8,iVar10);
    }
    else {
      FUN_004f93b0(iVar11,iVar8,iVar10);
    }
    fVar14 = (float10)((iVar13 - iVar12) + 1) * (float10)local_54 + (float10)_DAT_005d233f;
    FUN_005b7ff0();
    iVar11 = (int)ROUND(fVar14) + iVar12;
    if (iVar12 < iVar11) {
      if (iVar13 <= iVar11) {
        iVar11 = iVar4 + -2;
      }
      if (_DAT_01c25f84 == 0) {
        FUN_004031c0(iVar12,iVar1,iVar11,iVar10,_DAT_01c263c8);
      }
      else {
        iVar4 = (_DAT_01c263c8 & 0xff) * 3;
        FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar4] |
                     (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                     (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
        FUN_004f90d0(iVar12,iVar1,iVar11,iVar10);
      }
    }
    if (0 < iVar2) {
      fVar5 = (float)(iVar7 - *(int *)((_DAT_01c2559c + -1) * 0x1f8 + 0x1c2578c)) *
              (float)_DAT_005d2347;
      dVar16 = (double)fVar5;
      if ((float)_DAT_005d234f < fVar5) {
        fVar14 = (((float10)param_3 - (float10)param_2) * (float10)fVar5) / (float10)param_2 +
                 (float10)_DAT_005d233f;
        FUN_005b7ff0(dVar16);
        if (0 < (int)ROUND(fVar14)) {
          fVar15 = (float10)dVar16 + (float10)_DAT_005d233f;
          FUN_005b7ff0();
          FUN_00406da0(0xffff);
          FUN_004f3570(0x3f800000);
          FUN_004a93f0(_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,_DAT_01c35e54 - _DAT_01c25f7c,
                       _DAT_01c263b8,0xffffffff,"%d:%02d elapsed, approximately %d:%02d remaining",
                       (int)ROUND(fVar15) / 0x3c,(int)ROUND(fVar15) % 0x3c,(int)ROUND(fVar14) / 0x3c
                       ,extraout_EDX);
        }
      }
    }
    FUN_00589560();
    iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
    *(int *)(iVar1 + 0x1c25790) = iVar2;
    *(int *)(iVar1 + 0x1c25794) = iVar7;
  }
  return;
}
