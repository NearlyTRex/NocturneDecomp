// Name: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
// Address: 00487010
// Address Range: [[00487010, 00487218]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004871be) */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    g_OriginalColorValue = -color_value;
    bVar2 = (byte)g_OriginalColorValue;
    g_ScaledRedComponent = (uint)(0xff / (ulonglong)(uint)g_RedScaleFactor) >> (bVar2 & 0x1f);
    g_ScaledGreenComponent = (uint)(0xff / (ulonglong)(uint)g_GreenScaleFactor) >> (bVar2 & 0x1f);
    g_ScaledBlueComponent = (uint)(0xff / (ulonglong)(uint)g_BlueScaleFactor) >> (bVar2 & 0x1f);
    g_PackedPixelColor =
         g_ScaledRedComponent << ((byte)g_RedBitPosition & 0x1f) |
         g_ScaledGreenComponent << ((byte)g_GreenBitPosition & 0x1f) |
         g_ScaledBlueComponent << ((byte)g_BlueBitPosition & 0x1f);
    g_DuplicatedPixelColor = g_PackedPixelColor | g_PackedPixelColor << 0x10;
    color_value = 0;
  }
  g_UseRGBConversion = (int)bVar3;
  g_PaletteColorIndex = color_value & 0xff;
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      g_CurrentDrawColor = g_PaletteColorIndex;
      return;
    }
  }
  else {
    iVar1 = g_PaletteColorIndex * 3;
    if ((uint)g_BitsPerPixel < 0x11) {
      g_CurrentDrawColor =
           ((uint)(byte)g_SourcePaletteData[iVar1] / (uint)g_RedScaleFactor <<
            ((byte)g_RedBitPosition & 0x1f) |
            (uint)(byte)g_SourcePaletteData[iVar1 + 1] / (uint)g_GreenScaleFactor <<
            ((byte)g_GreenBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar1 + 2] / (uint)g_BlueScaleFactor <<
           ((byte)g_BlueBitPosition & 0x1f)) & 0xffff;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      g_CurrentDrawColor =
           (uint)(byte)g_SourcePaletteData[iVar1 + 2] << ((byte)g_BlueBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar1 + 1] << ((byte)g_GreenBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar1] << ((byte)g_RedBitPosition & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 0xf6;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
