// Name: shape_edittool.cpp_initEditorFontMetrics_FUN_004929e0
// Address: 004929e0
// Address Range: [[004929e0, 00492a31]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_004929e0(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_004929e0(void)

{
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  return;
}
