// Name: engine_font.cpp_packPixelNative_FUN_00494080
// Address: 00494080
// Address Range: [[00494080, 004940cc]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_00494080(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_00494080(int red,int green,int blue)

{
  if (DAT_005b7624 == 0x20) {
    return blue << (DAT_01c0063c & 0x1f) |
           red << (DAT_01c00624 & 0x1f) | green << (DAT_01c00630 & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}
