// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004722b0
// Address: 004722b0
// Address Range: [[004722b0, 00472484]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (_DAT_01bcd07c < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1865;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar3 = g_ActiveRenderColor;
  iVar6 = (_DAT_01bcd07c + -1) * 0x1d8;
  piVar7 = (int *)(iVar6 + 0x1bcd080);
  engine_matrix_c_pushViewport_FUN_004ce7c0
            (*piVar7,*(int *)(iVar6 + 0x1bcd084),(*(int *)(iVar6 + 0x1bcd088) - *piVar7) + 1,
             (*(int *)(iVar6 + 0x1bcd08c) - *(int *)(iVar6 + 0x1bcd084)) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403ef0
            (*piVar7 + 1,*(int *)(iVar6 + 0x1bcd084) + 1,*(int *)(iVar6 + 0x1bcd088) + -2,
             *(int *)(iVar6 + 0x1bcd08c) + -2,_DAT_01bcddc8,_DAT_01bcddcc);
  engine_matrix_c_popViewport_FUN_004ce920();
  iVar2 = g_ClipTop;
  if (*(char *)(iVar6 + 0x1bcd0b8) == '\0') {
    g_ActiveRenderColor = iVar3;
    return;
  }
  g_ClipTop = *(int *)(iVar6 + 0x1bcd084);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  color_value = -1;
  iVar5 = *piVar7;
  y = _DAT_01bcd9bc / 2 + *(int *)(iVar6 + 0x1bcd084) + 1;
  iVar1 = *(int *)(iVar6 + 0x1bcd088);
  text = (char *)(iVar6 + 0x1bcd0b8);
  color_mode = _DAT_01bcddd0;
  iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,text,((iVar5 + iVar1) - iVar4) / 2,y,color_mode,color_value);
  g_ActiveRenderColor = _DAT_01bcddcc;
  iVar5 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,text);
  engine_2d_c_drawHLine_FUN_00403bd0
            (*piVar7 + 1,iVar5 + *(int *)(iVar6 + 0x1bcd084) + _DAT_01bcd9bc,
             *(int *)(iVar6 + 0x1bcd088) + -2);
  g_ClipTop = iVar2;
  g_ActiveRenderColor = iVar3;
  return;
}
