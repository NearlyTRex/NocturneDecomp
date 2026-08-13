// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_004701a0
// Address: 004701a0
// Address Range: [[004701a0, 00470220]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_004701a0(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_004701a0(CEditorTools *this_ptr,char *dialog_text)

{
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (this_ptr,(g_WindowWidth << 2) / 5,_DAT_01bcd9bc,dialog_text,0);
  return;
}
