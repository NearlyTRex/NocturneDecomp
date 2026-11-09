// Name: engine_font.cpp_FUN_004b11b0
// Address: 004b11b0
// Address Range: [[004b11b0, 004b12d0]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b11b0(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b1297) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004b11b0(uint param_1,uint param_2,uint param_3)

{
  if (DAT_005fba20 != 8) {
    if (DAT_005fba20 == 0x10) {
      _DAT_01d1ad62 =
           (ushort)(param_3 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
           (ushort)(param_1 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
           (ushort)(param_2 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f));
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01d1ad64 =
           param_3 << (DAT_01c6af8c & 0x1f) |
           param_1 << (DAT_01c6af74 & 0x1f) | param_2 << (DAT_01c6af80 & 0x1f);
    }
    else {
      _DAT_01d71de0 = "..\\engine\\font.cpp";
      _DAT_01d71de4 = 0x4c0;
      core_main_c_FUN_004e4330("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  _DAT_01d1ad6c = param_2;
  _DAT_01d1ad70 = param_3;
  _DAT_01d1ad68 = param_1;
  return;
}
