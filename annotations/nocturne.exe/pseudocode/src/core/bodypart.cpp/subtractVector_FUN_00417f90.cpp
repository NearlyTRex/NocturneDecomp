// Name: core_bodypart.cpp_subtractVector_FUN_00417f90
// Address: 00417f90
// Address Range: [[00417f90, 00417fb4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_subtractVector_FUN_00417f90(CVector3f *a,CVector3f *dst,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_subtractVector_FUN_00417f90(CVector3f *a,CVector3f *dst,CVector3f *b)

{
  dst->x = a->x - b->x;
  dst->y = a->y - b->y;
  dst->z = a->z - b->z;
  return dst;
}
