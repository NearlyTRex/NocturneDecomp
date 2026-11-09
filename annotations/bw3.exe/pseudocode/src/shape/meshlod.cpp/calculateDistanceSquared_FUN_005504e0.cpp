// Name: shape_meshlod.cpp_calculateDistanceSquared_FUN_005504e0
// Address: 005504e0
// Address Range: [[005504e0, 00550512]]
// Convention: __cdecl
// Signature: float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_005504e0(float *param_1,float *param_2)

#include "nocturne.h"

float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_005504e0(float *param_1,float *param_2)

{
  return (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (*param_1 - *param_2) * (*param_1 - *param_2);
}
