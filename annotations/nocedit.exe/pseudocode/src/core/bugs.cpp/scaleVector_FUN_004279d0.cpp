// Name: core_bugs.cpp_scaleVector_FUN_004279d0
// Address: 004279d0
// Address Range: [[004279d0, 004279ee]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_scaleVector_FUN_004279d0(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_scaleVector_FUN_004279d0(CVector3f *dest,CVector3f *src)

{
  dest->x = src->x * dest->x;
  dest->y = src->x * dest->y;
  dest->z = src->x * dest->z;
  return dest;
}
