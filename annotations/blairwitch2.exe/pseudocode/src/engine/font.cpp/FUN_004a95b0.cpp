// Name: engine_font.cpp_FUN_004a95b0
// Address: 004a95b0
// Address Range: [[004a95b0, 004a96d0]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a95b0(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a9697) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004a95b0(uint param_1,uint param_2,uint param_3)

{
  if (DAT_006141c0 != 8) {
    if (DAT_006141c0 == 0x10) {
      _DAT_01cb0242 =
           (ushort)(param_3 / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
           (ushort)(param_1 / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
           (ushort)(param_2 / _DAT_01c35824 << (DAT_01c35820 & 0x1f));
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01cb0244 =
           param_3 << (DAT_01c3582c & 0x1f) |
           param_1 << (DAT_01c35814 & 0x1f) | param_2 << (DAT_01c35820 & 0x1f);
    }
    else {
      _DAT_01d046a0 = "..\\engine\\font.cpp";
      _DAT_01d046a4 = 0x4b9;
      core_main_c_FUN_004e4500("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  _DAT_01cb024c = param_2;
  _DAT_01cb0250 = param_3;
  _DAT_01cb0248 = param_1;
  return;
}
