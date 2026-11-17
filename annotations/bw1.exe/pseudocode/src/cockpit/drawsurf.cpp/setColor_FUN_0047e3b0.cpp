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
    g_INT_01bc11f4 = -color_value;
    bVar2 = (byte)g_INT_01bc11f4;
    g_INT_01bc11f8 = (uint)(0xff / (ulonglong)(uint)g_INT_01c4e9d8) >> (bVar2 & 0x1f);
    g_INT_01bc11fc = (uint)(0xff / (ulonglong)(uint)g_INT_01c4e9e4) >> (bVar2 & 0x1f);
    g_INT_01bc1200 = (uint)(0xff / (ulonglong)(uint)g_INT_01c4e9f0) >> (bVar2 & 0x1f);
    g_INT_01bc1204 =
         g_INT_01bc11f8 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
         g_INT_01bc11fc << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f) |
         g_INT_01bc1200 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f);
    g_INT_01bc1208 = g_INT_01bc1204 | g_INT_01bc1204 << 0x10;
    color_value = 0;
  }
  g_INT_01bc11f0 = (int)bVar3;
  g_INT_01bc11e8 = color_value & 0xff;
  if ((uint)g_INT_0061b4a0 < 0x10) {
    if (g_INT_0061b4a0 == 8) {
      g_INT_01bc11e4 = g_INT_01bc11e8;
      return;
    }
  }
  else {
    iVar1 = g_INT_01bc11e8 * 3;
    if ((uint)g_INT_0061b4a0 < 0x11) {
      g_INT_01bc11e4 =
           ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] / (uint)g_INT_01c4e9d8 <<
            (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
            (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] / (uint)g_INT_01c4e9e4 <<
            (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] / (uint)g_INT_01c4e9f0 <<
           (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_0061b4a0 == 0x20) {
      g_INT_01bc11e4 =
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f);
      return;
    }
  }
  g_CHAR_PTR_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d1d404 = 0xf8;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
