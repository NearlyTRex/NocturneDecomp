// Name: cockpit_drawsurf.cpp_setColor_FUN_00467a70
// Address: 00467a70
// Address Range: [[00467a70, 00467c78]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00467a70(int color_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00467c1e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00467a70(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    _DAT_01bdd7cc = -color_value;
    bVar2 = (byte)_DAT_01bdd7cc;
    _DAT_01bdd7d0 = (uint)(0xff / (ulonglong)_DAT_01c6af78) >> (bVar2 & 0x1f);
    _DAT_01bdd7d4 = (uint)(0xff / (ulonglong)_DAT_01c6af84) >> (bVar2 & 0x1f);
    _DAT_01bdd7d8 = (uint)(0xff / (ulonglong)_DAT_01c6af90) >> (bVar2 & 0x1f);
    _DAT_01bdd7dc =
         _DAT_01bdd7d0 << (DAT_01c6af74 & 0x1f) | _DAT_01bdd7d4 << (DAT_01c6af80 & 0x1f) |
         _DAT_01bdd7d8 << (DAT_01c6af8c & 0x1f);
    _DAT_01bdd7e0 = _DAT_01bdd7dc | _DAT_01bdd7dc << 0x10;
    color_value = 0;
  }
  _DAT_01bdd7c8 = (uint)bVar3;
  _DAT_01bdd7c0 = color_value & 0xff;
  if (DAT_005fba20 < 0x10) {
    if (DAT_005fba20 == 8) {
      _DAT_01bdd7bc = _DAT_01bdd7c0;
      return;
    }
  }
  else {
    iVar1 = _DAT_01bdd7c0 * 3;
    if (DAT_005fba20 < 0x11) {
      _DAT_01bdd7bc =
           ((byte)(&DAT_01c6af98)[iVar1] / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f) |
            (byte)(&DAT_01c6af99)[iVar1] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f) |
           (byte)(&DAT_01c6af9a)[iVar1] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_005fba20 == 0x20) {
      _DAT_01bdd7bc =
           (uint)(byte)(&DAT_01c6af9a)[iVar1] << (DAT_01c6af8c & 0x1f) |
           (uint)(byte)(&DAT_01c6af99)[iVar1] << (DAT_01c6af80 & 0x1f) |
           (uint)(byte)(&DAT_01c6af98)[iVar1] << (DAT_01c6af74 & 0x1f);
      return;
    }
  }
  _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d71de4 = 0xf8;
  core_main_c_FUN_004e4330("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
