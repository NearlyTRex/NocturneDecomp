// Name: engine_font.cpp_packPixelScaled_FUN_004d1110
// Address: 004d1110
// Address Range: [[004d1110, 004d1164]]
// Convention: __cdecl
// Signature: uint __cdecl engine_font_cpp_packPixelScaled_FUN_004d1110(int red,int green,int blue)

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelScaled_FUN_004d1110(int red,int green,int blue)

{
  return (uint)blue / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f) |
         (uint)green / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f) |
         (uint)red / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f);
}
