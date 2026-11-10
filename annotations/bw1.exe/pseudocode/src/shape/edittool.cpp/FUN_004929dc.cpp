// Name: shape_edittool.cpp_FUN_004929dc
// Address: 004929dc
// Address Range: [[004929dc, 00492a31]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004929dc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004929dc(void)

{
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  return;
}
