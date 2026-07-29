// Name: core_bugs.cpp_scaleVector_FUN_00423b90
// Address: 00423b90
// Address Range: [[00423b90, 00423bae]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_scaleVector_FUN_00423b90(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_scaleVector_FUN_00423b90(CVector3f *dest,CVector3f *src)

{
  dest->x = src->x * dest->x;
  dest->y = src->x * dest->y;
  dest->z = src->x * dest->z;
  return dest;
}
