// Name: core_spline.cpp_evaluateSplineTangentInt_FUN_005b9430
// Address: 005b9430
// Address Range: [[005b9430, 005b948a]]
// Convention: __cdecl
// Signature: int __cdecl core_spline_cpp_evaluateSplineTangentInt_FUN_005b9430(float *basis,int v0,int v1,int v2,int v3)

#include "nocturne.h"

int __cdecl core_spline_cpp_evaluateSplineTangentInt_FUN_005b9430(float *basis,int v0,int v1,int v2,int v3)

{
  return (int)ROUND((float)v3 * basis[7] +
                    (float)v2 * basis[6] + (float)v1 * basis[5] + (float)v0 * basis[4]);
}
