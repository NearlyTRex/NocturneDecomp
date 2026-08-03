// Name: shape_edittool.cpp_calculateButtonHeight_FUN_00477100
// Address: 00477100
// Address Range: [[00477100, 0047718e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00477100(char *button_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00477100(char *button_text)

{
  int iVar1;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = _DAT_01bcd070->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,button_text);
  }
  return DAT_005b7620 / 0x50 + iVar1;
}
