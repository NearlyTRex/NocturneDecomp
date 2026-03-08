// Name: core_bugs.cpp_subtractVector_FUN_004279f0
// Address: 004279f0
// Address Range: [[004279f0, 00427a10]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_subtractVector_FUN_004279f0(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_subtractVector_FUN_004279f0(CVector3f *dest,CVector3f *src)

{
  dest->x = dest->x - src->x;
  dest->y = dest->y - src->y;
  dest->z = dest->z - src->z;
  return dest;
}
