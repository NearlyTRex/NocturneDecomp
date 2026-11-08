// Name: FUN_00554510
// Address: 00554510
// Address Range: [[00554510, 00554609]]
// Convention: unknown
// Signature: void FUN_00554510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554510(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  float fVar4;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x19ec;
    FUN_004e4500("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = FUN_0058e9e0();
  iVar2 = iVar1 - _DAT_02649020;
  if ((iVar2 < 0) || (0x1cccb < iVar2)) {
    _DAT_02649020 = iVar1;
    if (_DAT_026484bc == 0) {
      FUN_0054cb70();
    }
    fVar4 = 0.0;
    iVar1 = FUN_00552b30(0);
    if (0 < iVar1) {
      fVar4 = (float)iVar2 * _DAT_005e941a;
      if (0.0 <= fVar4) {
        if (_DAT_005e941e < fVar4) {
          fVar4 = 0.25;
        }
      }
      else {
        fVar4 = 0.0;
      }
    }
    puVar3 = (byte *)0x263cf1c;
    do {
      iVar1 = FUN_0054e8c0(puVar3,fVar4);
      if (iVar1 != 0) {
        FUN_0054f8a0(puVar3);
      }
      puVar3 = puVar3 + 0x11c;
    } while (puVar3 != &DAT_0264161c);
  }
  return;
}
