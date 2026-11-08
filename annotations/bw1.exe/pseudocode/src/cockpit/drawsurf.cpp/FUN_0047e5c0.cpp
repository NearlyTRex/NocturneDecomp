// Name: FUN_0047e5c0
// Address: 0047e5c0
// Address Range: [[0047e5c0, 0047e71f]]
// Convention: unknown
// Signature: void FUN_0047e5c0(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e6d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e5c0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar1 = ((int)param_3 >> 3) + ((int)param_2 >> 3) * 0x20 + ((int)param_1 >> 3) * 0x400;
  _DAT_01bc11e8 = (uint)(byte)(&DAT_01c45ad0)[iVar1];
  _DAT_01bc11f0 = 0;
  if (DAT_0061b4a0 < 0x10) {
    if (DAT_0061b4a0 == 8) {
      _DAT_01bc11e4 = (uint)(byte)(&DAT_01c45ad0)[iVar1];
      return;
    }
  }
  else {
    if (DAT_0061b4a0 < 0x11) {
      _DAT_01bc11e4 =
           (param_3 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
           param_1 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f) |
           param_2 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01bc11e4 =
           param_3 << (DAT_01c4e9ec & 0x1f) |
           param_1 << (DAT_01c4e9d4 & 0x1f) | param_2 << (DAT_01c4e9e0 & 0x1f);
      return;
    }
  }
  _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d1d404 = 0x11e;
  FUN_005030e0("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
