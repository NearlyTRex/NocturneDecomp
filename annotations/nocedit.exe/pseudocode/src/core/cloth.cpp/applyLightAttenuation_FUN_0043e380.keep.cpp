// Name: core_cloth.cpp_applyLightAttenuation_FUN_0043e380
// Address: 0043e380
// MANUAL RECONSTRUCTION
// Address Range: [[0043e380, 0043e3ce]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_0043e380(CVector3f *v)

#include "nocturne.h"

CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_0043e380(CVector3f *v)

{
  float fVar1;
  
  fVar1 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(v->z * v->z + v->x * v->x + v->y * v->y);
  v->x = v->x * fVar1;
  v->y = v->y * fVar1;
  v->z = v->z * fVar1;
  return v;
}
