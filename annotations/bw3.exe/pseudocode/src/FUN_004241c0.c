// Name: FUN_004241c0
// Address: 004241c0
// Address Range: [[004241c0, 0042422c]]
// Convention: unknown
// Signature: void FUN_004241c0(float *param_1)

#include "nocturne.h"

void FUN_004241c0(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *param_1 = *param_1 * fVar1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
    return;
  }
  param_1[2] = 0.0;
  param_1[1] = param_1[2];
  *param_1 = param_1[1];
  return;
}
