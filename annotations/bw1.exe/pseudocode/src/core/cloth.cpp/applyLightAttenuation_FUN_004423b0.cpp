// Name: core_cloth.cpp_applyLightAttenuation_FUN_004423b0
// Address: 004423b0
// Address Range: [[004423b0, 004423fe]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_004423b0(CVector3f *v)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_004423b0(CVector3f *v)

{
  float fVar1;
  
  fVar1 = (float)(_DAT_01cc8050 -
                 ((int)(*(float *)&v->field_0x8 * *(float *)&v->field_0x8 +
                       *(float *)v * *(float *)v + *(float *)&v->field_0x4 * *(float *)&v->field_0x4
                       ) >> 1));
  *(float *)v = *(float *)v * fVar1;
  *(float *)&v->field_0x4 = *(float *)&v->field_0x4 * fVar1;
  *(float *)&v->field_0x8 = *(float *)&v->field_0x8 * fVar1;
  return v;
}
