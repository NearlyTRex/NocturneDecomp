// Name: FUN_004359e0
// Address: 004359e0
// Address Range: [[004359e0, 00435c6a]]
// Convention: unknown
// Signature: void FUN_004359e0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004359e0(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  byte auStack_74 [104];
  
  if ((*(int *)(param_1 + 0x288) != 0) && (param_2[1] < *(float *)(param_1 + 0x56c))) {
    param_2[5] = 0.0;
    param_2[4] = param_2[5];
    param_2[3] = param_2[4];
    param_2[1] = *(float *)(param_1 + 0x56c);
  }
  if (&fStack_a4 != (float *)auStack_74) {
    fStack_a4 = *param_2 - *param_3;
    fStack_a0 = param_2[1] - param_3[1];
    fStack_9c = param_2[2] - param_3[2];
  }
  fVar6 = (float)(((int)(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0) >> 1
                  ) + _DAT_01cc804c);
  if (fVar6 <= *(float *)(param_1 + 0x160)) {
    return;
  }
  fVar2 = fVar6 - *(float *)(param_1 + 0x160);
  fVar6 = 1.0 / fVar6;
  fVar4 = fStack_a4 * fVar2 * fVar6;
  fVar5 = fStack_a0 * fVar2 * fVar6;
  fVar6 = fStack_9c * fVar2 * fVar6;
  pfVar1 = (float *)(param_1 + 0x570);
  *param_2 = *param_2 - fVar4;
  param_2[1] = param_2[1] - fVar5;
  param_2[2] = param_2[2] - fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  param_2[3] = param_2[3] - fVar4 * *pfVar1;
  param_2[4] = param_2[4] - fVar5 * fVar2;
  param_2[5] = param_2[5] - fVar6 * fVar3;
  *param_3 = *param_3 + fVar4;
  param_3[1] = param_3[1] + fVar5;
  param_3[2] = param_3[2] + fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  param_3[3] = param_3[3] + fVar4 * *pfVar1;
  param_3[4] = param_3[4] + fVar5 * fVar2;
  param_3[5] = param_3[5] + fVar6 * fVar3;
  return;
}
