// Name: shape_edittool.cpp_CEdCheck_setupWithText_FUN_0049dad0
// Address: 0049dad0
// Address Range: [[0049dad0, 0049dbb1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_0049dad0(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_0049dad0(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (checkbox_text == (char *)0x0) {
    checkbox_text = (char *)0x5dc89e;
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
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50
                    (g_CBitFont_PTR_01c3eb50,this_ptr->checkbox_text);
  this_ptr->right_boundary = this_ptr->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(this_ptr);
  iVar2 = this_ptr->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_0049dc50(this_ptr);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                    (g_CBitFont_PTR_01c3eb50,this_ptr->checkbox_text);
  this_ptr->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
