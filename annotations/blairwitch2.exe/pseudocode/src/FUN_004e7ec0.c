// Name: FUN_004e7ec0
// Address: 004e7ec0
// Address Range: [[004e7ec0, 004e7f62]]
// Convention: unknown
// Signature: void FUN_004e7ec0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004e7ec0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_1 + 0x300);
  if (*(int *)(param_1 + 0x2fc) == 1) {
    fVar2 = (param_2 * fVar1) / *(float *)(param_1 + 0x2d4) + *(float *)(param_1 + 0x2d8);
    *(float *)(param_1 + 0x2d8) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x2d8) = *(float *)(param_1 + 0x2d8) - fVar1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2fc) == 0) {
    fVar1 = param_2 / *(float *)(param_1 + 0x2d4) + *(float *)(param_1 + 0x2d8);
    *(float *)(param_1 + 0x2d8) = fVar1;
    if ((float)*(int *)(param_1 + 0x2dc) < fVar1) {
      *(float *)(param_1 + 0x2d8) = *(float *)(param_1 + 0x2d8) - (float)*(int *)(param_1 + 0x2dc);
      return;
    }
  }
  return;
}
