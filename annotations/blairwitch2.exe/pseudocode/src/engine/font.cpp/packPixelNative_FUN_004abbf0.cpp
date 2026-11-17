// Name: engine_font.cpp_packPixelNative_FUN_004abbf0
// Address: 004abbf0
// Address Range: [[004abbf0, 004abc3c]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_004abbf0(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004abbf0(int red,int green,int blue)

{
  if (g_INT_006141c0 == 0x20) {
    return blue << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
           red << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
           green << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}
