// Name: core_xform.cpp_transformVector3x4_FUN_0055a8b0
// Address: 0055a8b0
// Address Range: [[0055a8b0, 0055a90d]]
// Convention: __cdecl
// Signature: float * __cdecl core_xform_cpp_transformVector3x4_FUN_0055a8b0(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float * __cdecl core_xform_cpp_transformVector3x4_FUN_0055a8b0(float *param_1,float *param_2,float *param_3)

{
  *param_1 = param_2[2] * param_3[2] + *param_2 * *param_3 + param_2[1] * param_3[1] + param_3[3];
  param_1[1] = param_2[2] * param_3[6] + *param_2 * param_3[4] + param_2[1] * param_3[5] +
               param_3[7];
  param_1[2] = param_2[2] * param_3[10] + *param_2 * param_3[8] + param_2[1] * param_3[9] +
               param_3[0xb];
  return param_1;
}
