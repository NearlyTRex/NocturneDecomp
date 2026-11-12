// Name: core_spline.cpp_evaluateSplineScalar_FUN_00583ef0
// Address: 00583ef0
// Address Range: [[00583ef0, 00583f29]]
// Convention: unknown
// Signature: float core_spline_cpp_evaluateSplineScalar_FUN_00583ef0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

float core_spline_cpp_evaluateSplineScalar_FUN_00583ef0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  return *param_5 * param_1[3] + *param_4 * param_1[2] + *param_2 * *param_1 + *param_3 * param_1[1]
  ;
}
