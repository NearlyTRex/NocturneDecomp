// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
// Address: 004a0530
// Address Range: [[004a0530, 004a088c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools *this_ptr,float progress_min,float progress_max)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools *this_ptr,float progress_min,float progress_max)

{
  int iVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int y;
  int y2;
  int iVar7;
  int x1;
  int x2;
  float local_34;
  
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
    iVar7 = g_ClipLeft;
    y = g_FontCharacterWidth * 2 + g_ClipTop;
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,y + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    iVar5 = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar7,y,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(iVar7,y,y2);
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
        iVar7 = (int)ROUND(ROUND(((progress_max - progress_min) * fVar2) / progress_min +
                                 (float)0.5));
        if (0 < iVar7) {
          dVar3 = (double)fVar2 + 0.5;
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(ROUND(dVar3)) / 0x3c,(int)ROUND(ROUND(dVar3)) % 0x3c,iVar7 / 0x3c,
                     iVar7 % 0x3c);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar7 = g_WindowStackCount + -1;
    g_WindowStack[iVar7].progress_percentage = iVar1;
    g_WindowStack[iVar7].progress_timestamp = iVar6;
  }
  return;
}
