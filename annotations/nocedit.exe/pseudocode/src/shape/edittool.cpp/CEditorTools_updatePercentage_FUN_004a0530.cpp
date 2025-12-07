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
  int y;
  int y2;
  int unaff_EBX;
  int x1;
  uint unaff_EBP;
  int unaff_ESI;
  int x2;
  int unaff_EDI;
  double dVar4;
  float fVar5;
  uint uVar6;
  int local_18;
  uint local_14;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x742;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::updatePercentageWindow - no window open!");
  }
  fVar5 = 0.0;
  if (0.0 < progress_max) {
    if (progress_min < 0.0) {
      progress_min = 0.0;
    }
    if (progress_max < progress_min) {
      progress_min = progress_max;
    }
    fVar5 = progress_min / progress_max;
  }
  crt_math_c_round_FUN_005fe6b0
            ((double)(fVar5 * (float)100 + (float)0.5));
  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((local_18 != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar3 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",unaff_EBP);
    iVar2 = g_ClipRight;
    iVar3 = g_ClipLeft;
    y = g_FontCharacterWidth * 2 + g_ClipTop;
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,y + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    x = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar3,y,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(x,(int)this_ptr,unaff_ESI);
    fVar5 = (float)((x2 - x1) + 1);
    g_ActiveRenderColor = y2;
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float)(int)fVar5 * (float)x + (float)0.5));
    iVar3 = (int)ROUND(dVar4) + x1;
    if (x1 < iVar3) {
      if (x2 <= iVar3) {
        iVar3 = iVar2 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170(x1,y + 1,iVar3,unaff_ESI,g_ProgressBarFillColor);
    }
    if (0 < unaff_EBX) {
      fVar1 = (float)(unaff_EDI - g_WindowStack[g_WindowStackCount + -1].progress_start_time) *
              (float)8.4771050347222196e-07;
      if ((float)5 < fVar1) {
        uVar6 = 0x4a077d;
        dVar4 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((progress_max - fVar5) * fVar1) / fVar5 +
                                   (float)0.5));
        y = (int)ROUND(dVar4);
        if (0 < y) {
          unaff_ESI = y % 0x3c;
          dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar1 + 0.5);
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(dVar4) / 0x3c,local_14,y / 0x3c,unaff_EBX,uVar6);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = g_WindowStackCount + -1;
    g_WindowStack[iVar3].progress_percentage = y;
    g_WindowStack[iVar3].progress_timestamp = unaff_ESI;
  }
  return;
}
