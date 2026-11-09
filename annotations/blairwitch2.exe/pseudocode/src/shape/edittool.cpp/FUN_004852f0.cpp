// Name: shape_edittool.cpp_FUN_004852f0
// Address: 004852f0
// Address Range: [[004852f0, 00485375]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_004852f0(char *button_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_004852f0(char *button_text)

{
  int iVar1;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  if (button_text == (char *)0x0) {
    button_text = &DAT_005d2b04;
  }
  iVar1 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,button_text);
  return DAT_006141b8 / 0x28 + iVar1;
}
