// Name: core_bodypart.cpp_copyVector_FUN_00417ff0
// Address: 00417ff0
// Address Range: [[00417ff0, 00418008]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_00417ff0(CVector3f *dst,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_00417ff0(CVector3f *dst,CVector3f *src)

{
  dst->x = src->x;
  dst->y = src->y;
  dst->z = src->z;
  return dst;
}
