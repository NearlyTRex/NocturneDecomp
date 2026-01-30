// Name: shape_superopt.cpp_FUN_005d86d0
// Address: 005d86d0
// Address Range: [[005d86d0, 005d8706]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_FUN_005d86d0(double *param_1,double *param_2)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_FUN_005d86d0(double *param_1,double *param_2)

{
  return SQRT((param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) +
              (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
              (*param_2 - *param_1) * (*param_2 - *param_1));
}
