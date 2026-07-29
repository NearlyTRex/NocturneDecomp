// Name: core_spline.cpp_evaluateSplineScalar_FUN_00533e70
// Address: 00533e70
// Address Range: [[00533e70, 00533ea9]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_00533e70(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_00533e70(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

{
  return *cp3 * basis[3] + *cp2 * basis[2] + *cp0 * *basis + *cp1 * basis[1];
}
