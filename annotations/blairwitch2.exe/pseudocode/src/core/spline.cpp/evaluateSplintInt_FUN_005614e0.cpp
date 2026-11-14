// Name: core_spline.cpp_evaluateSplintInt_FUN_005614e0
// Address: 005614e0
// Address Range: [[005614e0, 00561539]]
// Convention: __cdecl
// Signature: int __cdecl core_spline_cpp_evaluateSplintInt_FUN_005614e0(float *basis,int v0,int v1,int v2,int v3)

#include "nocturne.h"

int __cdecl core_spline_cpp_evaluateSplintInt_FUN_005614e0(float *basis,int v0,int v1,int v2,int v3)

{
  return (int)ROUND((float)v3 * basis[3] +
                    (float)v2 * basis[2] + (float)v0 * *basis + (float)v1 * basis[1]);
}
