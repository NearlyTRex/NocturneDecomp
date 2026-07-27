// Name: shape_edittool.cpp_FUN_00477080
// Address: 00477080
// Address Range: [[00477080, 004770f0]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00477080(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00477080(int param_1)

{
  if (_DAT_01bcd070 == 0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (param_1 == 0) {
    param_1 = 0x57f0fa;
  }
  engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,param_1);
  return;
}
