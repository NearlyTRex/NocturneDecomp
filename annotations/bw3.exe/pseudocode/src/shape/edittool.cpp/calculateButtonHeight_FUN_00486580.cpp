// Name: shape_edittool.cpp_calculateButtonHeight_FUN_00486580
// Address: 00486580
// Address Range: [[00486580, 0048660e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00486580(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00486580(char *button_text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  if (button_text == (char *)0x0) {
    iVar1 = g_CBitFont_PTR_01c5b0e0->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(g_CBitFont_PTR_01c5b0e0,button_text)
    ;
  }
  return g_INT_005fba1c / 0x50 + iVar1;
}
