// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
// Address: 004a0f80
// Address Range: [[004a0f80, 004a1221]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools *this_ptr)

{
  char *text;
  int iVar1;
  int iVar2;
  int iVar3;
  int y;
  int iVar4;
  int iVar5;
  int iVar6;
  SWindow *pSVar7;
  int color_mode;
  int color_value;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x887;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_ActiveRenderColor;
  iVar3 = g_WindowStackCount + -1;
  pSVar7 = g_WindowStack + iVar3;
  shape_edittool_cpp_paintWindowBackground_FUN_0049e590();
  engine_matrix_c_pushViewport_FUN_0050e320
            (pSVar7->left,g_WindowStack[iVar3].top,(g_WindowStack[iVar3].right - pSVar7->left) + 1,
             (g_WindowStack[iVar3].bottom - g_WindowStack[iVar3].top) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (pSVar7->left + 1,g_WindowStack[iVar3].top + 1,g_WindowStack[iVar3].right + -2,
             g_WindowStack[iVar3].bottom + -2,INT_02cf2a78,g_WindowBorderColor1);
  g_ActiveRenderColor = g_WindowBorderColor2;
  engine_2d_c_drawHLine_FUN_00402ee0
            (pSVar7->left,g_WindowStack[iVar3].bottom + -1,g_WindowStack[iVar3].right + -1);
  engine_2d_c_drawVLine_FUN_00402ff0
            (g_WindowStack[iVar3].right + -1,g_WindowStack[iVar3].top,
             g_WindowStack[iVar3].bottom + -1);
  engine_matrix_c_popViewport_FUN_0050e480();
  iVar1 = g_ClipTop;
  if (g_WindowStack[iVar3].text_buffer[0] == '\0') {
    g_ActiveRenderColor = iVar2;
    return;
  }
  g_ClipTop = g_WindowStack[iVar3].top;
  iVar5 = g_FontCharacterWidth / 2 + g_WindowStack[iVar3].top + -1;
  iVar6 = g_FontCharacterWidth * 5 >> 0x1f;
  engine_2d_c_fillRectColor_FUN_00403170
            (pSVar7->left + 1,iVar5,g_WindowStack[iVar3].right + -2,
             ((int)((g_FontCharacterWidth * 5 + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2) + iVar5
             + -1,g_WindowFillColor);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  color_value = -1;
  y = g_FontCharacterWidth / 2 + g_WindowStack[iVar3].top;
  text = g_WindowStack[iVar3].text_buffer;
  iVar5 = pSVar7->left;
  iVar6 = g_WindowStack[iVar3].right;
  color_mode = g_TitleBarColor;
  iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,text);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_EditorFont,text,((iVar5 + iVar6) - iVar4) / 2,y,color_mode,color_value);
  iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,text);
  iVar5 = g_FontCharacterWidth + iVar5;
  iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,"j");
  if (iVar5 < iVar6 + g_FontCharacterWidth) {
    iVar5 = iVar6 + g_FontCharacterWidth;
  }
  g_ActiveRenderColor = g_WindowBorderColor1;
  iVar5 = iVar5 + g_WindowStack[iVar3].top;
  engine_2d_c_drawHLine_FUN_00402ee0(pSVar7->left + 1,iVar5,g_WindowStack[iVar3].right + -2);
  if (g_WindowBorderColor1 != g_WindowBorderColor2) {
    g_ActiveRenderColor = g_WindowBorderColor2;
    engine_2d_c_drawHLine_FUN_00402ee0(pSVar7->left + 1,iVar5 + -1,g_WindowStack[iVar3].right + -2);
  }
  g_ClipTop = iVar1;
  g_ActiveRenderColor = iVar2;
  return;
}
