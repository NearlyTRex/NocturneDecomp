// Name: FUN_005836b0
// Address: 005836b0
// Address Range: [[005836b0, 005837d2]]
// Convention: unknown
// Signature: void FUN_005836b0(float *param_1)

#include "nocturne.h"

void FUN_005836b0(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if ((0.0 < fVar1) && (fVar1 != 1.0)) {
    fVar1 = 1.0 / SQRT(fVar1);
    *param_1 = *param_1 * fVar1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
  }
  fVar1 = param_1[6] * param_1[6] + param_1[5] * param_1[5] + param_1[4] * param_1[4];
  if ((0.0 < fVar1) && (fVar1 != 1.0)) {
    fVar1 = 1.0 / SQRT(fVar1);
    param_1[4] = param_1[4] * fVar1;
    param_1[5] = param_1[5] * fVar1;
    param_1[6] = param_1[6] * fVar1;
  }
  fVar1 = param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8];
  if ((0.0 < fVar1) && (fVar1 != 1.0)) {
    fVar1 = 1.0 / SQRT(fVar1);
    param_1[8] = param_1[8] * fVar1;
    param_1[9] = param_1[9] * fVar1;
    param_1[10] = param_1[10] * fVar1;
    return;
  }
  return;
}
