// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_004701a0
// Address: 004701a0
// Address Range: [[004701a0, 00470220]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_004701a0(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_004701a0(CEditorTools *this_ptr,char *dialog_text)

{
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (this_ptr,(g_WindowWidth << 2) / 5,g_INT_01bcd9bc,dialog_text,0);
  return;
}
