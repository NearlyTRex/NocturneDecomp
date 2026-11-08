// Name: FUN_00570e90
// Address: 00570e90
// Address Range: [[00570e90, 00570f22]]
// Convention: unknown
// Signature: void FUN_00570e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570e90(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xab6;
    FUN_005030e0("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
    *(uint *)(param_1 + 0x40) = 0;
    return;
  }
  fVar1 = (float10)*(double *)(param_1 + 4) -
          (float10)*(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8);
  fVar2 = (float10)*(double *)(param_1 + 0xc) -
          (float10)*(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8);
  fVar3 = (float10)*(double *)(param_1 + 0x14) -
          (float10)*(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8);
  *(float *)(param_1 + 0x40) =
       (float)(((float10)1 / (float10)_DAT_00605af8) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)DAT_00623304);
  return;
}
