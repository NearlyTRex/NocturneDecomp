// Name: shape_edittool.cpp_calculateButtonHeight_FUN_00485380
// Address: 00485380
// Address Range: [[00485380, 0048540e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00485380(char *button_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00485380(char *button_text)

{
  int iVar1;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = _DAT_01c25590->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01c25590,button_text);
  }
  return DAT_006141bc / 0x50 + iVar1;
}
