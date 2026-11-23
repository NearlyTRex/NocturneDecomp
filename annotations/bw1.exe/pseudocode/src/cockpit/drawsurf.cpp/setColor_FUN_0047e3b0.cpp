// Name: cockpit_drawsurf.cpp_setColor_FUN_0047e3b0
// Address: 0047e3b0
// Address Range: [[0047e3b0, 0047e5b8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e55e) */

void __cdecl cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(int color_value)

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
         g_ScaledRedComponent << (g_RedBitPosition.bytes[0] & 0x1f) |
         g_ScaledGreenComponent << (g_GreenBitPosition.bytes[0] & 0x1f) |
         g_ScaledBlueComponent << (g_BlueBitPosition.bytes[0] & 0x1f);
    g_DuplicatedPixelColor = g_PackedPixelColor | g_PackedPixelColor << 0x10;
    color_value = 0;
  }
  g_UseRGBConversion = (int)bVar3;
  g_PaletteColorIndex = color_value & 0xff;
  if ((uint)g_INT_0061b4a0 < 0x10) {
    if (g_INT_0061b4a0 == 8) {
      g_CurrentDrawColor = g_PaletteColorIndex;
      return;
    }
  }
  else {
    iVar1 = g_PaletteColorIndex * 3;
    if ((uint)g_INT_0061b4a0 < 0x11) {
      g_CurrentDrawColor =
           ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] / (uint)g_RedScaleFactor <<
            (g_RedBitPosition.bytes[0] & 0x1f) |
            (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] / (uint)g_GreenScaleFactor <<
            (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] / (uint)g_BlueScaleFactor <<
           (g_BlueBitPosition.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_0061b4a0 == 0x20) {
      g_CurrentDrawColor =
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << (g_RedBitPosition.bytes[0] & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 248;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
