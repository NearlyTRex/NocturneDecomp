// Name: FUN_00506b60
// Address: 00506b60
// Address Range: [[00506b60, 00506c02]]
// Convention: unknown
// Signature: void FUN_00506b60(int param_1,float param_2)

#include "nocturne.h"

void FUN_00506b60(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x1a0) == 1) {
    fVar2 = (param_2 * fVar1) / *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x17c);
    *(float *)(param_1 + 0x17c) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x17c) - fVar1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x1a0) == 0) {
    fVar1 = param_2 / *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x17c);
    *(float *)(param_1 + 0x17c) = fVar1;
    if ((float)*(int *)(param_1 + 0x180) < fVar1) {
      *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x17c) - (float)*(int *)(param_1 + 0x180);
      return;
    }
  }
  return;
}
