// Name: shape_edittool.cpp_calculateButtonWidth_FUN_004852f0
// Address: 004852f0
// Address Range: [[004852f0, 00485375]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004852f0(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004852f0(char *button_text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01c25590 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_INT_01c25f78 = g_CBitFont_PTR_01c25590->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x6a)
  ;
  if (button_text == (char *)0x0) {
    button_text = &g_CHAR_005d2b04;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_CBitFont_PTR_01c25590,button_text);
  return g_INT_006141b8 / 0x28 + iVar1;
}
