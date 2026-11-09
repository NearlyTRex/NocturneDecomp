// Name: shape_edittool.cpp_FUN_0047dc40
// Address: 0047dc40
// Address Range: [[0047dc40, 0047e1c2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047dc40(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e147) */
/* WARNING: Removing unreachable block (ram,0x0047e1a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047dc40(uint param_1,float param_2,float param_3)

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
  
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x795;
    core_main_c_FUN_004e4500("CEditorTools::updatePercentageWindow - no window open!");
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
  fVar10 = (float10)local_54 * (float10)_DAT_005d2337 + (float10)_DAT_005d233f;
  round();
  iVar2 = (int)ROUND(fVar10);
  iVar7 = wincore_winrun_cpp_FUN_0058e9e0();
  iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
  if ((iVar2 != *(int *)(iVar1 + 0x1c25790)) || (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c25794))) {
    shape_edittool_cpp_FUN_0047e870(param_1);
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_FUN_004f3570(0x3f800000);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
              (_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,_DAT_01c35e4c,_DAT_01c263b8,-1,
               "%d%% complete");
    iVar4 = _DAT_01c35e50;
    iVar9 = _DAT_01c35e48;
    uVar6 = _DAT_01c263c4;
    y = _DAT_01c25f7c * 2 + _DAT_01c35e4c;
    iVar1 = y + 1;
    x1 = _DAT_01c35e48 + 1;
    x2 = _DAT_01c35e50 + -1;
    iVar8 = _DAT_01c25f7c * 4 + _DAT_01c35e4c;
    y2 = iVar8 + -1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250(x1,iVar1,x2,y2,_DAT_01c263c4,_DAT_01c263cc);
    }
    else {
      iVar3 = (_DAT_01c263cc & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c35839)[iVar3] << 8 |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c3583a)[iVar3]);
      engine_mini3d_cpp_FUN_004f9340(iVar9,y,iVar4,iVar8);
      if (_DAT_01c25f84 == 0) {
        _DAT_01c35e60 = uVar6;
      }
      else {
        iVar8 = (uVar6 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c35838)[iVar8] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar8] << 8 | (uint)(byte)(&DAT_01c3583a)[iVar8]);
      }
      engine_mini3d_cpp_FUN_004f90d0(x1,iVar1,x2,y2);
    }
    uVar6 = _DAT_01c263d0;
    if (_DAT_01c25f84 != 0) {
      iVar8 = (_DAT_01c263d0 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar8] |
                 (uint)(byte)(&DAT_01c35838)[iVar8] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar8] << 8);
      uVar6 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar6;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar9,y,x2);
    }
    else {
      engine_mini3d_cpp_FUN_004f9390(iVar9,y,x2);
    }
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar9,y,y2);
    }
    else {
      engine_mini3d_cpp_FUN_004f93b0(iVar9,y,y2);
    }
    fVar10 = (float10)((x2 - x1) + 1) * (float10)local_54 + (float10)_DAT_005d233f;
    round();
    iVar9 = (int)ROUND(fVar10) + x1;
    if (x1 < iVar9) {
      if (x2 <= iVar9) {
        iVar9 = iVar4 + -2;
      }
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar9,y2,_DAT_01c263c8);
      }
      else {
        iVar4 = (_DAT_01c263c8 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                   (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
        engine_mini3d_cpp_FUN_004f90d0(x1,iVar1,iVar9,y2);
      }
    }
    if (0 < iVar2) {
      fVar5 = (float)(iVar7 - *(int *)((_DAT_01c2559c + -1) * 0x1f8 + 0x1c2578c)) *
              (float)_DAT_005d2347;
      if ((float)_DAT_005d234f < fVar5) {
        fVar10 = (((float10)param_3 - (float10)param_2) * (float10)fVar5) / (float10)param_2 +
                 (float10)_DAT_005d233f;
        round((double)fVar5);
        if (0 < (int)ROUND(fVar10)) {
          round();
          engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
          engine_mini3d_cpp_FUN_004f3570(0x3f800000);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
                    (_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,_DAT_01c35e54 - _DAT_01c25f7c,
                     _DAT_01c263b8,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_FUN_00589560();
    iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
    *(int *)(iVar1 + 0x1c25790) = iVar2;
    *(int *)(iVar1 + 0x1c25794) = iVar7;
  }
  return;
}
