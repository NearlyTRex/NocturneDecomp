// Name: core_spline.cpp_evaluateSplintInt_FUN_00533eb0
// Address: 00533eb0
// Address Range: [[00533eb0, 00533f09]]
// Convention: __cdecl
// Signature: int __cdecl core_spline_cpp_evaluateSplintInt_FUN_00533eb0(float *basis,int v0,int v1,int v2,int v3)

#include "nocturne.h"

int __cdecl core_spline_cpp_evaluateSplintInt_FUN_00533eb0(float *basis,int v0,int v1,int v2,int v3)

{
  return (int)ROUND((float)v3 * basis[3] +
                    (float)v2 * basis[2] + (float)v0 * *basis + (float)v1 * basis[1]);
}
