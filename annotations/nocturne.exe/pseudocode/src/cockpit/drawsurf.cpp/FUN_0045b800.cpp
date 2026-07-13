// Name: FUN_0045b800
// Address: 0045b800
// Address Range: [[0045b800, 0045b95f]]
// Convention: unknown
// Signature: void FUN_0045b800(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045b911) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b800(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar1 = ((int)param_3 >> 3) + ((int)param_2 >> 3) * 0x20 + ((int)param_1 >> 3) * 0x400;
  _DAT_01b4d714 = (uint)(byte)(&DAT_01bf7720)[iVar1];
  _DAT_01b4d71c = 0;
  if (DAT_005b7624 < 0x10) {
    if (DAT_005b7624 == 8) {
      _DAT_01b4d710 = (uint)(byte)(&DAT_01bf7720)[iVar1];
      return;
    }
  }
  else {
    if (DAT_005b7624 < 0x11) {
      _DAT_01b4d710 =
           (param_3 / _DAT_01c00640 << (DAT_01c0063c & 0x1f) |
           param_1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f) |
           param_2 / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_005b7624 == 0x20) {
      _DAT_01b4d710 =
           param_3 << (DAT_01c0063c & 0x1f) |
           param_1 << (DAT_01c00624 & 0x1f) | param_2 << (DAT_01c00630 & 0x1f);
      return;
    }
  }
  _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01cc4804 = 0x11d;
  FUN_004c8440("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
