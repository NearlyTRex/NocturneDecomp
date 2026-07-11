// Name: FUN_0045b5f0
// Address: 0045b5f0
// Address Range: [[0045b5f0, 0045b7f8]]
// Convention: unknown
// Signature: void FUN_0045b5f0(uint param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045b79e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b5f0(uint param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = (int)param_1 < 0;
  if (bVar3) {
    _DAT_01b4d720 = -param_1;
    bVar2 = (byte)_DAT_01b4d720;
    _DAT_01b4d724 = (uint)(0xff / (ulonglong)_DAT_01c00628) >> (bVar2 & 0x1f);
    _DAT_01b4d728 = (uint)(0xff / (ulonglong)_DAT_01c00634) >> (bVar2 & 0x1f);
    _DAT_01b4d72c = (uint)(0xff / (ulonglong)_DAT_01c00640) >> (bVar2 & 0x1f);
    _DAT_01b4d730 =
         _DAT_01b4d724 << (DAT_01c00624 & 0x1f) | _DAT_01b4d728 << (DAT_01c00630 & 0x1f) |
         _DAT_01b4d72c << (DAT_01c0063c & 0x1f);
    _DAT_01b4d734 = _DAT_01b4d730 | _DAT_01b4d730 << 0x10;
    param_1 = 0;
  }
  _DAT_01b4d71c = (uint)bVar3;
  _DAT_01b4d714 = param_1 & 0xff;
  if (DAT_005b7624 < 0x10) {
    if (DAT_005b7624 == 8) {
      _DAT_01b4d710 = _DAT_01b4d714;
      return;
    }
  }
  else {
    iVar1 = _DAT_01b4d714 * 3;
    if (DAT_005b7624 < 0x11) {
      _DAT_01b4d710 =
           ((byte)(&DAT_01c00648)[iVar1] / _DAT_01c00628 << (DAT_01c00624 & 0x1f) |
            *(byte *)(iVar1 + 0x1c00649) / _DAT_01c00634 << (DAT_01c00630 & 0x1f) |
           *(byte *)(iVar1 + 0x1c0064a) / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) & 0xffff;
      return;
    }
    if (DAT_005b7624 == 0x20) {
      _DAT_01b4d710 =
           (uint)*(byte *)(iVar1 + 0x1c0064a) << (DAT_01c0063c & 0x1f) |
           (uint)*(byte *)(iVar1 + 0x1c00649) << (DAT_01c00630 & 0x1f) |
           (uint)(byte)(&DAT_01c00648)[iVar1] << (DAT_01c00624 & 0x1f);
      return;
    }
  }
  _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01cc4804 = 0xf6;
  FUN_004c8440("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}
