// Name: FUN_004660b0
// Address: 004660b0
// Address Range: [[004660b0, 0046620f]]
// Convention: unknown
// Signature: void FUN_004660b0(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004661c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004660b0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar1 = ((int)param_3 >> 3) + ((int)param_2 >> 3) * 0x20 + ((int)param_1 >> 3) * 0x400;
  _DAT_01ba5c2c = (uint)(byte)(&DAT_01c2c910)[iVar1];
  _DAT_01ba5c34 = 0;
  if (DAT_006141c0 < 0x10) {
    if (DAT_006141c0 == 8) {
      _DAT_01ba5c28 = (uint)(byte)(&DAT_01c2c910)[iVar1];
      return;
    }
  }
  else {
    if (DAT_006141c0 < 0x11) {
      _DAT_01ba5c28 =
           (param_3 / _DAT_01c35830 << (DAT_01c3582c & 0x1f) |
           param_1 / _DAT_01c35818 << (DAT_01c35814 & 0x1f) |
           param_2 / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_006141c0 == 0x20) {
      _DAT_01ba5c28 =
           param_3 << (DAT_01c3582c & 0x1f) |
           param_1 << (DAT_01c35814 & 0x1f) | param_2 << (DAT_01c35820 & 0x1f);
      return;
    }
  }
  _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d046a4 = 0x11d;
  FUN_004e4500("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
