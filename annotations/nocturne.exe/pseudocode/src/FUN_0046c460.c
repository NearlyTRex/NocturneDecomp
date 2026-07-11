// Name: FUN_0046c460
// Address: 0046c460
// Address Range: [[0046c460, 0046c5ab]]
// Convention: unknown
// Signature: void FUN_0046c460(float *param_1)

#include "nocturne.h"

void FUN_0046c460(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_c;
  
  fVar2 = (param_1[4] - param_1[1]) * (param_1[8] - param_1[5]) -
          (param_1[7] - param_1[4]) * (param_1[5] - param_1[2]);
  fVar3 = (param_1[6] - param_1[3]) * (param_1[5] - param_1[2]) -
          (param_1[3] - *param_1) * (param_1[8] - param_1[5]);
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  fVar1 = (param_1[3] - *param_1) * (param_1[7] - param_1[4]) -
          (param_1[6] - param_1[3]) * (param_1[4] - param_1[1]);
  param_1[0xb] = fVar1;
  local_c = SQRT(fVar1 * param_1[0xb] + fVar3 * param_1[10] + fVar2 * param_1[9]);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  fVar1 = param_1[9];
  local_c = 1.0 / local_c;
  fVar2 = param_1[10];
  param_1[10] = -fVar2 * local_c;
  param_1[9] = -fVar1 * local_c;
  fVar1 = ABS(-fVar1 * local_c);
  param_1[0xb] = -param_1[0xb] * local_c;
  param_1[0xc] = (-(*param_1 * param_1[9]) - param_1[1] * param_1[10]) - param_1[2] * param_1[0xb];
  if ((ABS(-fVar2 * local_c) < fVar1) && (ABS(param_1[0xb]) < fVar1)) {
    param_1[0xd] = 0.0;
    return;
  }
  if ((ABS(param_1[9]) < ABS(param_1[10])) && (ABS(param_1[0xb]) < ABS(param_1[10]))) {
    param_1[0xd] = 1.4013e-45;
    return;
  }
  param_1[0xd] = 2.8026e-45;
  return;
}
