// Name: core_bugs.cpp_FUN_00428010
// Address: 00428010
// Address Range: [[00428010, 0042807c]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00428010(float *param_1)

#include "nocturne.h"

void core_bugs_cpp_FUN_00428010(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *param_1 = *param_1 * fVar1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
    return;
  }
  param_1[2] = 0.0;
  param_1[1] = param_1[2];
  *param_1 = param_1[1];
  return;
}
