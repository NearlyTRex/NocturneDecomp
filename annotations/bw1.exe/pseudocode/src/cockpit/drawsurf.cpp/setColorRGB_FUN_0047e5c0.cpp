// Name: cockpit_drawsurf.cpp_setColorRGB_FUN_0047e5c0
// Address: 0047e5c0
// Address Range: [[0047e5c0, 0047e71f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0047e5c0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e6d1) */

void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0047e5c0(int red,int green,int blue)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = red & 0xff;
  uVar3 = green & 0xff;
  uVar2 = blue & 0xff;
  iVar4 = ((int)uVar2 >> 3) + ((int)uVar3 >> 3) * 0x20 + ((int)uVar1 >> 3) * 0x400;
  g_INT_01bc11e8 = (int)g_UCHAR_ARRAY_01c45ad0[iVar4];
  g_INT_01bc11f0 = 0;
  if ((uint)g_INT_0061b4a0 < 0x10) {
    if (g_INT_0061b4a0 == 8) {
      g_INT_01bc11e4 = (uint)g_UCHAR_ARRAY_01c45ad0[iVar4];
      return;
    }
  }
  else {
    if ((uint)g_INT_0061b4a0 < 0x11) {
      g_INT_01bc11e4 =
           (uVar2 / (uint)g_INT_01c4e9f0 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
           uVar1 / (uint)g_INT_01c4e9d8 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
           uVar3 / (uint)g_INT_01c4e9e4 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_0061b4a0 == 0x20) {
      g_INT_01bc11e4 =
           uVar2 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
           uVar1 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
           uVar3 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
      return;
    }
  }
  g_CHAR_PTR_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d1d404 = 0x11e;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
