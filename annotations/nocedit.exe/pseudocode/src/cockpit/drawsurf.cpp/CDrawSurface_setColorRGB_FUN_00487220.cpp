// Name: cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
// Address: 00487220
// Address Range: [[00487220, 0048737f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00487331) */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(int red,int green,int blue)

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
      g_CurrentDrawColor = (uint)g_ColorCubeLookup[iVar4];
      return;
    }
  }
  else {
    if ((uint)g_BitsPerPixel < 0x11) {
      g_CurrentDrawColor =
           (uVar2 / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f) |
           uVar1 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f) |
           uVar3 / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f)) & 0xffff;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      g_CurrentDrawColor =
           uVar2 << ((byte)g_BlueBitPosition & 0x1f) |
           uVar1 << ((byte)g_RedBitPosition & 0x1f) | uVar3 << ((byte)g_GreenBitPosition & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 0x11d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
