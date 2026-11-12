// Name: core_spline.cpp_evaluateSplineTangentScalar_FUN_005616e0
// Address: 005616e0
// Address Range: [[005616e0, 0056171a]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005616e0(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005616e0(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

{
  return *cp3 * basis[7] + *cp2 * basis[6] + *cp1 * basis[5] + *cp0 * basis[4];
}
