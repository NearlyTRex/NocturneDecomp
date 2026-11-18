// Name: core_prye.cpp_divideVectorByScalar_FUN_005271d0
// Address: 005271d0
// Address Range: [[005271d0, 005271fe]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_divideVectorByScalar_FUN_005271d0(CVector3f *vector,float *divisor)

#include "nocturne.h"

void __cdecl core_prye_cpp_divideVectorByScalar_FUN_005271d0(CVector3f *vector,float *divisor)

{
  float fVar1;
  
  fVar1 = 1.0 / *divisor;
  vector->x = vector->x * fVar1;
  vector->y = vector->y * fVar1;
  vector->z = vector->z * fVar1;
  return;
}
