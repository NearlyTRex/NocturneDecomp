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
  float fVar2;
  int iVar3;
  int x;
  uint in_EAX;
  ushort uVar6;
  int iVar4;
  float fVar5;
  int y2;
  ushort extraout_var;
  uint in_EDX;
  uint extraout_EDX;
  uint uVar7;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int x1;
  int unaff_EBP;
  uint unaff_ESI;
  int x2;
  float10 fVar8;
  double dVar9;
  int unaff_retaddr;
  int iStack00000010;
  int iStack00000014;
  
  uVar6 = (ushort)((uint)in_EAX >> 0x10);
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x742;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::updatePercentageWindow - no window open!");
    in_EDX = extraout_EDX_01;
    uVar6 = extraout_var;
  }
  fVar5 = (float)CONCAT22 /* combine 2-byte values */(uVar6,(ushort)(0.0 < progress_max) << 8 | (ushort)NAN(progress_max) << 10
                                | (ushort)(progress_max == 0.0) << 0xe);
  if (0.0 < progress_max) {
    if (progress_min < 0.0) {
      progress_min = 0.0;
    }
    fVar5 = (float)CONCAT22 /* combine 2-byte values */(uVar6,(ushort)(progress_min < progress_max) << 8 |
                                  (ushort)(NAN(progress_min) || NAN(progress_max)) << 10 |
                                  (ushort)(progress_min == progress_max) << 0xe);
    if (progress_min >= progress_max && (progress_min == progress_max) == 0) {
      fVar5 = progress_max;
    }
  }
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,fVar5));
  iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((unaff_EBP != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar4 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",unaff_ESI);
    iVar3 = g_ClipRight;
    iVar4 = g_ClipLeft;
    fVar5 = (float)(g_FontCharacterWidth * 2 + g_ClipTop);
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,(int)fVar5 + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    x = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar4,(int)fVar5,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(x,(int)progress_max,unaff_retaddr);
    iStack00000010 = (x2 - x1) + 1;
    fVar8 = (float10)iStack00000010 * (float10)(float)x + (float10)0.5;
    g_ActiveRenderColor = y2;
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iStack00000010));
    uVar7 = (uint)((ulonglong)dVar9 >> 0x20);
    iStack00000014 = (int)ROUND(fVar8);
    iVar4 = iStack00000014 + x1;
    if (x1 < iVar4) {
      if (x2 <= iVar4) {
        iVar4 = iVar3 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170
                (x1,(int)fVar5 + 1,iVar4,(int)fVar5,g_ProgressBarFillColor);
      uVar7 = extraout_EDX_00;
    }
    if (0 < iStack00000010) {
      iVar4 = (int)fVar5 - g_WindowStack[g_WindowStackCount + -1].progress_start_time;
      fVar1 = (float)iVar4 * (float)8.4771050347222196e-07;
      fVar2 = (float)5;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        fVar8 = (((float10)progress_max - (float10)fVar5) * (float10)fVar1) / (float10)fVar5 +
                (float10)0.5;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44 /* combine 2-byte values */(uVar7,CONCAT22 /* combine 2-byte values */((short)((uint)iVar4 >> 0x10),
                                                   (ushort)(fVar1 < fVar2) << 8 |
                                                   (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                                   (ushort)(fVar1 == fVar2) << 0xe)));
        iVar4 = (int)ROUND(fVar8);
        if (0 < iVar4) {
          fVar8 = (float10)fVar1 + (float10)0.5;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar4 % 0x3c,iVar4 / 0x3c));
          progress_max = (float)((ulonglong)dVar9 >> 0x20);
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(fVar8) / 0x3c,unaff_retaddr,iVar4 / 0x3c,iStack00000010);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = g_WindowStackCount + -1;
    g_WindowStack[iVar4].progress_percentage = iStack00000014;
    g_WindowStack[iVar4].progress_timestamp = (int)progress_max;
  }
  return;
}
