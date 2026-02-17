// Name: core_spline.cpp_evaluateSplineScalar_FUN_005b9230
// Address: 005b9230
// Address Range: [[005b9230, 005b9269]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005b9230(float *basis,float *p0,float *p1,float *p2,float *p3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005b9230(float *basis,float *p0,float *p1,float *p2,float *p3)

{
  return *p3 * basis[3] + *p2 * basis[2] + *p0 * *basis + *p1 * basis[1];
}
