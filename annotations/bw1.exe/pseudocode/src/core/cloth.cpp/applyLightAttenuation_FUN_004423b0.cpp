// Name: core_cloth.cpp_applyLightAttenuation_FUN_004423b0
// Address: 004423b0
// Address Range: [[004423b0, 004423fe]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_004423b0(CVector3f *v)

#include "nocturne.h"

CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_004423b0(CVector3f *v)

{
  float fVar1;
  
  fVar1 = (float)(g_INT_01cc8050 - ((int)(v->z * v->z + v->x * v->x + v->y * v->y) >> 1));
  v->x = v->x * fVar1;
  v->y = v->y * fVar1;
  v->z = v->z * fVar1;
  return v;
}
