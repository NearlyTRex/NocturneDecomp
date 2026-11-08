// Name: FUN_005a1ab0
// Address: 005a1ab0
// Address Range: [[005a1ab0, 005a1ad8]]
// Convention: unknown
// Signature: float FUN_005a1ab0(float *param_1,float *param_2)

#include "nocturne.h"

float FUN_005a1ab0(float *param_1,float *param_2)

{
  return SQRT((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
              (*param_1 - *param_2) * (*param_1 - *param_2));
}
