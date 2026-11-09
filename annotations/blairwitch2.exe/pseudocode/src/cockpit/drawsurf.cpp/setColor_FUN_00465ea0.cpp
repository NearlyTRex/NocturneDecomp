// Name: cockpit_drawsurf.cpp_setColor_FUN_00465ea0
// Address: 00465ea0
// Address Range: [[00465ea0, 004660a8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00465ea0(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0046604e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00465ea0(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    _DAT_01ba5c38 = -color_value;
    bVar2 = (byte)_DAT_01ba5c38;
    _DAT_01ba5c3c = (uint)(0xff / (ulonglong)_DAT_01c35818) >> (bVar2 & 0x1f);
    _DAT_01ba5c40 = (uint)(0xff / (ulonglong)_DAT_01c35824) >> (bVar2 & 0x1f);
    _DAT_01ba5c44 = (uint)(0xff / (ulonglong)_DAT_01c35830) >> (bVar2 & 0x1f);
    _DAT_01ba5c48 =
         _DAT_01ba5c3c << (DAT_01c35814 & 0x1f) | _DAT_01ba5c40 << (DAT_01c35820 & 0x1f) |
         _DAT_01ba5c44 << (DAT_01c3582c & 0x1f);
    _DAT_01ba5c4c = _DAT_01ba5c48 | _DAT_01ba5c48 << 0x10;
    color_value = 0;
  }
  _DAT_01ba5c34 = (uint)bVar3;
  _DAT_01ba5c2c = color_value & 0xff;
  if (DAT_006141c0 < 0x10) {
    if (DAT_006141c0 == 8) {
      _DAT_01ba5c28 = _DAT_01ba5c2c;
      return;
    }
  }
  else {
    iVar1 = _DAT_01ba5c2c * 3;
    if (DAT_006141c0 < 0x11) {
      _DAT_01ba5c28 =
           ((byte)(&DAT_01c35838)[iVar1] / _DAT_01c35818 << (DAT_01c35814 & 0x1f) |
            (byte)(&DAT_01c35839)[iVar1] / _DAT_01c35824 << (DAT_01c35820 & 0x1f) |
           (byte)(&DAT_01c3583a)[iVar1] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_006141c0 == 0x20) {
      _DAT_01ba5c28 =
           (uint)(byte)(&DAT_01c3583a)[iVar1] << (DAT_01c3582c & 0x1f) |
           (uint)(byte)(&DAT_01c35839)[iVar1] << (DAT_01c35820 & 0x1f) |
           (uint)(byte)(&DAT_01c35838)[iVar1] << (DAT_01c35814 & 0x1f);
      return;
    }
  }
  _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d046a4 = 0xf6;
  core_main_c_FUN_004e4500("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
