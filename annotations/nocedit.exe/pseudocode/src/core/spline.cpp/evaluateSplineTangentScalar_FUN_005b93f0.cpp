// Name: core_spline.cpp_evaluateSplineTangentScalar_FUN_005b93f0
// Address: 005b93f0
// Address Range: [[005b93f0, 005b942a]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005b93f0(float *basis,float *p0,float *p1,float *p2,float *p3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005b93f0(float *basis,float *p0,float *p1,float *p2,float *p3)

{
  return *p3 * basis[7] + *p2 * basis[6] + *p1 * basis[5] + *p0 * basis[4];
}
