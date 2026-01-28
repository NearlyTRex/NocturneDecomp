// Name: engine_font.cpp_setShadowColor_FUN_004ce0f0
// Address: 004ce0f0
// Address Range: [[004ce0f0, 004ce210]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_setShadowColor_FUN_004ce0f0(uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ce1d7) */

void __cdecl engine_font_cpp_setShadowColor_FUN_004ce0f0(uint red,uint green,uint blue)

{
  if (g_BitsPerPixel != 8) {
    if (g_BitsPerPixel == 0x10) {
      g_ShadowColor16 =
           (ushort)(blue / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f)) |
           (ushort)(red / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
           (ushort)(green / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f));
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ShadowColor32 =
           blue << ((byte)g_BlueBitPosition & 0x1f) |
           red << ((byte)g_RedBitPosition & 0x1f) | green << ((byte)g_GreenBitPosition & 0x1f);
    }
    else {
      g_CurrentFilename = "..\\engine\\font.cpp";
      g_CurrentLineNumber = 0x398;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_ShadowColorGreen = green;
  g_ShadowColorBlue = blue;
  g_ShadowColorRed = red;
  return;
}
