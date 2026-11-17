// Name: engine_font.cpp_packPixelNative_FUN_004c4ba0
// Address: 004c4ba0
// Address Range: [[004c4ba0, 004c4bec]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelNative_FUN_004c4ba0(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004c4ba0(int red,int green,int blue)

{
  if (g_INT_0061b4a0 == 0x20) {
    return blue << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
           red << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
           green << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}
