// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
// Address: 004a0530
// Address Range: [[004a0530, 004a088c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
          (CEditorTools *this_ptr,float progress_min,float progress_max)

{
  float fVar1;
  int iVar2;
  int x;
  int iVar3;
  int y2;
  int x1;
  int x2;
  double dVar4;
  ulonglong local_40;
  float local_34;
  int local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x742;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_34 = 0.0;
  if (0.0 < progress_max) {
    if (progress_min < 0.0) {
      progress_min = 0.0;
    }
    if (progress_max < progress_min) {
      progress_min = progress_max;
    }
    local_34 = progress_min / progress_max;
  }
  crt_math_c_round_FUN_005fe6b0
            ((double)(local_34 * (float)100 + (float)0.5));
  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((local_30 != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar3 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",local_28);
    iVar2 = g_ClipRight;
    iVar3 = g_ClipLeft;
    local_18 = g_FontCharacterWidth * 2 + g_ClipTop;
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,local_18 + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    x = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar3,local_18,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(x,local_14,local_20);
    g_ActiveRenderColor = y2;
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float)((x2 - x1) + 1) * (float)x + (float)0.5));
    iVar3 = (int)ROUND(dVar4) + x1;
    if (x1 < iVar3) {
      if (x2 <= iVar3) {
        iVar3 = iVar2 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170(x1,local_18 + 1,iVar3,local_20,g_ProgressBarFillColor);
    }
    if (0 < local_1c) {
      fVar1 = (float)(local_24 - g_WindowStack[g_WindowStackCount + -1].progress_start_time) *
              (float)8.4771050347222196e-07;
      if ((float)5 < fVar1) {
        local_40 = (double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)(double)fVar1 >> 0x20),0x4a077d);
        dVar4 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((progress_max - progress_min) * fVar1) / progress_min +
                                   (float)0.5));
        local_18 = (int)ROUND(dVar4);
        if (0 < local_18) {
          dVar4 = crt_math_c_round_FUN_005fe6b0(local_40 + 0.5);
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(dVar4) / 0x3c,y2,local_18 / 0x3c,local_18);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = g_WindowStackCount + -1;
    g_WindowStack[iVar3].progress_percentage = local_18;
    g_WindowStack[iVar3].progress_timestamp = local_20;
  }
  return;
}
