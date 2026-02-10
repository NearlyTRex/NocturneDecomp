// Name: core_charactr.cpp_divideVector_FUN_0042f8f0
// Address: 0042f8f0
// Address Range: [[0042f8f0, 0042f912]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_charactr_cpp_divideVector_FUN_0042f8f0(CVector3f *src,CVector3f *dst,float *scalar)

#include "nocturne.h"

CVector3f * __cdecl
core_charactr_cpp_divideVector_FUN_0042f8f0(CVector3f *src,CVector3f *dst,float *scalar)

{
  dst->x = src->x / *scalar;
  dst->y = src->y / *scalar;
  dst->z = src->z / *scalar;
  return dst;
}
