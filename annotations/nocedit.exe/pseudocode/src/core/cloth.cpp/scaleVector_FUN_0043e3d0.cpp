// Name: core_cloth.cpp_scaleVector_FUN_0043e3d0
// Address: 0043e3d0
// Address Range: [[0043e3d0, 0043e3f2]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_scaleVector_FUN_0043e3d0(CVector3f *out,float *scale,CVector3f *v)

#include "nocturne.h"

CVector3f * __cdecl core_cloth_cpp_scaleVector_FUN_0043e3d0(CVector3f *out,float *scale,CVector3f *v)

{
  out->x = v->x * *scale;
  out->y = v->y * *scale;
  out->z = v->z * *scale;
  return out;
}
