// Name: engine_font.cpp_setShadowColor_FUN_004a95b0
// Address: 004a95b0
// Address Range: [[004a95b0, 004a96d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_setShadowColor_FUN_004a95b0(uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a9697) */

void __cdecl engine_font_cpp_setShadowColor_FUN_004a95b0(uint red,uint green,uint blue)

{
  if (g_INT_006141c0 != 8) {
    if (g_INT_006141c0 == 0x10) {
      g_USHORT_01cb0242 =
           (ushort)(blue / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)) |
           (ushort)(red / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)(green / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f));
    }
    else if (g_INT_006141c0 == 0x20) {
      g_ShadowColor32 =
           blue << (g_BlueBitPosition.bytes[0] & 0x1f) |
           red << (g_RedBitPosition.bytes[0] & 0x1f) | green << (g_GreenBitPosition.bytes[0] & 0x1f)
      ;
    }
    else {
      g_CurrentFilename = "..\\engine\\font.cpp";
      g_CurrentLineNumber = 1209;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_ShadowColorGreen = green;
  g_ShadowColorBlue = blue;
  g_ShadowColorRed = red;
  return;
}
