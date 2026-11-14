// Name: core_spline.cpp_evaluateSplineTangentScalar_FUN_00567a00
// Address: 00567a00
// Address Range: [[00567a00, 00567a3a]]
// Convention: __cdecl
// Signature: float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_00567a00(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

#include "nocturne.h"

float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_00567a00(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)

{
  return *cp3 * basis[7] + *cp2 * basis[6] + *cp1 * basis[5] + *cp0 * basis[4];
}
