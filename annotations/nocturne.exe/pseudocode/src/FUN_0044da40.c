// Name: FUN_0044da40
// Address: 0044da40
// Address Range: [[0044da40, 0044da94]]
// Convention: unknown
// Signature: float * FUN_0044da40(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float * FUN_0044da40(float *param_1,float *param_2,float *param_3)

{
  *param_2 = param_3[2] * param_1[2] + *param_3 * *param_1 + param_3[1] * param_1[1];
  param_2[1] = param_3[2] * param_1[5] + *param_3 * param_1[3] + param_3[1] * param_1[4];
  param_2[2] = param_3[2] * param_1[8] + *param_3 * param_1[6] + param_3[1] * param_1[7];
  return param_2;
}
