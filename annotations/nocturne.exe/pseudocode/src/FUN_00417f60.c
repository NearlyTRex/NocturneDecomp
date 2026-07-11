// Name: FUN_00417f60
// Address: 00417f60
// Address Range: [[00417f60, 00417f82]]
// Convention: unknown
// Signature: void FUN_00417f60(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void FUN_00417f60(float *param_1,float *param_2,float *param_3)

{
  *param_2 = *param_1 * *param_3;
  param_2[1] = param_1[1] * *param_3;
  param_2[2] = param_1[2] * *param_3;
  return;
}
