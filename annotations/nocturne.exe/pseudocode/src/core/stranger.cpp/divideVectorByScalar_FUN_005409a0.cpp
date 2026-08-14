// Name: core_stranger.cpp_divideVectorByScalar_FUN_005409a0
// Address: 005409a0
// Address Range: [[005409a0, 005409be]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_divideVectorByScalar_FUN_005409a0(CVector3f *vector,float *divisor)

#include "nocturne.h"

void __cdecl core_stranger_cpp_divideVectorByScalar_FUN_005409a0(CVector3f *vector,float *divisor)

{
  vector->x = vector->x / *divisor;
  vector->y = vector->y / *divisor;
  vector->z = vector->z / *divisor;
  return;
}
