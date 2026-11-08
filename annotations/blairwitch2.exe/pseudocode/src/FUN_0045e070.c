// Name: FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e0a4]]
// Convention: unknown
// Signature: float FUN_0045e070(float *param_1,float *param_2)

#include "nocturne.h"

float FUN_0045e070(float *param_1,float *param_2)

{
  return SQRT((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (*param_1 - *param_2) * (*param_1 - *param_2));
}
