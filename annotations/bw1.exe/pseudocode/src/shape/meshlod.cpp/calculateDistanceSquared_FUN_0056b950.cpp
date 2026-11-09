// Name: shape_meshlod.cpp_calculateDistanceSquared_FUN_0056b950
// Address: 0056b950
// Address Range: [[0056b950, 0056b982]]
// Convention: __cdecl
// Signature: float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_0056b950(float *param_1,float *param_2)

#include "nocturne.h"

float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_0056b950(float *param_1,float *param_2)

{
  return (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (*param_1 - *param_2) * (*param_1 - *param_2);
}
