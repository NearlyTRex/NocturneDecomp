// Name: engine_font.cpp_setShadowColor_FUN_00490ff0
// Address: 00490ff0
// Address Range: [[00490ff0, 00491132]]
// Convention: unknown
// Signature: void engine_font_cpp_setShadowColor_FUN_00490ff0(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004910f9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_setShadowColor_FUN_00490ff0(uint param_1,uint param_2,uint param_3)

{
  if (DAT_005b7624 == 8) {
    DAT_01c70f5c = (&DAT_01bf7720)
                   [((int)param_2 >> 3) * 0x20 + ((int)param_1 >> 3) * 0x400 + ((int)param_3 >> 3)];
  }
  else if (DAT_005b7624 == 0x10) {
    _DAT_01c70f5e =
         (ushort)(param_1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
         (ushort)(param_2 / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) |
         (ushort)(param_3 / _DAT_01c00640 << (DAT_01c0063c & 0x1f));
  }
  else if (DAT_005b7624 == 0x20) {
    _DAT_01c70f60 =
         param_3 << (DAT_01c0063c & 0x1f) |
         param_2 << (DAT_01c00630 & 0x1f) | param_1 << (DAT_01c00624 & 0x1f);
  }
  else {
    PTR_01cc4800 = "..\\engine\\font.cpp";
    INT_01cc4804 = 0x399;
    core_main_c_FUN_004c8440("Invalid bitsPerPixel in CBitFont::setTrueColor");
  }
  _DAT_01c70f68 = param_2;
  _DAT_01c70f6c = param_3;
  _DAT_01c70f64 = param_1;
  return;
}
