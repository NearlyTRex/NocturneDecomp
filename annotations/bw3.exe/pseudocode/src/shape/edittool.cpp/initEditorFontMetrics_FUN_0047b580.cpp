// Name: shape_edittool.cpp_initEditorFontMetrics_FUN_0047b580
// Address: 0047b580
// Address Range: [[0047b580, 0047b5d1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0047b580(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0047b580(void)

{
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  return;
}
