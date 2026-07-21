// Name: core_bodypart.cpp_addVector_FUN_00417fc0
// Address: 00417fc0
// Address Range: [[00417fc0, 00417fe4]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_addVector_FUN_00417fc0(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_addVector_FUN_00417fc0(float *param_1,float *param_2,float *param_3)

{
  *param_2 = *param_1 + *param_3;
  param_2[1] = param_1[1] + param_3[1];
  param_2[2] = param_1[2] + param_3[2];
  return;
}
