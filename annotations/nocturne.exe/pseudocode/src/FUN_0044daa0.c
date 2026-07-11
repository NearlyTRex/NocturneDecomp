// Name: FUN_0044daa0
// Address: 0044daa0
// Address Range: [[0044daa0, 0044daf4]]
// Convention: unknown
// Signature: float * FUN_0044daa0(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float * FUN_0044daa0(float *param_1,float *param_2,float *param_3)

{
  *param_2 = param_3[2] * param_1[6] + *param_3 * *param_1 + param_3[1] * param_1[3];
  param_2[1] = param_3[2] * param_1[7] + *param_3 * param_1[1] + param_3[1] * param_1[4];
  param_2[2] = param_3[2] * param_1[8] + *param_3 * param_1[2] + param_3[1] * param_1[5];
  return param_2;
}
