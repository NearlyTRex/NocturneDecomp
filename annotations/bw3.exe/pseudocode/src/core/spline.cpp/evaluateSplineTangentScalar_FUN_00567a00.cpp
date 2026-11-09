// Name: core_spline.cpp_evaluateSplineTangentScalar_FUN_00567a00
// Address: 00567a00
// Address Range: [[00567a00, 00567a3a]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_00567a00(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_00567a00(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  return *param_5 * *(float *)(param_1 + 0x1c) +
         *param_4 * *(float *)(param_1 + 0x18) +
         *param_3 * *(float *)(param_1 + 0x14) + *param_2 * *(float *)(param_1 + 0x10);
}
