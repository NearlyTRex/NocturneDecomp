// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_00496ee0
// Address: 00496ee0
// Address Range: [[00496ee0, 00497656]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_00496ee0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_00496ee0(CEditorTools *this_ptr)

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
  
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 164;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2377;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = g_INT_01c4f020;
  iVar5 = (g_WindowStackCount + -1) * 0x1f8;
  shape_edittool_cpp_paintWindowBackground_FUN_004941e0();
  piVar6 = (int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5);
  if (g_INT_01c3f544 == 0) {
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4);
    engine_matrix_c_pushViewport_FUN_005090b0
              (*piVar6,iVar4,(*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) - *piVar6) + 1,
               (*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) - iVar4) + 1);
    iVar7 = g_WindowContentColor;
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc);
    iVar3 = iVar4 + -2;
    local_18 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2;
    local_20 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4) + 1;
    local_1c = *piVar6 + 1;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (local_1c,local_20,local_18,iVar3,g_WindowContentColor,g_INT_01c3f54c);
    }
    else {
      iVar1 = g_INT_01c3f54c;
      if (g_INT_01c3f544 != 0) {
        iVar1 = (g_INT_01c3f54c & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << 8);
        iVar1 = g_INT_01c4f020;
      }
      g_INT_01c4f020 = iVar1;
      engine_mini3d_cpp_drawRect_FUN_00518290(local_1c + -1,local_20 + -1,local_18 + 1,iVar4 + -1);
      if (g_INT_01c3f544 != 0) {
        iVar4 = (iVar7 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8);
        iVar7 = g_INT_01c4f020;
      }
      g_INT_01c4f020 = iVar7;
      engine_mini3d_cpp_fillRect_FUN_00518010(local_1c,local_20,local_18,iVar3);
    }
    iVar4 = g_INT_01c3f550;
    if (g_INT_01c3f544 != 0) {
      iVar4 = (g_INT_01c3f550 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8);
      iVar4 = g_INT_01c4f020;
    }
    g_INT_01c4f020 = iVar4;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + -1;
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -1;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6,iVar7,iVar4);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_005182e0(*piVar6,iVar7,iVar4);
    }
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4);
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -1;
    iVar3 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + -1;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,iVar4,iVar3);
      engine_matrix_c_popViewport_FUN_00509210();
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_00518300(iVar7,iVar4,iVar3);
      engine_matrix_c_popViewport_FUN_00509210();
    }
  }
  else {
    engine_mini3d_cpp_getRenderViewport_FUN_00511980(&local_44,&local_40,&local_3c,&local_38);
    local_14 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + 1;
    engine_mini3d_cpp_setRenderViewport_FUN_00511850
              ((float)*piVar6,(float)*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4),
               (float)local_14,(float)(*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + 1));
    iVar4 = g_INT_01c3f54c;
    if (g_INT_01c3f544 != 0) {
      iVar4 = (g_INT_01c3f54c & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8);
      iVar4 = g_INT_01c4f020;
    }
    g_INT_01c4f020 = iVar4;
    engine_mini3d_cpp_drawRect_FUN_00518290
              (*piVar6,*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4),
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -1,
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + -1);
    iVar4 = g_WindowContentColor;
    if (g_INT_01c3f544 != 0) {
      iVar4 = (g_WindowContentColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10);
      iVar4 = g_INT_01c4f020;
    }
    g_INT_01c4f020 = iVar4;
    engine_mini3d_cpp_fillRect_FUN_00518010
              (*piVar6 + 1,*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4) + 1,
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2,
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + -2);
    iVar4 = g_INT_01c3f550;
    if (g_INT_01c3f544 != 0) {
      iVar4 = (g_INT_01c3f550 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8);
      iVar4 = g_INT_01c4f020;
    }
    g_INT_01c4f020 = iVar4;
    engine_mini3d_cpp_drawHLine_FUN_005182e0
              (*piVar6,*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + -1,
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -1);
    engine_mini3d_cpp_drawVLine_FUN_00518300
              (*(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -1,
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4),
               *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) + -1);
    engine_mini3d_cpp_setRenderViewport_FUN_00511850(local_44,local_40,local_3c,local_38);
  }
  if (*(char *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0x48) != '\0') {
    local_30 = g_INT_01c4f00c;
    g_INT_01c4f00c = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4);
    local_34 = g_INT_01c3f53c / 2 + *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4) + -1;
    iVar4 = g_INT_01c3f53c * 5 >> 0x1f;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2;
    local_24 = ((int)((g_INT_01c3f53c * 5 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar6 + 1;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_2c,local_34,iVar7,local_24,g_TitleBarFillColor);
    }
    else {
      iVar4 = g_TitleBarFillColor;
      if (g_INT_01c3f544 != 0) {
        iVar4 = (g_TitleBarFillColor & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8);
        iVar4 = g_INT_01c4f020;
      }
      g_INT_01c4f020 = iVar4;
      engine_mini3d_cpp_fillRect_FUN_00518010(local_2c,local_34,iVar7,local_24);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
    color_value = -1;
    iVar1 = g_INT_01c3f53c / 2 + *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4);
    text = (char *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0x48);
    iVar4 = *piVar6;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8);
    iVar3 = g_TitleBarColor;
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(g_CBitFont_PTR_01c3eb50,text);
    engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
              (g_CBitFont_PTR_01c3eb50,text,((iVar4 + iVar7) - iVar2) / 2,iVar1,iVar3,color_value);
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(g_CBitFont_PTR_01c3eb50,text);
    iVar4 = g_INT_01c3f53c + iVar4;
    iVar7 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50
                      (g_CBitFont_PTR_01c3eb50,"j");
    if (iVar4 < iVar7 + g_INT_01c3f53c) {
      iVar4 = iVar7 + g_INT_01c3f53c;
    }
    iVar4 = iVar4 + *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4);
    iVar7 = g_INT_01c3f54c;
    if (g_INT_01c3f544 != 0) {
      iVar7 = (g_INT_01c3f54c & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar7 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar7 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar7] << 0x10);
      iVar7 = g_INT_01c4f020;
    }
    g_INT_01c4f020 = iVar7;
    iVar7 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4,iVar7);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_005182e0(*piVar6 + 1,iVar4,iVar7);
    }
    if (g_INT_01c3f550 != g_INT_01c3f54c) {
      iVar7 = g_INT_01c3f550;
      if (g_INT_01c3f544 != 0) {
        iVar7 = (g_INT_01c3f550 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar7 + 2] |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar7] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar7 + 1] << 8);
        iVar7 = g_INT_01c4f020;
      }
      g_INT_01c4f020 = iVar7;
      iVar5 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2;
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4 + -1,iVar5);
      }
      else {
        engine_mini3d_cpp_drawHLine_FUN_005182e0(*piVar6 + 1,iVar4 + -1,iVar5);
      }
    }
    g_INT_01c4f00c = local_30;
  }
  g_INT_01c4f020 = local_28;
  return;
}
