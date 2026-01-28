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
  int y_pos;
  int iVar3;
  int iVar4;
  int iVar5;
  SWindow *pSVar6;
  int color_mode;
  int color_value;
  CDemonRenderer *this_ptr_00;
  
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
  iVar2 = g_WindowStackCount + -1;
  pSVar6 = g_WindowStack + iVar2;
  this_ptr_00 = (CDemonRenderer *)g_ActiveRenderColor;
  shape_edittool_cpp_paintWindowBackground_FUN_0049e590();
  engine_matrix_c_pushViewport_FUN_0050e320
            (pSVar6->left,g_WindowStack[iVar2].top,(g_WindowStack[iVar2].right - pSVar6->left) + 1,
             (g_WindowStack[iVar2].bottom - g_WindowStack[iVar2].top) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (pSVar6->left + 1,g_WindowStack[iVar2].top + 1,g_WindowStack[iVar2].right + -2,
             g_WindowStack[iVar2].bottom + -2,DAT_02cf2a78,g_WindowBorderColor1);
  g_ActiveRenderColor = g_WindowBorderColor2;
  engine_2d_c_drawHLine_FUN_00402ee0
            (pSVar6->left,g_WindowStack[iVar2].bottom + -1,g_WindowStack[iVar2].right + -1);
  engine_2d_c_drawVLine_FUN_00402ff0
            (g_WindowStack[iVar2].right + -1,g_WindowStack[iVar2].top,
             g_WindowStack[iVar2].bottom + -1);
  engine_matrix_c_popViewport_FUN_0050e480(this_ptr_00);
  iVar1 = g_ClipTop;
  if (g_WindowStack[iVar2].text_buffer[0] == '\0') {
    g_ActiveRenderColor = (int)this_ptr_00;
    return;
  }
  g_ClipTop = g_WindowStack[iVar2].top;
  iVar4 = g_FontCharacterWidth / 2 + g_WindowStack[iVar2].top + -1;
  iVar5 = g_FontCharacterWidth * 5 >> 0x1f;
  engine_2d_c_fillRectColor_FUN_00403170
            (pSVar6->left + 1,iVar4,g_WindowStack[iVar2].right + -2,
             ((int)((g_FontCharacterWidth * 5 + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2) + iVar4
             + -1,g_WindowFillColor);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  color_value = -1;
  y_pos = g_FontCharacterWidth / 2 + g_WindowStack[iVar2].top;
  text = g_WindowStack[iVar2].text_buffer;
  iVar4 = pSVar6->left;
  iVar5 = g_WindowStack[iVar2].right;
  color_mode = g_TitleBarColor;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,text);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,text,((iVar4 + iVar5) - iVar3) / 2,y_pos,color_mode,color_value);
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,text);
  iVar4 = g_FontCharacterWidth + iVar4;
  iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,"j");
  if (iVar4 < iVar5 + g_FontCharacterWidth) {
    iVar4 = iVar5 + g_FontCharacterWidth;
  }
  g_ActiveRenderColor = g_WindowBorderColor1;
  iVar4 = iVar4 + g_WindowStack[iVar2].top;
  engine_2d_c_drawHLine_FUN_00402ee0(pSVar6->left + 1,iVar4,g_WindowStack[iVar2].right + -2);
  if (g_WindowBorderColor1 != g_WindowBorderColor2) {
    g_ActiveRenderColor = g_WindowBorderColor2;
    engine_2d_c_drawHLine_FUN_00402ee0(pSVar6->left + 1,iVar4 + -1,g_WindowStack[iVar2].right + -2);
  }
  g_ClipTop = iVar1;
  g_ActiveRenderColor = (int)this_ptr_00;
  return;
}
