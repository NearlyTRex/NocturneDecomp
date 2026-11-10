// Name: cockpit_drawsurf.cpp_FUN_0047e5c0
// Address: 0047e5c0
// Address Range: [[0047e5c0, 0047e71f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_0047e5c0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e6d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_0047e5c0(int red,int green,int blue)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = red & 0xff;
  uVar3 = green & 0xff;
  uVar2 = blue & 0xff;
  iVar4 = ((int)uVar2 >> 3) + ((int)uVar3 >> 3) * 0x20 + ((int)uVar1 >> 3) * 0x400;
  _DAT_01bc11e8 = (uint)(byte)(&DAT_01c45ad0)[iVar4];
  _DAT_01bc11f0 = 0;
  if (DAT_0061b4a0 < 0x10) {
    if (DAT_0061b4a0 == 8) {
      _DAT_01bc11e4 = (uint)(byte)(&DAT_01c45ad0)[iVar4];
      return;
    }
  }
  else {
    if (DAT_0061b4a0 < 0x11) {
      _DAT_01bc11e4 =
           (uVar2 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
           uVar1 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f) |
           uVar3 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01bc11e4 =
           uVar2 << (DAT_01c4e9ec & 0x1f) |
           uVar1 << (DAT_01c4e9d4 & 0x1f) | uVar3 << (DAT_01c4e9e0 & 0x1f);
      return;
    }
  }
  _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d1d404 = 0x11e;
  core_main_c_FUN_005030e0("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
