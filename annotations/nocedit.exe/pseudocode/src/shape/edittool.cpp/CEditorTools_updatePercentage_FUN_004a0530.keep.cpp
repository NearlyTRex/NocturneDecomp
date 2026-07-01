// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
// Address: 004a0530
// MANUAL RECONSTRUCTION
// Address Range: [[004a0530, 004a088c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools *this_ptr,float current_progress,float total_progress)

{
  int iVar2;
  int iVar6;
  int y;
  int y2;
  int iVar7;
  int x1;
  int x2;
  float local_34;
  int iVar1;
  int iVar5;
  int iVar4;
  double dVar3;
  float fVar2;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1858;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_34 = 0.0;
  if (0.0 < total_progress) {
    if (current_progress < 0.0) {
      current_progress = 0.0;
    }
    if (total_progress < current_progress) {
      current_progress = total_progress;
    }
    local_34 = current_progress / total_progress;
  }
  iVar1 = (int)ROUND(ROUND(local_34 * (float)100 +
                           (float)0.5));
  iVar6 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((iVar1 != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar6 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",iVar1);
    iVar4 = g_ClipRight;
    iVar2 = g_ClipLeft;
    y = g_FontCharacterWidth * 2 + g_ClipTop;
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,y + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    iVar5 = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar2,y,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(iVar2,y,y2);
    iVar7 = (int)ROUND(ROUND((float)((x2 - x1) + 1) * local_34 + (float)0.5))
            + x1;
    g_ActiveRenderColor = iVar5;
    if (x1 < iVar7) {
      if (x2 <= iVar7) {
        iVar7 = iVar4 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170(x1,y + 1,iVar7,y2,g_ProgressBarFillColor);
    }
    if (0 < iVar1) {
      fVar2 = (float)(iVar6 - g_WindowStack[g_WindowStackCount + -1].progress_start_time) *
              (float)8.4771050347222196e-07;
      if ((float)5 < fVar2) {
        iVar2 = (int)ROUND(ROUND(((total_progress - current_progress) * fVar2) / current_progress +
                                 (float)0.5));
        if (0 < iVar2) {
          dVar3 = (double)fVar2 + 0.5;
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(ROUND(dVar3)) / 0x3c,(int)ROUND(ROUND(dVar3)) % 0x3c,iVar2 / 0x3c,
                     iVar2 % 0x3c);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar2 = g_WindowStackCount + -1;
    g_WindowStack[iVar2].progress_percentage = iVar1;
    g_WindowStack[iVar2].progress_timestamp = iVar6;
  }
  return;
}
