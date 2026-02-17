// Name: core_bodypart.cpp_addVector_FUN_0041b540
// Address: 0041b540
// Address Range: [[0041b540, 0041b564]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_0041b540(CVector3f *a,CVector3f *dst,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_0041b540(CVector3f *a,CVector3f *dst,CVector3f *b)

{
  dst->x = a->x + b->x;
  dst->y = a->y + b->y;
  dst->z = a->z + b->z;
  return dst;
}
