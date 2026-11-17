// Name: cockpit_drawsurf.cpp_setColorRGB_FUN_00467c80
// Address: 00467c80
// Address Range: [[00467c80, 00467ddf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_00467c80(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00467d91) */

void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_00467c80(int red,int green,int blue)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = red & 0xff;
  uVar3 = green & 0xff;
  uVar2 = blue & 0xff;
  iVar4 = ((int)uVar2 >> 3) + ((int)uVar3 >> 3) * 0x20 + ((int)uVar1 >> 3) * 0x400;
  g_INT_01bdd7c0 = (int)g_UCHAR_ARRAY_01c62070[iVar4];
  g_INT_01bdd7c8 = 0;
  if ((uint)g_INT_005fba20 < 0x10) {
    if (g_INT_005fba20 == 8) {
      g_INT_01bdd7bc = (uint)g_UCHAR_ARRAY_01c62070[iVar4];
      return;
    }
  }
  else {
    if ((uint)g_INT_005fba20 < 0x11) {
      g_INT_01bdd7bc =
           (uVar2 / (uint)g_INT_01c6af90 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
           uVar1 / (uint)g_INT_01c6af78 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
           uVar3 / (uint)g_INT_01c6af84 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_005fba20 == 0x20) {
      g_INT_01bdd7bc =
           uVar2 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
           uVar1 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
           uVar3 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
      return;
    }
  }
  g_CHAR_PTR_01d71de0 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d71de4 = 0x11e;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
