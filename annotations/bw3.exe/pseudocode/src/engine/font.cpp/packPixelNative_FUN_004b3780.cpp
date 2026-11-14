// Name: engine_font.cpp_packPixelNative_FUN_004b3780
// Address: 004b3780
// Address Range: [[004b3780, 004b37cc]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_004b3780(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004b3780(int red,int green,int blue)

{
  if (DAT_005fba20 == 0x20) {
    return blue << (DAT_01c6af8c & 0x1f) |
           red << (DAT_01c6af74 & 0x1f) | green << (DAT_01c6af80 & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}
