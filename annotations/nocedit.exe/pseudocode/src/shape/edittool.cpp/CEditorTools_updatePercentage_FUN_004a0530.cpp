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
  int iVar3;
  int iVar4;
  int y;
  int y2;
  int iVar5;
  int x1;
  int x2;
  double dVar6;
  double dVar7;
  ulonglong local_40;
  float local_34;
  int local_24;
  int local_1c;
  
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
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)(local_34 * (float)100 + (float)0.5));
  iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if (((int)ROUND(dVar6) != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar4 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",local_1c);
    iVar2 = g_ClipRight;
    iVar5 = g_ClipLeft;
    y = g_FontCharacterWidth * 2 + g_ClipTop;
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,y + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    iVar3 = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar5,y,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(iVar5,y,y2);
    g_ActiveRenderColor = iVar3;
    dVar6 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float)((x2 - x1) + 1) * local_34 + (float)0.5));
    iVar5 = (int)ROUND(dVar6) + x1;
    if (x1 < iVar5) {
      if (x2 <= iVar5) {
        iVar5 = iVar2 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170(x1,y + 1,iVar5,local_24,g_ProgressBarFillColor);
    }
    if (0 < local_1c) {
      fVar1 = (float)(local_24 - g_WindowStack[g_WindowStackCount + -1].progress_start_time) *
              (float)8.4771050347222196e-07;
      if ((float)5 < fVar1) {
        local_40 = (double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)(double)fVar1 >> 0x20),0x4a077d);
        dVar7 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((progress_max - progress_min) * fVar1) / progress_min +
                                   (float)0.5));
        local_1c = (int)ROUND(dVar7);
        if (0 < local_1c) {
          dVar7 = crt_math_c_round_FUN_005fe6b0(local_40 + 0.5);
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(dVar7) / 0x3c,iVar4,local_1c / 0x3c,(int)ROUND(dVar6));
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = g_WindowStackCount + -1;
    g_WindowStack[iVar4].progress_percentage = local_1c;
    g_WindowStack[iVar4].progress_timestamp = local_24;
  }
  return;
}
