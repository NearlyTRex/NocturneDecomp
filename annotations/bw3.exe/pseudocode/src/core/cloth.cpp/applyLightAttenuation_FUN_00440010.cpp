// Name: core_cloth.cpp_applyLightAttenuation_FUN_00440010
// Address: 00440010
// Address Range: [[00440010, 0044005e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00440010(CVector3f *v)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00440010(CVector3f *v)

{
  float fVar1;
  
  fVar1 = (float)(_DAT_01d1a0a8 -
                 ((int)(*(float *)&v->field_0x8 * *(float *)&v->field_0x8 +
                       *(float *)v * *(float *)v + *(float *)&v->field_0x4 * *(float *)&v->field_0x4
                       ) >> 1));
  *(float *)v = *(float *)v * fVar1;
  *(float *)&v->field_0x4 = *(float *)&v->field_0x4 * fVar1;
  *(float *)&v->field_0x8 = *(float *)&v->field_0x8 * fVar1;
  return v;
}
