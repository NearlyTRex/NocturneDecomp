// Name: FUN_00418010
// Address: 00418010
// Address Range: [[00418010, 00418035]]
// Convention: unknown
// Signature: float * FUN_00418010(float *param_1,float *param_2)

#include "nocturne.h"

float * FUN_00418010(float *param_1,float *param_2)

{
  *param_2 = param_1[3] - *param_1;
  param_2[1] = param_1[4] - param_1[1];
  param_2[2] = param_1[5] - param_1[2];
  return param_2;
}
