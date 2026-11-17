// Name: shape_edittool.cpp_calculateButtonWidth_FUN_00477080
// Address: 00477080
// Address Range: [[00477080, 004770f0]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_00477080(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_00477080(char *button_text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  if (button_text == (char *)0x0) {
    button_text = &g_DefaultButtonText;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_01bcd070,button_text);
  return iVar1;
}
