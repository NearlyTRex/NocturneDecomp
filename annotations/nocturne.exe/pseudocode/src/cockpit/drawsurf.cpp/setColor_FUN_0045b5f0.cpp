// Name: cockpit_drawsurf.cpp_setColor_FUN_0045b5f0
// Address: 0045b5f0
// Address Range: [[0045b5f0, 0045b7f8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045b79e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    _DAT_01b4d720 = -color_value;
    bVar2 = (byte)_DAT_01b4d720;
    _DAT_01b4d724 = (uint)(0xff / (ulonglong)(uint)g_RedScaleFactor) >> (bVar2 & 0x1f);
    _DAT_01b4d728 = (uint)(0xff / (ulonglong)(uint)g_GreenScaleFactor) >> (bVar2 & 0x1f);
    _DAT_01b4d72c = (uint)(0xff / (ulonglong)(uint)g_BlueScaleFactor) >> (bVar2 & 0x1f);
    _DAT_01b4d730 =
         _DAT_01b4d724 << (g_RedBitPosition.bytes[0] & 0x1f) |
         _DAT_01b4d728 << (g_GreenBitPosition.bytes[0] & 0x1f) |
         _DAT_01b4d72c << (g_BlueBitPosition.bytes[0] & 0x1f);
    _DAT_01b4d734 = _DAT_01b4d730 | _DAT_01b4d730 << 0x10;
    color_value = 0;
  }
  _DAT_01b4d71c = (uint)bVar3;
  _DAT_01b4d714 = color_value & 0xff;
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      _DAT_01b4d710 = _DAT_01b4d714;
      return;
    }
  }
  else {
    iVar1 = _DAT_01b4d714 * 3;
    if ((uint)g_BitsPerPixel < 0x11) {
      _DAT_01b4d710 =
           ((uint)g_SourcePaletteData[iVar1] / (uint)g_RedScaleFactor <<
            (g_RedBitPosition.bytes[0] & 0x1f) |
            (uint)g_SourcePaletteData[iVar1 + 1] / (uint)g_GreenScaleFactor <<
            (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)g_SourcePaletteData[iVar1 + 2] / (uint)g_BlueScaleFactor <<
           (g_BlueBitPosition.bytes[0] & 0x1f)) & 0xffff;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      _DAT_01b4d710 =
           (uint)g_SourcePaletteData[iVar1 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f) |
           (uint)g_SourcePaletteData[iVar1 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)g_SourcePaletteData[iVar1] << (g_RedBitPosition.bytes[0] & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 246;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
