// Name: shape_edittool.cpp_FUN_00486580
// Address: 00486580
// Address Range: [[00486580, 0048660e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_00486580(char *button_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_00486580(char *button_text)

{
  int iVar1;
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = *(int *)(_DAT_01c5b0e0 + 0x41ec);
  }
  else {
    iVar1 = engine_font_cpp_FUN_004b2b30(_DAT_01c5b0e0,button_text);
  }
  return DAT_005fba1c / 0x50 + iVar1;
}
