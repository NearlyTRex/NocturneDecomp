// Name: core_cloth.cpp_scaleVector_FUN_00438950
// Address: 00438950
// Address Range: [[00438950, 00438972]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_scaleVector_FUN_00438950(CVector3f *out,float *scale,CVector3f *v)

#include "nocturne.h"

CVector3f * __cdecl core_cloth_cpp_scaleVector_FUN_00438950(CVector3f *out,float *scale,CVector3f *v)

{
  out->x = v->x * *scale;
  out->y = v->y * *scale;
  out->z = v->z * *scale;
  return out;
}
