// Name: shape_edittool.cpp_FUN_0047b57c
// Address: 0047b57c
// Address Range: [[0047b57c, 0047b5d1]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b57c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047b57c(void)

{
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  return;
}
