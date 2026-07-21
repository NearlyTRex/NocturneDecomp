// Name: core_xform.cpp_determinant_FUN_0055bcb0
// Address: 0055bcb0
// Address Range: [[0055bcb0, 0055bcfa]]
// Convention: __cdecl
// Signature: double __cdecl core_xform_cpp_determinant_FUN_0055bcb0(float *param_1)

#include "nocturne.h"

double __cdecl core_xform_cpp_determinant_FUN_0055bcb0(float *param_1)

{
  return (double)((param_1[4] * param_1[9] - param_1[5] * param_1[8]) * param_1[2] +
                 ((param_1[5] * param_1[10] - param_1[6] * param_1[9]) * *param_1 -
                 (param_1[4] * param_1[10] - param_1[6] * param_1[8]) * param_1[1]));
}
