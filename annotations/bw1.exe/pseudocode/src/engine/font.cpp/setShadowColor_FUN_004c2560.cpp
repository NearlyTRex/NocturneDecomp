// Name: engine_font.cpp_setShadowColor_FUN_004c2560
// Address: 004c2560
// Address Range: [[004c2560, 004c2680]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_setShadowColor_FUN_004c2560(uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c2647) */

void __cdecl engine_font_cpp_setShadowColor_FUN_004c2560(uint red,uint green,uint blue)

{
  if (g_INT_0061b4a0 != 8) {
    if (g_INT_0061b4a0 == 0x10) {
      g_USHORT_01cc8cd2 =
           (ushort)(blue / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)) |
           (ushort)(red / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)(green / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f));
    }
    else if (g_INT_0061b4a0 == 0x20) {
      g_ShadowColor32 =
           blue << (g_BlueBitPosition.bytes[0] & 0x1f) |
           red << (g_RedBitPosition.bytes[0] & 0x1f) | green << (g_GreenBitPosition.bytes[0] & 0x1f)
      ;
    }
    else {
      g_CHAR_PTR_01d1d400 = "..\\engine\\font.cpp";
      g_INT_01d1d404 = 0x4c0;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_ShadowColorGreen = green;
  g_ShadowColorBlue = blue;
  g_ShadowColorRed = red;
  return;
}
