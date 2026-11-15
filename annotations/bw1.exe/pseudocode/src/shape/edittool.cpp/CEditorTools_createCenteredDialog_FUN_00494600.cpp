// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 00494680]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_00494600(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_00494600(CEditorTools *this_ptr,char *dialog_text)

{
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (this_ptr,(DAT_0061b498 << 2) / 5,_DAT_01c3f53c,dialog_text,0);
  return;
}
