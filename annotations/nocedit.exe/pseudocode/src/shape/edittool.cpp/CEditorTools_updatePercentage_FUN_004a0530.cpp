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
  int x1;
  int iVar2;
  int iVar3;
  int y;
  int y2;
  int iVar4;
  uint extraout_EDX;
  int x1_00;
  int x2;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  float local_38;
  float local_34;
  int local_2c;
  
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
  uVar9 = 0x4a059a;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)(local_34 * (float)100 +
                             (float)0.5));
  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if (((int)ROUND(dVar5) != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar3 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",(int)ROUND(dVar5),uVar9);
    iVar2 = g_ClipRight;
    x1 = g_ClipLeft;
    y = g_FontCharacterWidth * 2 + g_ClipTop;
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1_00 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1_00,y + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    iVar4 = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(x1,y,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(x1,y,y2);
    g_ActiveRenderColor = iVar4;
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float)((x2 - x1_00) + 1) * local_38 +
                               (float)0.5));
    iVar4 = (int)ROUND(dVar5) + x1_00;
    if (x1_00 < iVar4) {
      if (x2 <= iVar4) {
        iVar4 = iVar2 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170(x1_00,y + 1,iVar4,iVar3,g_ProgressBarFillColor);
    }
    if (0 < y2) {
      fVar1 = (float)(local_2c - g_WindowStack[g_WindowStackCount + -1].progress_start_time) *
              (float)8.4771050347222196e-07;
      dVar5 = (double)fVar1;
      if ((float)5 < fVar1) {
        uVar9 = 0x4a077d;
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((progress_max - progress_min) * fVar1) / progress_min +
                                   (float)0.5));
        if (0 < (int)ROUND(dVar6)) {
          uVar8 = 0x4a07b4;
          dVar7 = crt_math_c_round_FUN_005fe6b0
                            ((double)CONCAT44(SUB84(dVar5,0),uVar9) + 0.5);
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(dVar7) / 0x3c,(int)ROUND(dVar7) % 0x3c,(int)ROUND(dVar6) / 0x3c,
                     extraout_EDX,uVar8,uVar9,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = g_WindowStackCount + -1;
    g_WindowStack[iVar3].progress_percentage = local_2c;
    g_WindowStack[iVar3].progress_timestamp = x1;
  }
  return;
}
