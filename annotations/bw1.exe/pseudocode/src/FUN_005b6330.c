// Name: FUN_005b6330
// Address: 005b6330
// Address Range: [[005b6330, 005b637a]]
// Convention: unknown
// Signature: double FUN_005b6330(float *param_1)

#include "nocturne.h"

double FUN_005b6330(float *param_1)

{
  return (double)((param_1[4] * param_1[9] - param_1[5] * param_1[8]) * param_1[2] +
                 ((param_1[5] * param_1[10] - param_1[6] * param_1[9]) * *param_1 -
                 (param_1[4] * param_1[10] - param_1[6] * param_1[8]) * param_1[1]));
}
