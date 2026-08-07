// Name: engine_font.cpp_setShadowColor_FUN_00490ff0
// Address: 00490ff0
// Address Range: [[00490ff0, 00491132]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_setShadowColor_FUN_00490ff0(uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004910f9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_setShadowColor_FUN_00490ff0(uint red,uint green,uint blue)

{
  if (g_BitsPerPixel == 8) {
    DAT_01c70f5c = g_ColorCubeLookup
                   [((int)green >> 3) * 0x20 + ((int)red >> 3) * 0x400 + ((int)blue >> 3)];
  }
  else if (g_BitsPerPixel == 0x10) {
    _DAT_01c70f5e =
         (ushort)(red / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)) |
         (ushort)(green / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)(blue / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f));
  }
  else if (g_BitsPerPixel == 0x20) {
    _DAT_01c70f60 =
         blue << (g_BlueBitPosition.bytes[0] & 0x1f) |
         green << (g_GreenBitPosition.bytes[0] & 0x1f) | red << (g_RedBitPosition.bytes[0] & 0x1f);
  }
  else {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 921;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel in CBitFont::setTrueColor");
  }
  _DAT_01c70f68 = green;
  _DAT_01c70f6c = blue;
  _DAT_01c70f64 = red;
  return;
}
