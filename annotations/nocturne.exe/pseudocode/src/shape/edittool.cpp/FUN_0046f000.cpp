// Name: shape_edittool.cpp_FUN_0046f000
// Address: 0046f000
// Address Range: [[0046f000, 0046f051]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0046f000(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0046f000(void)

{
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  return;
}
