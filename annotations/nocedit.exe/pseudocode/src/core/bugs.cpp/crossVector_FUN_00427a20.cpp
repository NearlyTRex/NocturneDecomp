// Name: core_bugs.cpp_crossVector_FUN_00427a20
// Address: 00427a20
// Address Range: [[00427a20, 00427a5c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_crossVector_FUN_00427a20(CVector3f *a,CVector3f *result,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_crossVector_FUN_00427a20(CVector3f *a,CVector3f *result,CVector3f *b)

{
  result->x = a->y * b->z - a->z * b->y;
  result->y = a->z * b->x - a->x * b->z;
  result->z = a->x * b->y - a->y * b->x;
  return result;
}
