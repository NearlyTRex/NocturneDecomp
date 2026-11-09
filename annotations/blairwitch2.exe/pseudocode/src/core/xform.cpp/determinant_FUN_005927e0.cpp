// Name: core_xform.cpp_determinant_FUN_005927e0
// Address: 005927e0
// Address Range: [[005927e0, 0059282a]]
// Convention: __cdecl
// Signature: double __cdecl core_xform_cpp_determinant_FUN_005927e0(float *param_1)

#include "nocturne.h"

double __cdecl core_xform_cpp_determinant_FUN_005927e0(float *param_1)

{
  return (double)((param_1[4] * param_1[9] - param_1[5] * param_1[8]) * param_1[2] +
                 ((param_1[5] * param_1[10] - param_1[6] * param_1[9]) * *param_1 -
                 (param_1[4] * param_1[10] - param_1[6] * param_1[8]) * param_1[1]));
}
