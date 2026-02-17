// Name: core_bodypart.cpp_scaleVector_FUN_0041b4e0
// Address: 0041b4e0
// Address Range: [[0041b4e0, 0041b502]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_scaleVector_FUN_0041b4e0(CVector3f *src,CVector3f *dst,float *scalar)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_scaleVector_FUN_0041b4e0(CVector3f *src,CVector3f *dst,float *scalar)

{
  dst->x = src->x * *scalar;
  dst->y = src->y * *scalar;
  dst->z = src->z * *scalar;
  return dst;
}
