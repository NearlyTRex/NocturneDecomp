// Name: shape_edittool.cpp_calculateButtonHeight_FUN_00477100
// Address: 00477100
// Address Range: [[00477100, 0047718e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00477100(char *button_text)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00477100(char *button_text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_INT_01bcd9b8 = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  if (button_text == (char *)0x0) {
    iVar1 = g_CBitFont_PTR_01bcd070->max_char_height;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(g_CBitFont_PTR_01bcd070,button_text)
    ;
  }
  return g_WindowHeight / 0x50 + iVar1;
}
