// Name: engine_font.cpp_packPixelNative_FUN_004c4ba0
// Address: 004c4ba0
// Address Range: [[004c4ba0, 004c4bec]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_004c4ba0(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004c4ba0(int red,int green,int blue)

{
  if (DAT_0061b4a0 == 0x20) {
    return blue << (DAT_01c4e9ec & 0x1f) |
           red << (DAT_01c4e9d4 & 0x1f) | green << (DAT_01c4e9e0 & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}
