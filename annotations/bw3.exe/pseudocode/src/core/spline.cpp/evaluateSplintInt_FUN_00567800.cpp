// Name: core_spline.cpp_evaluateSplintInt_FUN_00567800
// Address: 00567800
// Address Range: [[00567800, 00567859]]
// Convention: __cdecl
// Signature: int __cdecl core_spline_cpp_evaluateSplintInt_FUN_00567800(float *basis,int v0,int v1,int v2,int v3)

#include "nocturne.h"

int __cdecl core_spline_cpp_evaluateSplintInt_FUN_00567800(float *basis,int v0,int v1,int v2,int v3)

{
  return (int)ROUND((float)v3 * basis[3] +
                    (float)v2 * basis[2] + (float)v0 * *basis + (float)v1 * basis[1]);
}
