// Name: FUN_00576f40
// Address: 00576f40
// Address Range: [[00576f40, 00577039]]
// Convention: unknown
// Signature: void FUN_00576f40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576f40(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  float fVar4;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x19e3;
    FUN_005030e0("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = FUN_005b2420();
  iVar2 = iVar1 - _DAT_02c807f0;
  if ((iVar2 < 0) || (0x1cccb < iVar2)) {
    _DAT_02c807f0 = iVar1;
    if (_DAT_02c7fc8c == 0) {
      FUN_0056f1e0();
    }
    fVar4 = 0.0;
    iVar1 = FUN_00575560(0);
    if (0 < iVar1) {
      fVar4 = (float)iVar2 * _DAT_005f4614;
      if (0.0 <= fVar4) {
        if (_DAT_005f4618 < fVar4) {
          fVar4 = 0.25;
        }
      }
      else {
        fVar4 = 0.0;
      }
    }
    puVar3 = (byte *)0x2c745ec;
    do {
      iVar1 = FUN_00570f30(puVar3,fVar4);
      if (iVar1 != 0) {
        FUN_00571f10(puVar3);
      }
      puVar3 = puVar3 + 0x11c;
    } while (puVar3 != &DAT_02c78cec);
  }
  return;
}
