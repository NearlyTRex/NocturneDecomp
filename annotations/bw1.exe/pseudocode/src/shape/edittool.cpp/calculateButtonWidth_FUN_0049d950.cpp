// Name: shape_edittool.cpp_calculateButtonWidth_FUN_0049d950
// Address: 0049d950
// Address Range: [[0049d950, 0049d9d5]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_0049d950(char *button_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_0049d950(char *button_text)

{
  int iVar1;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (button_text == (char *)0x0) {
    button_text = &DAT_005dc89d;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,button_text);
  return DAT_0061b498 / 0x28 + iVar1;
}
