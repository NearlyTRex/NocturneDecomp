// Name: FUN_0055a0b0
// Address: 0055a0b0
// Address Range: [[0055a0b0, 0055a1a9]]
// Convention: unknown
// Signature: void FUN_0055a0b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a0b0(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  float fVar4;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x19f6;
    FUN_004e4330("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = FUN_005806a0();
  iVar2 = iVar1 - _DAT_02cf3420;
  if ((iVar2 < 0) || (0x1cccb < iVar2)) {
    _DAT_02cf3420 = iVar1;
    if (_DAT_02cf28bc == 0) {
      FUN_005526d0();
    }
    fVar4 = 0.0;
    iVar1 = FUN_005586d0(0);
    if (0 < iVar1) {
      fVar4 = (float)iVar2 * _DAT_005d3f0e;
      if (0.0 <= fVar4) {
        if (_DAT_005d3f12 < fVar4) {
          fVar4 = 0.25;
        }
      }
      else {
        fVar4 = 0.0;
      }
    }
    puVar3 = (byte *)0x2ce721c;
    do {
      iVar1 = FUN_00554430(puVar3,fVar4);
      if (iVar1 != 0) {
        FUN_00555410(puVar3);
      }
      puVar3 = puVar3 + 0x11c;
    } while (puVar3 != &DAT_02ceb91c);
  }
  return;
}
