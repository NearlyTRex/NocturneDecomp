// Name: FUN_00421fe0
// Address: 00421fe0
// Address Range: [[00421fe0, 0042204c]]
// Convention: unknown
// Signature: void FUN_00421fe0(float *param_1)

#include "nocturne.h"

void FUN_00421fe0(float *param_1)

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
