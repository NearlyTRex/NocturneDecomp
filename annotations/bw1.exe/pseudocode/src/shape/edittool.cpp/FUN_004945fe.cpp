// Name: shape_edittool.cpp_FUN_004945fe
// Address: 004945fe
// Address Range: [[004945fe, 00494680]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004945fe(CEditorTools *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004945fe(CEditorTools *param_1,char *param_2)

{
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_FUN_004c4510(_DAT_01c3eb50,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (param_1,(DAT_0061b498 << 2) / 5,_DAT_01c3f53c,param_2,0);
  return;
}
