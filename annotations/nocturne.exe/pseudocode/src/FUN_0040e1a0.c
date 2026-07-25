// Name: FUN_0040e1a0
// Address: 0040e1a0
// Address Range: [[0040e1a0, 0040e1c4]]
// Convention: unknown
// Signature: float FUN_0040e1a0(float *param_1)

#include "nocturne.h"

float FUN_0040e1a0(float *param_1)

{
  return SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
}
