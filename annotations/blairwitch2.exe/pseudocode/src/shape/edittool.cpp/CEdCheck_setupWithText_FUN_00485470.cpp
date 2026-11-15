// Name: shape_edittool.cpp_CEdCheck_setupWithText_FUN_00485470
// Address: 00485470
// Address Range: [[00485470, 00485551]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_00485470(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_00485470(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (checkbox_text == (char *)0x0) {
    checkbox_text = (char *)0x5d2b05;
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
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01c25590,this_ptr->checkbox_text)
  ;
  this_ptr->right_boundary = this_ptr->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(this_ptr);
  iVar2 = this_ptr->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004855f0(this_ptr);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(_DAT_01c25590,this_ptr->checkbox_text);
  this_ptr->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
