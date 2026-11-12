// Name: core_spline.cpp_evaluateSplineScalar_FUN_00583ef0
// Address: 00583ef0
// Address Range: [[00583ef0, 00583f29]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_00583ef0(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_00583ef0(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

{
  return *cp3 * basis[3] + *cp2 * basis[2] + *cp0 * *basis + *cp1 * basis[1];
}
