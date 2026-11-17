// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80
// Address: 0047fa80
// Address Range: [[0047fa80, 004801f6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(CEditorTools *this_ptr)

{
  char *text;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int color_value;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  if (g_WindowStackCount < 1) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0x94c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = g_INT_01c6b5c0;
  iVar5 = (g_WindowStackCount + -1) * 0x1f8;
  shape_edittool_cpp_paintWindowBackground_FUN_0047cd80();
  piVar6 = (int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5);
  if (g_INT_01c5baec == 0) {
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4);
    engine_matrix_c_pushViewport_FUN_004e6af0
              (*piVar6,iVar4,(*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) - *piVar6) + 1,
               (*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) - iVar4) + 1);
    iVar7 = g_WindowContentColor;
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc);
    iVar3 = iVar4 + -2;
    local_18 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2;
    local_20 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4) + 1;
    local_1c = *piVar6 + 1;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (local_1c,local_20,local_18,iVar3,g_WindowContentColor,g_WindowBorderHighlightColor)
      ;
    }
    else {
      iVar1 = g_WindowBorderHighlightColor;
      if (g_INT_01c5baec != 0) {
        iVar1 = (g_WindowBorderHighlightColor & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar1] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << 8);
        iVar1 = g_INT_01c6b5c0;
      }
      g_INT_01c6b5c0 = iVar1;
      engine_mini3d_cpp_drawRect_FUN_004f3a60(local_1c + -1,local_20 + -1,local_18 + 1,iVar4 + -1);
      if (g_INT_01c5baec != 0) {
        iVar4 = (iVar7 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
        iVar7 = g_INT_01c6b5c0;
      }
      g_INT_01c6b5c0 = iVar7;
      engine_mini3d_cpp_fillRect_FUN_004f37e0(local_1c,local_20,local_18,iVar3);
    }
    iVar4 = g_WindowBorderShadowColor;
    if (g_INT_01c5baec != 0) {
      iVar4 = (g_WindowBorderShadowColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
      iVar4 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar4;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + -1;
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -1;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6,iVar7,iVar4);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f3ab0(*piVar6,iVar7,iVar4);
    }
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4);
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -1;
    iVar3 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + -1;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,iVar4,iVar3);
      engine_matrix_c_popViewport_FUN_004e6c50();
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_004f3ad0(iVar7,iVar4,iVar3);
      engine_matrix_c_popViewport_FUN_004e6c50();
    }
  }
  else {
    engine_mini3d_cpp_getRenderViewport_FUN_004ed150(&local_44,&local_40,&local_3c,&local_38);
    local_14 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + 1;
    engine_mini3d_cpp_setRenderViewport_FUN_004ed020
              ((float)*piVar6,(float)*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4),
               (float)local_14,(float)(*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + 1));
    iVar4 = g_WindowBorderHighlightColor;
    if (g_INT_01c5baec != 0) {
      iVar4 = (g_WindowBorderHighlightColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
      iVar4 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar4;
    engine_mini3d_cpp_drawRect_FUN_004f3a60
              (*piVar6,*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4),
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -1,
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + -1);
    iVar4 = g_WindowContentColor;
    if (g_INT_01c5baec != 0) {
      iVar4 = (g_WindowContentColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10);
      iVar4 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar4;
    engine_mini3d_cpp_fillRect_FUN_004f37e0
              (*piVar6 + 1,*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4) + 1,
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2,
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + -2);
    iVar4 = g_WindowBorderShadowColor;
    if (g_INT_01c5baec != 0) {
      iVar4 = (g_WindowBorderShadowColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
      iVar4 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar4;
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0
              (*piVar6,*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + -1,
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -1);
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0
              (*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -1,
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4),
               *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) + -1);
    engine_mini3d_cpp_setRenderViewport_FUN_004ed020(local_44,local_40,local_3c,local_38);
  }
  if (*(char *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0x48) != '\0') {
    local_30 = g_INT_01c6b5ac;
    g_INT_01c6b5ac = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4);
    local_34 = g_INT_01c5bae4 / 2 + *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4) + -1;
    iVar4 = g_INT_01c5bae4 * 5 >> 0x1f;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2;
    local_24 = ((int)((g_INT_01c5bae4 * 5 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar6 + 1;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_2c,local_34,iVar7,local_24,g_TitleBarFillColor);
    }
    else {
      iVar4 = g_TitleBarFillColor;
      if (g_INT_01c5baec != 0) {
        iVar4 = (g_TitleBarFillColor & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
        iVar4 = g_INT_01c6b5c0;
      }
      g_INT_01c6b5c0 = iVar4;
      engine_mini3d_cpp_fillRect_FUN_004f37e0(local_2c,local_34,iVar7,local_24);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
    color_value = -1;
    iVar1 = g_INT_01c5bae4 / 2 + *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4);
    text = (char *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0x48);
    iVar4 = *piVar6;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8);
    iVar3 = g_TitleBarColor;
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01c5b0e0,text);
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01c5b0e0,text,((iVar4 + iVar7) - iVar2) / 2,iVar1,iVar3,color_value);
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(g_CBitFont_PTR_01c5b0e0,text);
    iVar4 = g_INT_01c5bae4 + iVar4;
    iVar7 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30
                      (g_CBitFont_PTR_01c5b0e0,"j");
    if (iVar4 < iVar7 + g_INT_01c5bae4) {
      iVar4 = iVar7 + g_INT_01c5bae4;
    }
    iVar4 = iVar4 + *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4);
    iVar7 = g_WindowBorderHighlightColor;
    if (g_INT_01c5baec != 0) {
      iVar7 = (g_WindowBorderHighlightColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar7 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar7 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar7] << 0x10);
      iVar7 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar7;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4,iVar7);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f3ab0(*piVar6 + 1,iVar4,iVar7);
    }
    if (g_WindowBorderShadowColor != g_WindowBorderHighlightColor) {
      iVar7 = g_WindowBorderShadowColor;
      if (g_INT_01c5baec != 0) {
        iVar7 = (g_WindowBorderShadowColor & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)g_UCHAR_ARRAY_01c6af98[iVar7 + 2] |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar7] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar7 + 1] << 8);
        iVar7 = g_INT_01c6b5c0;
      }
      g_INT_01c6b5c0 = iVar7;
      iVar5 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2;
      if (g_INT_01c5baec == 0) {
        engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4 + -1,iVar5);
      }
      else {
        engine_mini3d_cpp_drawHLine_FUN_004f3ab0(*piVar6 + 1,iVar4 + -1,iVar5);
      }
    }
    g_INT_01c6b5ac = local_30;
  }
  g_INT_01c6b5c0 = local_28;
  return;
}
