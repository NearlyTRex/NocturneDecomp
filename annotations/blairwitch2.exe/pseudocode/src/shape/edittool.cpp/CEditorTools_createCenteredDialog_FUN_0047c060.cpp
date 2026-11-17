// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0047c060
// Address: 0047c060
// Address Range: [[0047c060, 0047c0e0]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0047c060(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0047c060(CEditorTools *this_ptr,char *dialog_text)

{
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (this_ptr,(g_INT_006141b8 << 2) / 5,g_INT_01c25f7c,dialog_text,0);
  return;
}
