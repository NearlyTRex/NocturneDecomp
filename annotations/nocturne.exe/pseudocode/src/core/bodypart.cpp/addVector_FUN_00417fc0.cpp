// Name: core_bodypart.cpp_addVector_FUN_00417fc0
// Address: 00417fc0
// Address Range: [[00417fc0, 00417fe4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_00417fc0(CVector3f *a,CVector3f *dst,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_00417fc0(CVector3f *a,CVector3f *dst,CVector3f *b)

{
  dst->x = a->x + b->x;
  dst->y = a->y + b->y;
  dst->z = a->z + b->z;
  return dst;
}
