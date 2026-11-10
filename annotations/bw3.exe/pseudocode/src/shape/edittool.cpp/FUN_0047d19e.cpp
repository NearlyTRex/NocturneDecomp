// Name: shape_edittool.cpp_FUN_0047d19e
// Address: 0047d19e
// Address Range: [[0047d19e, 0047d220]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047d19e(CEditorTools *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047d19e(CEditorTools *param_1,char *param_2)

{
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (param_1,(DAT_005fba18 << 2) / 5,_DAT_01c5bae4,param_2,0);
  return;
}
