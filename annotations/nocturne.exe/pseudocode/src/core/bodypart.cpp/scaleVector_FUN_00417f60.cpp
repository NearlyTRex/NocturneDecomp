// Name: core_bodypart.cpp_scaleVector_FUN_00417f60
// Address: 00417f60
// Address Range: [[00417f60, 00417f82]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_scaleVector_FUN_00417f60(CVector3f *src,CVector3f *dst,float *scalar)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_scaleVector_FUN_00417f60(CVector3f *src,CVector3f *dst,float *scalar)

{
  dst->x = src->x * *scalar;
  dst->y = src->y * *scalar;
  dst->z = src->z * *scalar;
  return dst;
}
