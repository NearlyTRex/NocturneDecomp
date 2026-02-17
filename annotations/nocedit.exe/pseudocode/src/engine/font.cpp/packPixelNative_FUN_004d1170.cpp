// Name: engine_font.cpp_packPixelNative_FUN_004d1170
// Address: 004d1170
// Address Range: [[004d1170, 004d11bc]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_004d1170(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004d1170(int red,int green,int blue)

{
  if (g_BitsPerPixel == 0x20) {
    return blue << (g_BlueBitPosition.bytes[0] & 0x1f) |
           red << (g_RedBitPosition.bytes[0] & 0x1f) | green << (g_GreenBitPosition.bytes[0] & 0x1f)
    ;
  }
  return red << 0x10 | green << 8 | blue;
}
