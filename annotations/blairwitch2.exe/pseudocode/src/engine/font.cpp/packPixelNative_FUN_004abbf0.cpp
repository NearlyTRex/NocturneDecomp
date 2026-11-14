// Name: engine_font.cpp_packPixelNative_FUN_004abbf0
// Address: 004abbf0
// Address Range: [[004abbf0, 004abc3c]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_004abbf0(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004abbf0(int red,int green,int blue)

{
  if (DAT_006141c0 == 0x20) {
    return blue << (DAT_01c3582c & 0x1f) |
           red << (DAT_01c35814 & 0x1f) | green << (DAT_01c35820 & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}
