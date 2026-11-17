// Name: shape_edittool.cpp_initEditorFontMetrics_FUN_0047a4f0
// Address: 0047a4f0
// Address Range: [[0047a4f0, 0047a541]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0047a4f0(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0047a4f0(void)

{
  if (g_CBitFont_PTR_01c25590 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_INT_01c25f78 = g_CBitFont_PTR_01c25590->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x6a)
  ;
  return;
}
