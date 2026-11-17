// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004722b0
// Address: 004722b0
// Address Range: [[004722b0, 00472484]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(CEditorTools *this_ptr)

{
  char *text;
  int iVar1;
  int iVar2;
  int iVar3;
  int y;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int color_mode;
  int color_value;
  
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_INT_01bcd9b8 = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  if (g_INT_01bcd07c < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1865;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar3 = g_ActiveRenderColor;
  iVar6 = (g_INT_01bcd07c + -1) * 0x1d8;
  piVar7 = (int *)(g_CHAR_ARRAY_01bcd080 + iVar6);
  engine_matrix_c_pushViewport_FUN_004ce7c0
            (*piVar7,*(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 4),
             (*(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 8) - *piVar7) + 1,
             (*(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 0xc) -
             *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 4)) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403ef0
            (*piVar7 + 1,*(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 4) + 1,
             *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 8) + -2,
             *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 0xc) + -2,g_INT_01bcddc8,g_INT_01bcddcc);
  engine_matrix_c_popViewport_FUN_004ce920();
  iVar2 = g_ClipTop;
  if (g_CHAR_ARRAY_01bcd080[iVar6 + 0x38] == '\0') {
    g_ActiveRenderColor = iVar3;
    return;
  }
  g_ClipTop = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 4);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  color_value = -1;
  iVar5 = *piVar7;
  y = g_INT_01bcd9bc / 2 + *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 4) + 1;
  iVar1 = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 8);
  text = g_CHAR_ARRAY_01bcd080 + iVar6 + 0x38;
  color_mode = g_INT_01bcddd0;
  iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_01bcd070,text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_01bcd070,text,((iVar5 + iVar1) - iVar4) / 2,y,color_mode,color_value);
  g_ActiveRenderColor = g_INT_01bcddcc;
  iVar5 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(g_CBitFont_PTR_01bcd070,text);
  engine_2d_c_drawHLine_FUN_00403bd0
            (*piVar7 + 1,iVar5 + *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 4) + g_INT_01bcd9bc,
             *(int *)(g_CHAR_ARRAY_01bcd080 + iVar6 + 8) + -2);
  g_ClipTop = iVar2;
  g_ActiveRenderColor = iVar3;
  return;
}
