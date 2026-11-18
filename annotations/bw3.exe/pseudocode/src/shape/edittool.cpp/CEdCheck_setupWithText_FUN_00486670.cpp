// Name: shape_edittool.cpp_CEdCheck_setupWithText_FUN_00486670
// Address: 00486670
// Address Range: [[00486670, 00486751]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_00486670(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_00486670(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (checkbox_text == (char *)0x0) {
    checkbox_text = (char *)0x5bd95b;
  }
  this_ptr->x_position = x_pos;
  pcVar6 = this_ptr->checkbox_text;
  this_ptr->y_position = y_pos;
  do {
    cVar1 = *checkbox_text;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = checkbox_text[1];
    checkbox_text = checkbox_text + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30
                    (g_CBitFont_PTR_01c5b0e0,this_ptr->checkbox_text);
  this_ptr->right_boundary = this_ptr->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(this_ptr);
  iVar2 = this_ptr->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(this_ptr);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80
                    (g_CBitFont_PTR_01c5b0e0,this_ptr->checkbox_text);
  this_ptr->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
