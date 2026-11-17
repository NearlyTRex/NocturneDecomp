// Name: engine_font.cpp_setShadowColor_FUN_004b11b0
// Address: 004b11b0
// Address Range: [[004b11b0, 004b12d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_setShadowColor_FUN_004b11b0(uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b1297) */

void __cdecl engine_font_cpp_setShadowColor_FUN_004b11b0(uint red,uint green,uint blue)

{
  if (g_INT_005fba20 != 8) {
    if (g_INT_005fba20 == 0x10) {
      g_USHORT_01d1ad62 =
           (ushort)(blue / (uint)g_INT_01c6af90 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) |
           (ushort)(red / (uint)g_INT_01c6af78 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)) |
           (ushort)(green / (uint)g_INT_01c6af84 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f));
    }
    else if (g_INT_005fba20 == 0x20) {
      g_INT_01d1ad64 =
           blue << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
           red << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
           green << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
    }
    else {
      g_CHAR_PTR_01d71de0 = "..\\engine\\font.cpp";
      g_INT_01d71de4 = 0x4c0;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_INT_01d1ad6c = green;
  g_INT_01d1ad70 = blue;
  g_INT_01d1ad68 = red;
  return;
}
