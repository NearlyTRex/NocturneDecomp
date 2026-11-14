// Name: shape_edittool.cpp_FUN_0049d9e0
// Address: 0049d9e0
// Address Range: [[0049d9e0, 0049da6e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0049d9e0(char *button_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0049d9e0(char *button_text)

{
  int iVar1;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = _DAT_01c3eb50->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,button_text);
  }
  return DAT_0061b49c / 0x50 + iVar1;
}
