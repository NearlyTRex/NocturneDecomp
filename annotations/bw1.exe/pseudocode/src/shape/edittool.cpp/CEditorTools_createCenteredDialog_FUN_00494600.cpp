// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 00494680]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_00494600(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_00494600(CEditorTools *this_ptr,char *dialog_text)

{
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 164;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (this_ptr,(g_INT_0061b498 << 2) / 5,g_INT_01c3f53c,dialog_text,0);
  return;
}
