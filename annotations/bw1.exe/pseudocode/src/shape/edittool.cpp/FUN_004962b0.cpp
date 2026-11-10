// Name: shape_edittool.cpp_FUN_004962b0
// Address: 004962b0
// Address Range: [[004962b0, 00496832]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004962b0(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004967b7) */
/* WARNING: Removing unreachable block (ram,0x00496812) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004962b0(uint param_1,float param_2,float param_3)

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
  
  if (_DAT_01c3eb5c < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x7ed;
    core_main_c_FUN_005030e0("CEditorTools::updatePercentageWindow - no window open!");
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
  fVar10 = (float10)local_54 * (float10)_DAT_005dc0d0 + (float10)_DAT_005dc0d8;
  round();
  iVar2 = (int)ROUND(fVar10);
  iVar7 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
  if ((iVar2 != *(int *)(iVar1 + 0x1c3ed50)) || (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c3ed54))) {
    shape_edittool_cpp_FUN_00496ee0(param_1);
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    engine_mini3d_cpp_FUN_00512320(0x3f800000);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
              (_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,_DAT_01c4f00c,_DAT_01c3f578,-1,
               "%d%% complete");
    iVar4 = _DAT_01c4f010;
    iVar9 = _DAT_01c4f008;
    uVar6 = _DAT_01c3f584;
    y = _DAT_01c3f53c * 2 + _DAT_01c4f00c;
    iVar1 = y + 1;
    x1 = _DAT_01c4f008 + 1;
    x2 = _DAT_01c4f010 + -1;
    iVar8 = _DAT_01c3f53c * 4 + _DAT_01c4f00c;
    y2 = iVar8 + -1;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250(x1,iVar1,x2,y2,_DAT_01c3f584,_DAT_01c3f58c);
    }
    else {
      iVar3 = (_DAT_01c3f58c & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9f9)[iVar3] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c4e9fa)[iVar3]);
      engine_mini3d_cpp_FUN_00518290(iVar9,y,iVar4,iVar8);
      if (_DAT_01c3f544 == 0) {
        _DAT_01c4f020 = uVar6;
      }
      else {
        iVar8 = (uVar6 & 0xff) * 3;
        engine_mini3d_cpp_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9f8)[iVar8] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar8] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar8]);
      }
      engine_mini3d_cpp_FUN_00518010(x1,iVar1,x2,y2);
    }
    uVar6 = _DAT_01c3f590;
    if (_DAT_01c3f544 != 0) {
      iVar8 = (_DAT_01c3f590 & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar8] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar8] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar8] << 8);
      uVar6 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar6;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar9,y,x2);
    }
    else {
      engine_mini3d_cpp_FUN_005182e0(iVar9,y,x2);
    }
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar9,y,y2);
    }
    else {
      engine_mini3d_cpp_FUN_00518300(iVar9,y,y2);
    }
    fVar10 = (float10)((x2 - x1) + 1) * (float10)local_54 + (float10)_DAT_005dc0d8;
    round();
    iVar9 = (int)ROUND(fVar10) + x1;
    if (x1 < iVar9) {
      if (x2 <= iVar9) {
        iVar9 = iVar4 + -2;
      }
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar9,y2,_DAT_01c3f588);
      }
      else {
        iVar4 = (_DAT_01c3f588 & 0xff) * 3;
        engine_mini3d_cpp_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
        engine_mini3d_cpp_FUN_00518010(x1,iVar1,iVar9,y2);
      }
    }
    if (0 < iVar2) {
      fVar5 = (float)(iVar7 - *(int *)((_DAT_01c3eb5c + -1) * 0x1f8 + 0x1c3ed4c)) *
              (float)_DAT_005dc0e0;
      if ((float)_DAT_005dc0e8 < fVar5) {
        fVar10 = (((float10)param_3 - (float10)param_2) * (float10)fVar5) / (float10)param_2 +
                 (float10)_DAT_005dc0d8;
        round((double)fVar5);
        if (0 < (int)ROUND(fVar10)) {
          round();
          engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
          engine_mini3d_cpp_FUN_00512320(0x3f800000);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
                    (_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,_DAT_01c4f014 - _DAT_01c3f53c,
                     _DAT_01c3f578,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
    *(int *)(iVar1 + 0x1c3ed50) = iVar2;
    *(int *)(iVar1 + 0x1c3ed54) = iVar7;
  }
  return;
}
