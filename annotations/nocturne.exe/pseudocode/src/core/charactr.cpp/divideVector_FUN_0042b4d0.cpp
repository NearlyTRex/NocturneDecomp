// Name: core_charactr.cpp_divideVector_FUN_0042b4d0
// Address: 0042b4d0
// Address Range: [[0042b4d0, 0042b4f2]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_charactr_cpp_divideVector_FUN_0042b4d0(CVector3f *src,CVector3f *dst,float *scalar)

#include "nocturne.h"

CVector3f * __cdecl core_charactr_cpp_divideVector_FUN_0042b4d0(CVector3f *src,CVector3f *dst,float *scalar)

{
  dst->x = src->x / *scalar;
  dst->y = src->y / *scalar;
  dst->z = src->z / *scalar;
  return dst;
}
