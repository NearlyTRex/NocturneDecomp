// Name: FUN_005504e0
// Address: 005504e0
// Address Range: [[005504e0, 00550512]]
// Convention: unknown
// Signature: float FUN_005504e0(float *param_1,float *param_2)

#include "nocturne.h"

float FUN_005504e0(float *param_1,float *param_2)

{
  return (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (*param_1 - *param_2) * (*param_1 - *param_2);
}
