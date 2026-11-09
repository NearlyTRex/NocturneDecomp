// Name: cockpit_drawsurf.cpp_FUN_00467c80
// Address: 00467c80
// Address Range: [[00467c80, 00467ddf]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00467c80(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00467d91) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_00467c80(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar1 = ((int)param_3 >> 3) + ((int)param_2 >> 3) * 0x20 + ((int)param_1 >> 3) * 0x400;
  _DAT_01bdd7c0 = (uint)(byte)(&DAT_01c62070)[iVar1];
  _DAT_01bdd7c8 = 0;
  if (DAT_005fba20 < 0x10) {
    if (DAT_005fba20 == 8) {
      _DAT_01bdd7bc = (uint)(byte)(&DAT_01c62070)[iVar1];
      return;
    }
  }
  else {
    if (DAT_005fba20 < 0x11) {
      _DAT_01bdd7bc =
           (param_3 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f) |
           param_1 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f) |
           param_2 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_005fba20 == 0x20) {
      _DAT_01bdd7bc =
           param_3 << (DAT_01c6af8c & 0x1f) |
           param_1 << (DAT_01c6af74 & 0x1f) | param_2 << (DAT_01c6af80 & 0x1f);
      return;
    }
  }
  _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d71de4 = 0x11e;
  core_main_c_FUN_004e4330("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
