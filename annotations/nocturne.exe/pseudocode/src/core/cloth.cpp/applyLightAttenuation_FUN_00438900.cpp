// Name: core_cloth.cpp_applyLightAttenuation_FUN_00438900
// Address: 00438900
// Address Range: [[00438900, 0043894e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00438900(CVector3f *v)

#include "nocturne.h"

CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00438900(CVector3f *v)

{
  float fVar1;
  
  fVar1 = (float)((int)CVector3f_01c70708.z - ((int)(v->z * v->z + v->x * v->x + v->y * v->y) >> 1))
  ;
  v->x = v->x * fVar1;
  v->y = v->y * fVar1;
  v->z = v->z * fVar1;
  return v;
}
