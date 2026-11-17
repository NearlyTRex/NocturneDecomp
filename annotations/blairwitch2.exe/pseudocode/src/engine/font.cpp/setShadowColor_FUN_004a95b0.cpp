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
           (ushort)(blue / (uint)g_INT_01c35830 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
           (ushort)(red / (uint)g_INT_01c35818 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) |
           (ushort)(green / (uint)g_INT_01c35824 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f));
    }
    else if (g_INT_006141c0 == 0x20) {
      g_INT_01cb0244 =
           blue << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
           red << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
           green << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
    }
    else {
      g_CHAR_PTR_01d046a0 = "..\\engine\\font.cpp";
      g_INT_01d046a4 = 0x4b9;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_INT_01cb024c = green;
  g_INT_01cb0250 = blue;
  g_INT_01cb0248 = red;
  return;
}
