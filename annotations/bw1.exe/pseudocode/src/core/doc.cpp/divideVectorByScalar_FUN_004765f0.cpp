// Name: core_doc.cpp_divideVectorByScalar_FUN_004765f0
// Address: 004765f0
// Address Range: [[004765f0, 0047661e]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_divideVectorByScalar_FUN_004765f0(CVector3f *vector,float *divisor)

#include "nocturne.h"

void __cdecl core_doc_cpp_divideVectorByScalar_FUN_004765f0(CVector3f *vector,float *divisor)

{
  float fVar1;
  
  fVar1 = 1.0 / *divisor;
  vector->x = vector->x * fVar1;
  vector->y = vector->y * fVar1;
  vector->z = vector->z * fVar1;
  return;
}
