// Name: FUN_0054e820
// Address: 0054e820
// Address Range: [[0054e820, 0054e8b2]]
// Convention: unknown
// Signature: void FUN_0054e820(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e820(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xab6;
    FUN_004e4500("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
    *(uint *)(param_1 + 0x40) = 0;
    return;
  }
  fVar1 = (float10)*(double *)(param_1 + 4) -
          (float10)*(double *)(&DAT_02648428 + _DAT_026484b8 * 8);
  fVar2 = (float10)*(double *)(param_1 + 0xc) -
          (float10)*(double *)(&DAT_02648438 + _DAT_026484b8 * 8);
  fVar3 = (float10)*(double *)(param_1 + 0x14) -
          (float10)*(double *)(&DAT_02648448 + _DAT_026484b8 * 8);
  *(float *)(param_1 + 0x40) =
       (float)(((float10)1 / (float10)_DAT_005fbc18) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)DAT_0061bcb4);
  return;
}
