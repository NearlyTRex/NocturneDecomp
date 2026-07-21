// Name: core_xform.cpp_normalizeMatrix_FUN_0055acd0
// Address: 0055acd0
// Address Range: [[0055acd0, 0055ae5a]]
// Convention: unknown
// Signature: void core_xform_cpp_normalizeMatrix_FUN_0055acd0(float *param_1)

#include "nocturne.h"

void core_xform_cpp_normalizeMatrix_FUN_0055acd0(float *param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if ((0.0 < dVar1) && (dVar1 != 1.0)) {
    dVar1 = 1.0 / SQRT(dVar1);
    *param_1 = *param_1 * (float)dVar1;
    param_1[1] = param_1[1] * (float)dVar1;
    param_1[2] = param_1[2] * (float)dVar1;
  }
  dVar1 = (double)(param_1[6] * param_1[6] + param_1[5] * param_1[5] + param_1[4] * param_1[4]);
  if ((0.0 < dVar1) && (dVar1 != 1.0)) {
    dVar1 = 1.0 / SQRT(dVar1);
    param_1[4] = param_1[4] * (float)dVar1;
    param_1[5] = param_1[5] * (float)dVar1;
    param_1[6] = param_1[6] * (float)dVar1;
  }
  dVar1 = (double)(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]);
  if ((0.0 < dVar1) && (dVar1 != 1.0)) {
    dVar1 = 1.0 / SQRT(dVar1);
    param_1[8] = param_1[8] * (float)dVar1;
    param_1[9] = param_1[9] * (float)dVar1;
    param_1[10] = param_1[10] * (float)dVar1;
    return;
  }
  return;
}
