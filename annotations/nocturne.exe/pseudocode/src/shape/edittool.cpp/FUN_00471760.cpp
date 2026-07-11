// Name: FUN_00471760
// Address: 00471760
// Address Range: [[00471760, 00471a7f]]
// Convention: unknown
// Signature: void FUN_00471760(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471760(uint param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint extraout_EDX;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float local_2c;
  
  if (_DAT_01bcd07c < 1) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x605;
    FUN_004c8440("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_2c = 0.0;
  if (0.0 < param_3) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    local_2c = param_2 / param_3;
  }
  fVar10 = (float10)local_2c * (float10)_DAT_0057e8c2 + (float10)_DAT_0057e8ca;
  FUN_00563a30();
  iVar2 = (int)ROUND(fVar10);
  iVar5 = FUN_00558a30();
  iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
  if ((iVar2 != *(int *)(iVar1 + 0x1bcd250)) || (0x47ffff < iVar5 - *(int *)(iVar1 + 0x1bcd254))) {
    FUN_004722b0(param_1);
    FUN_00408370(0xffff);
    FUN_00490e30(_DAT_01bcd070,_DAT_01c00c58,_DAT_01c00c60,_DAT_01c00c5c,_DAT_01bcddec,0xffffffff,
                 "%d%% complete",iVar2);
    iVar4 = _DAT_01c00c60;
    iVar1 = _DAT_01bcd9bc * 2 + _DAT_01c00c5c + 1;
    iVar6 = _DAT_01bcd9bc * 4 + _DAT_01c00c5c + -1;
    iVar9 = _DAT_01c00c60 + -1;
    iVar8 = _DAT_01c00c58 + 1;
    FUN_00403ef0(iVar8,iVar1,iVar9,iVar6,_DAT_01bcddf8,_DAT_01bcde00);
    fVar10 = (float10)((iVar9 - iVar8) + 1) * (float10)local_2c + (float10)_DAT_0057e8ca;
    FUN_00563a30();
    iVar7 = (int)ROUND(fVar10) + iVar8;
    if (iVar8 < iVar7) {
      if (iVar9 <= iVar7) {
        iVar7 = iVar4 + -2;
      }
      FUN_00403e60(iVar8,iVar1,iVar7,iVar6,_DAT_01bcddfc);
    }
    if (0 < iVar2) {
      fVar3 = (float)(iVar5 - *(int *)((_DAT_01bcd07c + -1) * 0x1d8 + 0x1bcd24c)) *
              (float)_DAT_0057e8d2;
      dVar12 = (double)fVar3;
      if ((float)_DAT_0057e8da < fVar3) {
        fVar10 = (((float10)param_3 - (float10)param_2) * (float10)fVar3) / (float10)param_2 +
                 (float10)_DAT_0057e8ca;
        FUN_00563a30(dVar12);
        if (0 < (int)ROUND(fVar10)) {
          fVar11 = (float10)dVar12 + (float10)_DAT_0057e8ca;
          FUN_00563a30();
          FUN_00408370(0xffff);
          FUN_00490e30(_DAT_01bcd070,_DAT_01c00c58,_DAT_01c00c60,_DAT_01c00c64 - _DAT_01bcd9bc,
                       _DAT_01bcddec,0xffffffff,"%d:%02d elapsed, approximately %d:%02d remaining",
                       (int)ROUND(fVar11) / 0x3c,(int)ROUND(fVar11) % 0x3c,(int)ROUND(fVar10) / 0x3c
                       ,extraout_EDX);
        }
      }
    }
    FUN_00553910();
    iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
    *(int *)(iVar1 + 0x1bcd250) = iVar2;
    *(int *)(iVar1 + 0x1bcd254) = iVar5;
  }
  return;
}
