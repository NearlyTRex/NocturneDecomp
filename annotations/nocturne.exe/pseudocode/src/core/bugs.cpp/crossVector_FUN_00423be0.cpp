// Name: core_bugs.cpp_crossVector_FUN_00423be0
// Address: 00423be0
// Address Range: [[00423be0, 00423c1c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_crossVector_FUN_00423be0(CVector3f *a,CVector3f *result,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_crossVector_FUN_00423be0(CVector3f *a,CVector3f *result,CVector3f *b)

{
  result->x = a->y * b->z - a->z * b->y;
  result->y = a->z * b->x - a->x * b->z;
  result->z = a->x * b->y - a->y * b->x;
  return result;
}
