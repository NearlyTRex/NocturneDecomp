// Name: core_spline.cpp_evaluateSplineScalar_FUN_005b9230
// Address: 005b9230
// Address Range: [[005b9230, 005b9269]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005b9230(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005b9230(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

{
  return *cp3 * basis[3] + *cp2 * basis[2] + *cp0 * *basis + *cp1 * basis[1];
}
