// Name: cockpit_drawsurf.cpp_setColor_FUN_00465ea0
// Address: 00465ea0
// Address Range: [[00465ea0, 004660a8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00465ea0(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0046604e) */

void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00465ea0(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    g_INT_01ba5c38 = -color_value;
    bVar2 = (byte)g_INT_01ba5c38;
    g_INT_01ba5c3c = (uint)(0xff / (ulonglong)(uint)g_INT_01c35818) >> (bVar2 & 0x1f);
    g_INT_01ba5c40 = (uint)(0xff / (ulonglong)(uint)g_INT_01c35824) >> (bVar2 & 0x1f);
    g_INT_01ba5c44 = (uint)(0xff / (ulonglong)(uint)g_INT_01c35830) >> (bVar2 & 0x1f);
    g_INT_01ba5c48 =
         g_INT_01ba5c3c << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
         g_INT_01ba5c40 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
         g_INT_01ba5c44 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
    g_INT_01ba5c4c = g_INT_01ba5c48 | g_INT_01ba5c48 << 0x10;
    color_value = 0;
  }
  g_INT_01ba5c34 = (int)bVar3;
  g_INT_01ba5c2c = color_value & 0xff;
  if ((uint)g_INT_006141c0 < 0x10) {
    if (g_INT_006141c0 == 8) {
      g_INT_01ba5c28 = g_INT_01ba5c2c;
      return;
    }
  }
  else {
    iVar1 = g_INT_01ba5c2c * 3;
    if ((uint)g_INT_006141c0 < 0x11) {
      g_INT_01ba5c28 =
           ((uint)g_UCHAR_ARRAY_01c35838[iVar1] / (uint)g_INT_01c35818 <<
            (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
            (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] / (uint)g_INT_01c35824 <<
            (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] / (uint)g_INT_01c35830 <<
           (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_INT_006141c0 == 0x20) {
      g_INT_01ba5c28 =
           (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c35838[iVar1] << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
      return;
    }
  }
  g_CHAR_PTR_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d046a4 = 0xf6;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
