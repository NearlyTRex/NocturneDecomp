// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
// Address: 00471760
// Address Range: [[00471760, 00471a7f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(CEditorTools *this_ptr,float current_progress,float total_progress)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int y2;
  int x2;
  int x1;
  int x2_00;
  double dVar5;
  double dVar6;
  uint uVar7;
  float local_30;
  float local_2c;
  
  if (_DAT_01bcd07c < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1541;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_2c = 0.0;
  if (0.0 < total_progress) {
    if (current_progress < 0.0) {
      current_progress = 0.0;
    }
    if (total_progress < current_progress) {
      current_progress = total_progress;
    }
    local_2c = current_progress / total_progress;
  }
  uVar7 = 0x4717ca;
  dVar5 = round
                    ((double)(local_2c * (float)100 + (float)0.5));
  iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
  if (((int)ROUND(dVar5) != *(int *)(iVar1 + 0x1bcd250)) ||
     (0x47ffff < iVar4 - *(int *)(iVar1 + 0x1bcd254))) {
    shape_edittool_cpp_FUN_004722b0(this_ptr,uVar7);
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
              (_DAT_01bcd070,g_ClipLeft,g_ClipRight,g_ClipTop,_DAT_01bcddec,-1,"%d%% complete"
              );
    iVar3 = g_ClipRight;
    iVar1 = _DAT_01bcd9bc * 2 + g_ClipTop + 1;
    y2 = _DAT_01bcd9bc * 4 + g_ClipTop + -1;
    x2_00 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403ef0(x1,iVar1,x2_00,y2,_DAT_01bcddf8,_DAT_01bcde00);
    dVar5 = round
                      ((double)((float)((x2_00 - x1) + 1) * local_30 + (float)0.5));
    x2 = (int)ROUND(dVar5) + x1;
    if (x1 < x2) {
      if (x2_00 <= x2) {
        x2 = iVar3 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403e60(x1,iVar1,x2,(int)local_2c,_DAT_01bcddfc);
    }
    if (0 < iVar4) {
      fVar2 = (float)(y2 - *(int *)((_DAT_01bcd07c + -1) * 0x1d8 + 0x1bcd24c)) *
              (float)8.4771050347222196e-07;
      dVar5 = (double)fVar2;
      if ((float)5 < fVar2) {
        uVar7 = 0x471966;
        dVar6 = round
                          ((double)(((total_progress - current_progress) * fVar2) / current_progress
                                   + (float)0.5));
        if (0 < (int)ROUND(dVar6)) {
          round(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar5),0),uVar7)) + 0.5);
          engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
                    (_DAT_01bcd070,g_ClipLeft,g_ClipRight,g_ClipBottom - _DAT_01bcd9bc,_DAT_01bcddec
                     ,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
    *(float *)(iVar1 + 0x1bcd250) = local_2c;
    *(float *)(iVar1 + 0x1bcd254) = local_30;
  }
  return;
}
