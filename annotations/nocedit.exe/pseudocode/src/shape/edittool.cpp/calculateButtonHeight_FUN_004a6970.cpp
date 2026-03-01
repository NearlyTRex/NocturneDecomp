// Name: shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
// Address: 004a6970
// Address Range: [[004a6970, 004a69fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(char *button_text)

{
  int iVar1;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = g_EditorFont->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_EditorFont,button_text);
  }
  return g_WindowHeight / 0x50 + iVar1;
}
