// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_0047ee50
// Address: 0047ee50
// Address Range: [[0047ee50, 0047f3d2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047ee50(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047f357) */
/* WARNING: Removing unreachable block (ram,0x0047f3b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047ee50(CEditorTools *this_ptr,float current_progress,float total_progress)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int y1;
  int iVar8;
  int y2;
  int x1;
  double dVar9;
  double dVar10;
  uint uVar11;
  float local_58;
  float local_54;
  int local_30;
  int local_24;
  
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x7f0;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_54 = 0.0;
  if (0.0 < total_progress) {
    if (current_progress < 0.0) {
      current_progress = 0.0;
    }
    if (total_progress < current_progress) {
      current_progress = total_progress;
    }
    local_54 = current_progress / total_progress;
  }
  dVar9 = round
                    ((double)(local_54 * (float)_DAT_005bd18d + (float)_DAT_005bd195));
  iVar7 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
  if (((int)ROUND(dVar9) != *(int *)(iVar1 + 0x1c5b2f8)) ||
     (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c5b2fc))) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
              (_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,_DAT_01c6b5ac,_DAT_01c5bb20,-1,
               "%d%% complete");
    iVar3 = _DAT_01c6b5b0;
    iVar7 = _DAT_01c6b5a8;
    uVar5 = _DAT_01c5bb2c;
    y1 = _DAT_01c5bae4 * 2 + _DAT_01c6b5ac;
    iVar1 = y1 + 1;
    x1 = _DAT_01c6b5a8 + 1;
    local_30 = _DAT_01c6b5b0 + -1;
    iVar8 = _DAT_01c5bae4 * 4 + _DAT_01c6b5ac;
    y2 = iVar8 + -1;
    if (_DAT_01c5baec == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250(x1,iVar1,local_30,y2,_DAT_01c5bb2c,_DAT_01c5bb34);
    }
    else {
      iVar2 = (_DAT_01c5bb34 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af99)[iVar2] << 8 |
                 (uint)(byte)(&DAT_01c6af98)[iVar2] << 0x10 | (uint)(byte)(&DAT_01c6af9a)[iVar2]);
      engine_mini3d_cpp_drawRect_FUN_004f3a60(iVar7,y1,iVar3,iVar8);
      if (_DAT_01c5baec == 0) {
        _DAT_01c6b5c0 = uVar5;
      }
      else {
        iVar8 = (uVar5 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)(byte)(&DAT_01c6af98)[iVar8] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar8] << 8 | (uint)(byte)(&DAT_01c6af9a)[iVar8]);
      }
      engine_mini3d_cpp_fillRect_FUN_004f37e0(x1,iVar1,local_30,y2);
    }
    uVar6 = _DAT_01c5bb38;
    if (_DAT_01c5baec != 0) {
      iVar8 = (_DAT_01c5bb38 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af9a)[iVar8] |
                 (uint)(byte)(&DAT_01c6af98)[iVar8] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar8] << 8);
      uVar6 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar6;
    if (_DAT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar7,y1,local_30);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f3ab0(iVar7,y1,local_30);
    }
    if (_DAT_01c5baec == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,y1,y2);
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_004f3ad0(iVar7,y1,y2);
    }
    dVar9 = round
                      ((double)((float)((local_30 - x1) + 1) * local_58 + (float)_DAT_005bd195));
    iVar7 = (int)ROUND(dVar9) + x1;
    if (x1 < iVar7) {
      if (local_30 <= iVar7) {
        iVar7 = iVar3 + -2;
      }
      if (_DAT_01c5baec == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar7,local_24,_DAT_01c5bb30);
      }
      else {
        iVar3 = (_DAT_01c5bb30 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)(byte)(&DAT_01c6af9a)[iVar3] |
                   (uint)(byte)(&DAT_01c6af98)[iVar3] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar3] << 8);
        engine_mini3d_cpp_fillRect_FUN_004f37e0(x1,iVar1,iVar7,local_24);
      }
    }
    if (0 < (int)uVar5) {
      fVar4 = (float)(x1 - *(int *)((_DAT_01c5b104 + -1) * 0x1f8 + 0x1c5b2f4)) *
              (float)_DAT_005bd19d;
      dVar9 = (double)fVar4;
      if ((float)_DAT_005bd1a5 < fVar4) {
        uVar11 = 0x47f23c;
        dVar10 = round
                           ((double)(((total_progress - current_progress) * fVar4) /
                                     current_progress + (float)_DAT_005bd195));
        if (0 < (int)ROUND(dVar10)) {
          local_30 = (int)ROUND(dVar10) % 0x3c;
          round(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar9),0),uVar11)) + _DAT_005bd195);
          engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
          engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
                    (_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,_DAT_01c6b5b4 - _DAT_01c5bae4,
                     _DAT_01c5bb20,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    iVar7 = (_DAT_01c5b104 + -1) * 0x1f8;
    *(int *)(iVar7 + 0x1c5b2f8) = local_30;
    *(int *)(iVar7 + 0x1c5b2fc) = iVar1;
  }
  return;
}
