// Name: shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
// Address: 004a68e0
// Address Range: [[004a68e0, 004a6965]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(char *button_text)

{
  int iVar1;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 141;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  if (button_text == (char *)0x0) {
    button_text = &g_DefaultButtonText;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,button_text);
  return g_WindowWidth / 0x28 + iVar1;
}
