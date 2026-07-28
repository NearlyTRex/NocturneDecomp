// Name: shape_edittool.cpp_FUN_004722b0
// Address: 004722b0
// Address Range: [[004722b0, 00472484]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004722b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004722b0(void)

{
  char *text;
  int iVar1;
  uint uVar2;
  int y;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int color_mode;
  int color_value;
  CDemonRenderer *this_ptr;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (_DAT_01bcd07c < 1) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x749;
    core_main_c_FUN_004c8440("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar5 = (_DAT_01bcd07c + -1) * 0x1d8;
  piVar6 = (int *)(iVar5 + 0x1bcd080);
  this_ptr = _DAT_01c00c70;
  engine_matrix_c_pushViewport_FUN_004ce7c0
            (*piVar6,*(int *)(iVar5 + 0x1bcd084),(*(int *)(iVar5 + 0x1bcd088) - *piVar6) + 1,
             (*(int *)(iVar5 + 0x1bcd08c) - *(int *)(iVar5 + 0x1bcd084)) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403ef0
            (*piVar6 + 1,*(int *)(iVar5 + 0x1bcd084) + 1,*(int *)(iVar5 + 0x1bcd088) + -2,
             *(int *)(iVar5 + 0x1bcd08c) + -2,_DAT_01bcddc8,_DAT_01bcddcc);
  engine_matrix_c_popViewport_FUN_004ce920(this_ptr);
  uVar2 = _DAT_01c00c5c;
  if (*(char *)(iVar5 + 0x1bcd0b8) == '\0') {
    _DAT_01c00c70 = this_ptr;
    return;
  }
  _DAT_01c00c5c = *(uint *)(iVar5 + 0x1bcd084);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  color_value = -1;
  iVar4 = *piVar6;
  y = _DAT_01bcd9bc / 2 + *(int *)(iVar5 + 0x1bcd084) + 1;
  iVar1 = *(int *)(iVar5 + 0x1bcd088);
  text = (char *)(iVar5 + 0x1bcd0b8);
  color_mode = _DAT_01bcddd0;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,text,((iVar4 + iVar1) - iVar3) / 2,y,color_mode,color_value);
  _DAT_01c00c70 = (CDemonRenderer *)_DAT_01bcddcc;
  iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,text);
  engine_2d_c_drawHLine_FUN_00403bd0
            (*piVar6 + 1,iVar4 + *(int *)(iVar5 + 0x1bcd084) + _DAT_01bcd9bc,
             *(int *)(iVar5 + 0x1bcd088) + -2);
  _DAT_01c00c5c = uVar2;
  _DAT_01c00c70 = this_ptr;
  return;
}
