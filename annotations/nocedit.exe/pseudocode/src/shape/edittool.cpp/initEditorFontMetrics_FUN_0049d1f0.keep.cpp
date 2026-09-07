// Name: shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0
// Address: 0049d1f0
// MANUAL RECONSTRUCTION
// Address Range: [[0049d1f0, 0049d241]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0049d1f0(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0049d1f0(void)

{
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 141;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
#if NOCTURNE_AUTHENTIC_HUD_SCALE
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
#else
  nocturne_ui_editor_metrics();
#endif
  return;
}
