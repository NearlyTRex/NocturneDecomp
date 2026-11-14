// Name: cockpit_drawsurf.cpp_FUN_00467c80
// Address: 00467c80
// Address Range: [[00467c80, 00467ddf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_00467c80(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00467d91) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_00467c80(int red,int green,int blue)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = red & 0xff;
  uVar3 = green & 0xff;
  uVar2 = blue & 0xff;
  iVar4 = ((int)uVar2 >> 3) + ((int)uVar3 >> 3) * 0x20 + ((int)uVar1 >> 3) * 0x400;
  _DAT_01bdd7c0 = (uint)(byte)(&DAT_01c62070)[iVar4];
  _DAT_01bdd7c8 = 0;
  if (DAT_005fba20 < 0x10) {
    if (DAT_005fba20 == 8) {
      _DAT_01bdd7bc = (uint)(byte)(&DAT_01c62070)[iVar4];
      return;
    }
  }
  else {
    if (DAT_005fba20 < 0x11) {
      _DAT_01bdd7bc =
           (uVar2 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f) |
           uVar1 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f) |
           uVar3 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_005fba20 == 0x20) {
      _DAT_01bdd7bc =
           uVar2 << (DAT_01c6af8c & 0x1f) |
           uVar1 << (DAT_01c6af74 & 0x1f) | uVar3 << (DAT_01c6af80 & 0x1f);
      return;
    }
  }
  _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d71de4 = 0x11e;
  core_main_c_FUN_004e4330("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
