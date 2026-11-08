// Name: FUN_004f3b80
// Address: 004f3b80
// Address Range: [[004f3b80, 004f3d29]]
// Convention: unknown
// Signature: void FUN_004f3b80(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

void FUN_004f3b80(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float local_78 [6];
  float local_60 [3];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [11];
  
  if (&local_54 != local_78) {
    local_54 = *param_3 - *param_2;
    local_50 = param_3[1] - param_2[1];
    local_4c = param_3[2] - param_2[2];
  }
  if (&local_48 != local_60) {
    local_48 = *param_4 - *param_3;
    local_44 = param_4[1] - param_3[1];
    local_40 = param_4[2] - param_3[2];
  }
  if (param_1 != local_3c) {
    *param_1 = local_50 * local_40 - local_4c * local_44;
    param_1[1] = local_4c * local_48 - local_54 * local_40;
    param_1[2] = local_54 * local_44 - local_50 * local_48;
  }
  fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (fVar1 <= 0.0) {
    param_1[2] = 0.0;
    param_1[1] = param_1[2];
    *param_1 = param_1[1];
  }
  else {
    fVar1 = 1.0 / fVar1;
    *param_1 = *param_1 * fVar1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
  }
  param_1[3] = -(param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1]);
  return;
}
