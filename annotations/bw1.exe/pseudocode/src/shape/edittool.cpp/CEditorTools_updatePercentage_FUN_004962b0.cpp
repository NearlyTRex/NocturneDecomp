// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004962b0
// Address: 004962b0
// Address Range: [[004962b0, 00496832]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004962b0(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004967b7) */
/* WARNING: Removing unreachable block (ram,0x00496812) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004962b0(CEditorTools *this_ptr,float current_progress,float total_progress)

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
  
  if (_DAT_01c3eb5c < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x7ed;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::updatePercentageWindow - no window open!");
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
  uVar11 = 0x49631a;
  dVar9 = round
                    ((double)(local_54 * (float)_DAT_005dc0d0 + (float)_DAT_005dc0d8));
  iVar7 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
  if (((int)ROUND(dVar9) != *(int *)(iVar1 + 0x1c3ed50)) ||
     (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c3ed54))) {
    shape_edittool_cpp_FUN_00496ee0(this_ptr,uVar11);
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
              (_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,_DAT_01c4f00c,_DAT_01c3f578,-1,
               "%d%% complete");
    iVar3 = _DAT_01c4f010;
    iVar7 = _DAT_01c4f008;
    uVar5 = _DAT_01c3f584;
    y1 = _DAT_01c3f53c * 2 + _DAT_01c4f00c;
    iVar1 = y1 + 1;
    x1 = _DAT_01c4f008 + 1;
    local_30 = _DAT_01c4f010 + -1;
    iVar8 = _DAT_01c3f53c * 4 + _DAT_01c4f00c;
    y2 = iVar8 + -1;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250(x1,iVar1,local_30,y2,_DAT_01c3f584,_DAT_01c3f58c);
    }
    else {
      iVar2 = (_DAT_01c3f58c & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 | (uint)(byte)(&DAT_01c4e9fa)[iVar2]);
      engine_mini3d_cpp_drawRect_FUN_00518290(iVar7,y1,iVar3,iVar8);
      if (_DAT_01c3f544 == 0) {
        _DAT_01c4f020 = uVar5;
      }
      else {
        iVar8 = (uVar5 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9f8)[iVar8] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar8] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar8]);
      }
      engine_mini3d_cpp_fillRect_FUN_00518010(x1,iVar1,local_30,y2);
    }
    uVar6 = _DAT_01c3f590;
    if (_DAT_01c3f544 != 0) {
      iVar8 = (_DAT_01c3f590 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar8] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar8] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar8] << 8);
      uVar6 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar6;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar7,y1,local_30);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_005182e0(iVar7,y1,local_30);
    }
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,y1,y2);
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_00518300(iVar7,y1,y2);
    }
    dVar9 = round
                      ((double)((float)((local_30 - x1) + 1) * local_58 + (float)_DAT_005dc0d8));
    iVar7 = (int)ROUND(dVar9) + x1;
    if (x1 < iVar7) {
      if (local_30 <= iVar7) {
        iVar7 = iVar3 + -2;
      }
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar7,local_24,_DAT_01c3f588);
      }
      else {
        iVar3 = (_DAT_01c3f588 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9fa)[iVar3] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar3] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar3] << 8);
        engine_mini3d_cpp_fillRect_FUN_00518010(x1,iVar1,iVar7,local_24);
      }
    }
    if (0 < (int)uVar5) {
      fVar4 = (float)(x1 - *(int *)((_DAT_01c3eb5c + -1) * 0x1f8 + 0x1c3ed4c)) *
              (float)_DAT_005dc0e0;
      dVar9 = (double)fVar4;
      if ((float)_DAT_005dc0e8 < fVar4) {
        uVar11 = 0x49669c;
        dVar10 = round
                           ((double)(((total_progress - current_progress) * fVar4) /
                                     current_progress + (float)_DAT_005dc0d8));
        if (0 < (int)ROUND(dVar10)) {
          local_30 = (int)ROUND(dVar10) % 0x3c;
          round(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar9),0),uVar11)) + _DAT_005dc0d8);
          engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
          engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
                    (_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,_DAT_01c4f014 - _DAT_01c3f53c,
                     _DAT_01c3f578,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar7 = (_DAT_01c3eb5c + -1) * 0x1f8;
    *(int *)(iVar7 + 0x1c3ed50) = local_30;
    *(int *)(iVar7 + 0x1c3ed54) = iVar1;
  }
  return;
}
