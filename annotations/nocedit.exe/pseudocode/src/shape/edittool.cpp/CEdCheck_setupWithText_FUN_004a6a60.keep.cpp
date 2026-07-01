// Name: shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60
// Address: 004a6a60
// MANUAL RECONSTRUCTION
// Address Range: [[004a6a60, 004a6b41]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_004a6a60(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_004a6a60(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

{
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (checkbox_text == (char *)0x0) {
    checkbox_text = &s_EmptyChar_00623fa1;
  }
  this_ptr->x_position = x_pos;
  this_ptr->y_position = y_pos;
  strcpy(this_ptr->checkbox_text,checkbox_text);
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 141;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_EditorFont,this_ptr->checkbox_text);
  this_ptr->right_boundary = this_ptr->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(this_ptr);
  iVar2 = this_ptr->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(this_ptr);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,this_ptr->checkbox_text);
  this_ptr->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
