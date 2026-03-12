// Name: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0
// Address: 005229b0
// Address Range: [[005229b0, 00522a4e]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0(CMirrorReflection *this_ptr,CVector3f *input_vertex,CVector3f *output_vertex)

#include "nocturne.h"

CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0(CMirrorReflection *this_ptr,CVector3f *input_vertex,CVector3f *output_vertex)

{
  CVector3f *pCVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_100c [1009];
  CVector3f local_3c;
  CVector3f local_30;
  float local_24;
  float local_20;
  int local_1c;
  CVector3f local_18;
  
  bVar3 = 0;
  local_3c.x = (float)(int)input_vertex->x * 0.00390625f;
  local_3c.y = (float)(int)input_vertex->y * 0.00390625f;
  local_3c.z = (float)(int)input_vertex->z * 0.00390625f;
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0
                     (this_ptr,&local_18,&local_3c);
  if (&local_30 != pCVar1) {
    local_30.x = pCVar1->x;
    local_30.y = pCVar1->y;
    local_30.z = pCVar1->z;
  }
  local_20 = (float)(int)ROUND(local_30.y * 256.0f);
  local_1c = (int)ROUND(local_30.z * 256.0f);
  pfVar2 = (float *)((int)output_vertex + (uint)bVar3 * -8 + 4);
  output_vertex->x = (float)(int)ROUND(local_30.x * 256.0f);
  *pfVar2 = (&local_20)[(uint)bVar3 * -2];
  pfVar2[(uint)bVar3 * -2 + 1] = (float)(&local_1c)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
  return output_vertex;
}
