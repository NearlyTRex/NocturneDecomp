// Name: core_bodypart.cpp_copyVector_FUN_0041b570
// Address: 0041b570
// Address Range: [[0041b570, 0041b588]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_0041b570(CVector3f *dst,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_0041b570(CVector3f *dst,CVector3f *src)

{
  dst->x = src->x;
  dst->y = src->y;
  dst->z = src->z;
  return dst;
}
