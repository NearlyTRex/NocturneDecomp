// Name: cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0
// Address: 004660b0
// Address Range: [[004660b0, 0046620f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004661c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(int red,int green,int blue)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = red & 0xff;
  uVar3 = green & 0xff;
  uVar2 = blue & 0xff;
  iVar4 = ((int)uVar2 >> 3) + ((int)uVar3 >> 3) * 0x20 + ((int)uVar1 >> 3) * 0x400;
  _DAT_01ba5c2c = (uint)(byte)(&DAT_01c2c910)[iVar4];
  _DAT_01ba5c34 = 0;
  if (DAT_006141c0 < 0x10) {
    if (DAT_006141c0 == 8) {
      _DAT_01ba5c28 = (uint)(byte)(&DAT_01c2c910)[iVar4];
      return;
    }
  }
  else {
    if (DAT_006141c0 < 0x11) {
      _DAT_01ba5c28 =
           (uVar2 / _DAT_01c35830 << (DAT_01c3582c & 0x1f) |
           uVar1 / _DAT_01c35818 << (DAT_01c35814 & 0x1f) |
           uVar3 / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_006141c0 == 0x20) {
      _DAT_01ba5c28 =
           uVar2 << (DAT_01c3582c & 0x1f) |
           uVar1 << (DAT_01c35814 & 0x1f) | uVar3 << (DAT_01c35820 & 0x1f);
      return;
    }
  }
  _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d046a4 = 0x11d;
  core_main_c_FUN_004e4500("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
