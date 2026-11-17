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
           (ushort)(blue / (uint)g_INT_01c4e9f0 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)) |
           (ushort)(red / (uint)g_INT_01c4e9d8 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f)) |
           (ushort)(green / (uint)g_INT_01c4e9e4 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f));
    }
    else if (g_INT_0061b4a0 == 0x20) {
      g_INT_01cc8cd4 =
           blue << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
           red << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
           green << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
    }
    else {
      g_CHAR_PTR_01d1d400 = "..\\engine\\font.cpp";
      g_INT_01d1d404 = 0x4c0;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_INT_01cc8cdc = green;
  g_INT_01cc8ce0 = blue;
  g_INT_01cc8cd8 = red;
  return;
}
