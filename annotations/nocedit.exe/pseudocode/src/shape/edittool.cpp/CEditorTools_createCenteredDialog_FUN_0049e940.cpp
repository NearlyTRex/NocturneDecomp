// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
// Address: 0049e940
// Address Range: [[0049e940, 0049e9c0]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools *this_ptr,char *dialog_text)

{
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (this_ptr,(g_WindowWidth << 2) / 5,g_FontCharacterWidth,dialog_text,0);
  return;
}
