// Name: shape_edittool.cpp_calculateButtonHeight_FUN_00485380
// Address: 00485380
// Address Range: [[00485380, 0048540e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00485380(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00485380(char *button_text)

{
  int iVar1;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 160;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = g_EditorFont->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(g_EditorFont,button_text);
  }
  return g_INT_006141bc / 0x50 + iVar1;
}
