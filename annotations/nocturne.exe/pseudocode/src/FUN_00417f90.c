// Name: FUN_00417f90
// Address: 00417f90
// Address Range: [[00417f90, 00417fb4]]
// Convention: unknown
// Signature: void FUN_00417f90(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void FUN_00417f90(float *param_1,float *param_2,float *param_3)

{
  *param_2 = *param_1 - *param_3;
  param_2[1] = param_1[1] - param_3[1];
  param_2[2] = param_1[2] - param_3[2];
  return;
}
