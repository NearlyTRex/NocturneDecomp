// Name: cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0
// Address: 004660b0
// Address Range: [[004660b0, 0046620f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004661c1) */

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
  g_PaletteColorIndex = (int)g_ColorCubeLookup[iVar4];
  g_UseRGBConversion = 0;
  if ((uint)g_INT_006141c0 < 0x10) {
    if (g_INT_006141c0 == 8) {
      g_CurrentDrawColor = (uint)g_ColorCubeLookup[iVar4];
      return;
    }
  }
  else {
    if ((uint)g_INT_006141c0 < 0x11) {
      g_CurrentDrawColor =
           (uVar2 / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f) |
           uVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f) |
           uVar3 / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_006141c0 == 0x20) {
      g_CurrentDrawColor =
           uVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
           uVar1 << (g_RedBitPosition.bytes[0] & 0x1f) |
           uVar3 << (g_GreenBitPosition.bytes[0] & 0x1f);
      return;
    }
  }
  g_CHAR_PTR_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d046a4 = 0x11d;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
