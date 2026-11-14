// Name: shape_edittool.cpp_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 00494680]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00494600(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00494600(void)

{
  CEditorTools *in_stack_00000004;
  char *in_stack_00000008;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (in_stack_00000004,(DAT_0061b498 << 2) / 5,_DAT_01c3f53c,in_stack_00000008,0);
  return;
}
