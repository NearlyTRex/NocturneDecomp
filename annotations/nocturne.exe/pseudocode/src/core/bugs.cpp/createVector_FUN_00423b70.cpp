// Name: core_bugs.cpp_createVector_FUN_00423b70
// Address: 00423b70
// Address Range: [[00423b70, 00423b88]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_createVector_FUN_00423b70(CVector3f *dest,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_createVector_FUN_00423b70(CVector3f *dest,float x,float y,float z)

{
  dest->x = x;
  dest->y = y;
  dest->z = z;
  return dest;
}
