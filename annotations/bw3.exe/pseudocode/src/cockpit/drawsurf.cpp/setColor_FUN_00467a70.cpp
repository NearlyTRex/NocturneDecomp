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
    g_INT_01bdd7cc = -color_value;
    bVar2 = (byte)g_INT_01bdd7cc;
    g_INT_01bdd7d0 = (uint)(0xff / (ulonglong)(uint)g_INT_01c6af78) >> (bVar2 & 0x1f);
    g_INT_01bdd7d4 = (uint)(0xff / (ulonglong)(uint)g_INT_01c6af84) >> (bVar2 & 0x1f);
    g_INT_01bdd7d8 = (uint)(0xff / (ulonglong)(uint)g_INT_01c6af90) >> (bVar2 & 0x1f);
    g_INT_01bdd7dc =
         g_INT_01bdd7d0 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
         g_INT_01bdd7d4 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
         g_INT_01bdd7d8 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
    g_INT_01bdd7e0 = g_INT_01bdd7dc | g_INT_01bdd7dc << 0x10;
    color_value = 0;
  }
  g_INT_01bdd7c8 = (int)bVar3;
  g_INT_01bdd7c0 = color_value & 0xff;
  if ((uint)g_INT_005fba20 < 0x10) {
    if (g_INT_005fba20 == 8) {
      g_INT_01bdd7bc = g_INT_01bdd7c0;
      return;
    }
  }
  else {
    iVar1 = g_INT_01bdd7c0 * 3;
    if ((uint)g_INT_005fba20 < 0x11) {
      g_INT_01bdd7bc =
           ((uint)g_UCHAR_ARRAY_01c6af98[iVar1] / (uint)g_INT_01c6af78 <<
            (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
            (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] / (uint)g_INT_01c6af84 <<
            (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] / (uint)g_INT_01c6af90 <<
           (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_005fba20 == 0x20) {
      g_INT_01bdd7bc =
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
