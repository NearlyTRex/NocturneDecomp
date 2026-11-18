// Name: cockpit_drawsurf.cpp_setColor_FUN_00467a70
// Address: 00467a70
// Address Range: [[00467a70, 00467c78]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00467a70(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00467c1e) */

void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00467a70(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    g_OriginalColorValue = -color_value;
    bVar2 = (byte)g_OriginalColorValue;
    g_ScaledRedComponent = (uint)(0xff / (ulonglong)(uint)g_INT_01c6af78) >> (bVar2 & 0x1f);
    g_ScaledGreenComponent = (uint)(0xff / (ulonglong)(uint)g_INT_01c6af84) >> (bVar2 & 0x1f);
    g_ScaledBlueComponent = (uint)(0xff / (ulonglong)(uint)g_INT_01c6af90) >> (bVar2 & 0x1f);
    g_PackedPixelColor =
         g_ScaledRedComponent << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
         g_ScaledGreenComponent << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
         g_ScaledBlueComponent << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
    g_DuplicatedPixelColor = g_PackedPixelColor | g_PackedPixelColor << 0x10;
    color_value = 0;
  }
  g_UseRGBConversion = (int)bVar3;
  g_PaletteColorIndex = color_value & 0xff;
  if ((uint)g_INT_005fba20 < 0x10) {
    if (g_INT_005fba20 == 8) {
      g_CurrentDrawColor = g_PaletteColorIndex;
      return;
    }
  }
  else {
    iVar1 = g_PaletteColorIndex * 3;
    if ((uint)g_INT_005fba20 < 0x11) {
      g_CurrentDrawColor =
           ((uint)g_UCHAR_ARRAY_01c6af98[iVar1] / (uint)g_INT_01c6af78 <<
            (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
            (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] / (uint)g_INT_01c6af84 <<
            (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] / (uint)g_INT_01c6af90 <<
           (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_005fba20 == 0x20) {
      g_CurrentDrawColor =
           (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c6af98[iVar1] << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f);
      return;
    }
  }
  g_CHAR_PTR_01d71de0 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d71de4 = 0xf8;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
