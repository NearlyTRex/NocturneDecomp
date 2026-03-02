// Name: core_skeledit.cpp_copyMatrix_FUN_005995d0
// Address: 005995d0
// Address Range: [[005995d0, 00599628]]
// Convention: __cdecl
// Signature: CMatrix3x4f * __cdecl core_skeledit_cpp_copyMatrix_FUN_005995d0(CMatrix3x4f *dst,CMatrix3x4f *src)

#include "nocturne.h"

CMatrix3x4f * __cdecl core_skeledit_cpp_copyMatrix_FUN_005995d0(CMatrix3x4f *dst,CMatrix3x4f *src)

{
  __STK();
  dst->m[0].w = src->m[0].w;
  dst->m[0].x = src->m[0].x;
  dst->m[0].y = src->m[0].y;
  dst->m[0].z = src->m[0].z;
  dst->m[1].w = src->m[1].w;
  dst->m[1].x = src->m[1].x;
  dst->m[1].y = src->m[1].y;
  dst->m[1].z = src->m[1].z;
  dst->m[2].w = src->m[2].w;
  dst->m[2].x = src->m[2].x;
  dst->m[2].y = src->m[2].y;
  dst->m[2].z = src->m[2].z;
  return dst;
}
