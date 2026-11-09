// Name: shape_edittool.cpp_FUN_0047ee50
// Address: 0047ee50
// Address Range: [[0047ee50, 0047f3d2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047ee50(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047f357) */
/* WARNING: Removing unreachable block (ram,0x0047f3b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047ee50(uint param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int y;
  int iVar8;
  int y2;
  int iVar9;
  int x1;
  int x2;
  float10 fVar10;
  float local_54;
  
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x7f0;
    core_main_c_FUN_004e4330("CEditorTools::updatePercentageWindow - no window open!");
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
  fVar10 = (float10)local_54 * (float10)_DAT_005bd18d + (float10)_DAT_005bd195;
  round();
  iVar2 = (int)ROUND(fVar10);
  iVar7 = wincore_winrun_cpp_FUN_005806a0();
  iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
  if ((iVar2 != *(int *)(iVar1 + 0x1c5b2f8)) || (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c5b2fc))) {
    shape_edittool_cpp_FUN_0047fa80(param_1);
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
              (_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,_DAT_01c6b5ac,_DAT_01c5bb20,-1,
               "%d%% complete");
    iVar4 = _DAT_01c6b5b0;
    iVar9 = _DAT_01c6b5a8;
    uVar6 = _DAT_01c5bb2c;
    y = _DAT_01c5bae4 * 2 + _DAT_01c6b5ac;
    iVar1 = y + 1;
    x1 = _DAT_01c6b5a8 + 1;
    x2 = _DAT_01c6b5b0 + -1;
    iVar8 = _DAT_01c5bae4 * 4 + _DAT_01c6b5ac;
    y2 = iVar8 + -1;
    if (_DAT_01c5baec == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250(x1,iVar1,x2,y2,_DAT_01c5bb2c,_DAT_01c5bb34);
    }
    else {
      iVar3 = (_DAT_01c5bb34 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af99)[iVar3] << 8 |
                 (uint)(byte)(&DAT_01c6af98)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c6af9a)[iVar3]);
      engine_mini3d_cpp_FUN_004f3a60(iVar9,y,iVar4,iVar8);
      if (_DAT_01c5baec == 0) {
        _DAT_01c6b5c0 = uVar6;
      }
      else {
        iVar8 = (uVar6 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f3520
                  ((uint)(byte)(&DAT_01c6af98)[iVar8] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar8] << 8 | (uint)(byte)(&DAT_01c6af9a)[iVar8]);
      }
      engine_mini3d_cpp_FUN_004f37e0(x1,iVar1,x2,y2);
    }
    uVar6 = _DAT_01c5bb38;
    if (_DAT_01c5baec != 0) {
      iVar8 = (_DAT_01c5bb38 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af9a)[iVar8] |
                 (uint)(byte)(&DAT_01c6af98)[iVar8] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar8] << 8);
      uVar6 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar6;
    if (_DAT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar9,y,x2);
    }
    else {
      engine_mini3d_cpp_FUN_004f3ab0(iVar9,y,x2);
    }
    if (_DAT_01c5baec == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar9,y,y2);
    }
    else {
      engine_mini3d_cpp_FUN_004f3ad0(iVar9,y,y2);
    }
    fVar10 = (float10)((x2 - x1) + 1) * (float10)local_54 + (float10)_DAT_005bd195;
    round();
    iVar9 = (int)ROUND(fVar10) + x1;
    if (x1 < iVar9) {
      if (x2 <= iVar9) {
        iVar9 = iVar4 + -2;
      }
      if (_DAT_01c5baec == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar9,y2,_DAT_01c5bb30);
      }
      else {
        iVar4 = (_DAT_01c5bb30 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f3520
                  ((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                   (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
        engine_mini3d_cpp_FUN_004f37e0(x1,iVar1,iVar9,y2);
      }
    }
    if (0 < iVar2) {
      fVar5 = (float)(iVar7 - *(int *)((_DAT_01c5b104 + -1) * 0x1f8 + 0x1c5b2f4)) *
              (float)_DAT_005bd19d;
      if ((float)_DAT_005bd1a5 < fVar5) {
        fVar10 = (((float10)param_3 - (float10)param_2) * (float10)fVar5) / (float10)param_2 +
                 (float10)_DAT_005bd195;
        round((double)fVar5);
        if (0 < (int)ROUND(fVar10)) {
          round();
          engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
          engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
                    (_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,_DAT_01c6b5b4 - _DAT_01c5bae4,
                     _DAT_01c5bb20,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_FUN_0057a8a0();
    iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
    *(int *)(iVar1 + 0x1c5b2f8) = iVar2;
    *(int *)(iVar1 + 0x1c5b2fc) = iVar7;
  }
  return;
}
