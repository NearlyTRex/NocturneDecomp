// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0047d1a0
// Address: 0047d1a0
// Address Range: [[0047d1a0, 0047d220]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0047d1a0(CEditorTools *this_ptr,char *dialog_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0047d1a0(CEditorTools *this_ptr,char *dialog_text)

{
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (this_ptr,(DAT_005fba18 << 2) / 5,_DAT_01c5bae4,dialog_text,0);
  return;
}
