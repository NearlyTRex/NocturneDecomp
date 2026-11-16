// Name: core_doc.cpp_divideVectorByScalar_FUN_0045e040
// Address: 0045e040
// Address Range: [[0045e040, 0045e06e]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_divideVectorByScalar_FUN_0045e040(CVector3f *vector,float *divisor)

#include "nocturne.h"

void __cdecl core_doc_cpp_divideVectorByScalar_FUN_0045e040(CVector3f *vector,float *divisor)

{
  float fVar1;
  
  fVar1 = 1.0 / *divisor;
  vector->x = vector->x * fVar1;
  vector->y = vector->y * fVar1;
  vector->z = vector->z * fVar1;
  return;
}
