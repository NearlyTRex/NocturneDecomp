// Name: cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
// Address: 0045b800
// Address Range: [[0045b800, 0045b95f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045b911) */

void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(int red,int green,int blue)

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
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      g_INT_01b4d710 = (uint)g_ColorCubeLookup[iVar4];
      return;
    }
  }
  else {
    if ((uint)g_BitsPerPixel < 0x11) {
      g_INT_01b4d710 =
           (uVar2 / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f) |
           uVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f) |
           uVar3 / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      g_INT_01b4d710 =
           uVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
           uVar1 << (g_RedBitPosition.bytes[0] & 0x1f) |
           uVar3 << (g_GreenBitPosition.bytes[0] & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 285;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
