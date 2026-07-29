// Name: engine_font.cpp_packPixelScaled_FUN_00494020
// Address: 00494020
// Address Range: [[00494020, 00494074]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelScaled_FUN_00494020(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_font_cpp_packPixelScaled_FUN_00494020(int red,int green,int blue)

{
  return (uint)blue / _DAT_01c00640 << (DAT_01c0063c & 0x1f) |
         (uint)green / _DAT_01c00634 << (DAT_01c00630 & 0x1f) |
         (uint)red / _DAT_01c00628 << (DAT_01c00624 & 0x1f);
}
