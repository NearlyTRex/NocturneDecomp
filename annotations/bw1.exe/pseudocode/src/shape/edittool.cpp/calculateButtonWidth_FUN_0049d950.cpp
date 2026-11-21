// Name: shape_edittool.cpp_calculateButtonWidth_FUN_0049d950
// Address: 0049d950
// Address Range: [[0049d950, 0049d9d5]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_0049d950(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_0049d950(char *button_text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 164;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  if (button_text == (char *)0x0) {
    button_text = &g_DefaultButtonText;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(g_CBitFont_PTR_01c3eb50,button_text);
  return g_INT_0061b498 / 0x28 + iVar1;
}
