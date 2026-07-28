// Name: engine_font.cpp_packPixelScaled_FUN_00494020
// Address: 00494020
// Address Range: [[00494020, 00494074]]
// Convention: unknown
// Signature: uint engine_font_cpp_packPixelScaled_FUN_00494020(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_font_cpp_packPixelScaled_FUN_00494020(uint param_1,uint param_2,uint param_3)

{
  return param_3 / _DAT_01c00640 << (DAT_01c0063c & 0x1f) |
         param_2 / _DAT_01c00634 << (DAT_01c00630 & 0x1f) |
         param_1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f);
}
