// Name: core_bugs.cpp_subtractVector_FUN_00423bb0
// Address: 00423bb0
// Address Range: [[00423bb0, 00423bd0]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_subtractVector_FUN_00423bb0(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_subtractVector_FUN_00423bb0(CVector3f *dest,CVector3f *src)

{
  dest->x = dest->x - src->x;
  dest->y = dest->y - src->y;
  dest->z = dest->z - src->z;
  return dest;
}
