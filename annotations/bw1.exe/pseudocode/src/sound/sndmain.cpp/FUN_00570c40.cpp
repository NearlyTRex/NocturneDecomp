// Name: FUN_00570c40
// Address: 00570c40
// Address Range: [[00570c40, 00570d49]]
// Convention: unknown
// Signature: void FUN_00570c40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570c40(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  float10 fVar6;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xa69;
    FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_006232ec;
  if (DAT_006232ec < 2) {
    *(uint *)(param_1 + 0xb0) = 0;
  }
  else if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    fVar1 = (1.0 / _DAT_00605af8) * DAT_00623304;
    fVar2 = (float)DAT_006232f0;
    iVar5 = 99999;
    iVar4 = param_1;
    if (0 < DAT_006232ec) {
      do {
        fVar6 = (float10)*(float *)(iVar4 + 0x70) * (float10)(fVar2 * fVar1);
        FUN_005c03a0();
        iVar4 = (int)ROUND(fVar6);
        *(int *)(extraout_EDX + 0xb0) = iVar4;
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        iVar4 = extraout_EDX + 4;
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar5;
        param_1 = param_1 + 4;
      } while (iVar4 < iVar3);
      DAT_006232ec = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_006232ec) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + 0xb0) = 0;
        param_1 = param_1 + 4;
      } while (iVar4 < DAT_006232ec);
    }
  }
  DAT_006232ec = iVar3;
  return;
}
