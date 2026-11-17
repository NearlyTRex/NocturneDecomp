// Name: shape_edittool.cpp_calculateButtonWidth_FUN_004864f0
// Address: 004864f0
// Address Range: [[004864f0, 00486575]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004864f0(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004864f0(char *button_text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_INT_01c5bae0 = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  if (button_text == (char *)0x0) {
    button_text = &g_CHAR_005bd95a;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01c5b0e0,button_text);
  return g_INT_005fba18 / 0x28 + iVar1;
}
