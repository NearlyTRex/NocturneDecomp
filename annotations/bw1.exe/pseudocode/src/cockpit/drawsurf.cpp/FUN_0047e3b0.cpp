// Name: FUN_0047e3b0
// Address: 0047e3b0
// Address Range: [[0047e3b0, 0047e5b8]]
// Convention: unknown
// Signature: void FUN_0047e3b0(uint param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e55e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e3b0(uint param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = (int)param_1 < 0;
  if (bVar3) {
    _DAT_01bc11f4 = -param_1;
    bVar2 = (byte)_DAT_01bc11f4;
    _DAT_01bc11f8 = (uint)(0xff / (ulonglong)_DAT_01c4e9d8) >> (bVar2 & 0x1f);
    _DAT_01bc11fc = (uint)(0xff / (ulonglong)_DAT_01c4e9e4) >> (bVar2 & 0x1f);
    _DAT_01bc1200 = (uint)(0xff / (ulonglong)_DAT_01c4e9f0) >> (bVar2 & 0x1f);
    _DAT_01bc1204 =
         _DAT_01bc11f8 << (DAT_01c4e9d4 & 0x1f) | _DAT_01bc11fc << (DAT_01c4e9e0 & 0x1f) |
         _DAT_01bc1200 << (DAT_01c4e9ec & 0x1f);
    _DAT_01bc1208 = _DAT_01bc1204 | _DAT_01bc1204 << 0x10;
    param_1 = 0;
  }
  _DAT_01bc11f0 = (uint)bVar3;
  _DAT_01bc11e8 = param_1 & 0xff;
  if (DAT_0061b4a0 < 0x10) {
    if (DAT_0061b4a0 == 8) {
      _DAT_01bc11e4 = _DAT_01bc11e8;
      return;
    }
  }
  else {
    iVar1 = _DAT_01bc11e8 * 3;
    if (DAT_0061b4a0 < 0x11) {
      _DAT_01bc11e4 =
           ((byte)(&DAT_01c4e9f8)[iVar1] / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f) |
            (byte)(&DAT_01c4e9f9)[iVar1] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f) |
           (byte)(&DAT_01c4e9fa)[iVar1] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01bc11e4 =
           (uint)(byte)(&DAT_01c4e9fa)[iVar1] << (DAT_01c4e9ec & 0x1f) |
           (uint)(byte)(&DAT_01c4e9f9)[iVar1] << (DAT_01c4e9e0 & 0x1f) |
           (uint)(byte)(&DAT_01c4e9f8)[iVar1] << (DAT_01c4e9d4 & 0x1f);
      return;
    }
  }
  _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d1d404 = 0xf8;
  FUN_005030e0("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
