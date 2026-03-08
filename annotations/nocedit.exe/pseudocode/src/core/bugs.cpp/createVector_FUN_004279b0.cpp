// Name: core_bugs.cpp_createVector_FUN_004279b0
// Address: 004279b0
// Address Range: [[004279b0, 004279c8]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bugs_cpp_createVector_FUN_004279b0(CVector3f *dest,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_bugs_cpp_createVector_FUN_004279b0(CVector3f *dest,float x,float y,float z)

{
  dest->x = x;
  dest->y = y;
  dest->z = z;
  return dest;
}
