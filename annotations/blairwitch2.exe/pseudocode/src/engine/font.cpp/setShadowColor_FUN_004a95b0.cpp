// Name: engine_font.cpp_setShadowColor_FUN_004a95b0
// Address: 004a95b0
// Address Range: [[004a95b0, 004a96d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_setShadowColor_FUN_004a95b0(uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a9697) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_setShadowColor_FUN_004a95b0(uint red,uint green,uint blue)

{
  if (DAT_006141c0 != 8) {
    if (DAT_006141c0 == 0x10) {
      _DAT_01cb0242 =
           (ushort)(blue / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
           (ushort)(red / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
           (ushort)(green / _DAT_01c35824 << (DAT_01c35820 & 0x1f));
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01cb0244 =
           blue << (DAT_01c3582c & 0x1f) |
           red << (DAT_01c35814 & 0x1f) | green << (DAT_01c35820 & 0x1f);
    }
    else {
      _DAT_01d046a0 = "..\\engine\\font.cpp";
      _DAT_01d046a4 = 0x4b9;
      core_main_c_FUN_004e4500("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  _DAT_01cb024c = green;
  _DAT_01cb0250 = blue;
  _DAT_01cb0248 = red;
  return;
}
