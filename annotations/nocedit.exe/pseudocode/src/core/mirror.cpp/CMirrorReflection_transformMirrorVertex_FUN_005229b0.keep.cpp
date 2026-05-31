// Name: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0
// Address: 005229b0
// MANUAL RECONSTRUCTION
// Address Range: [[005229b0, 00522a4e] [0061088b, 006108a7]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)

#include "nocturne.h"

CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar1;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_18;
  
  local_3c.x = (float)input_vertex->x * 0.00390625f;
  local_3c.y = (float)input_vertex->y * 0.00390625f;
  local_3c.z = (float)input_vertex->z * 0.00390625f;
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0
                     (this_ptr,&local_18,&local_3c);
  if (&local_30 != pCVar1) {
    local_30 = *pCVar1;
  }
  fVar1 = local_30.y * 256.0f;
  fVar2 = local_30.z * 256.0f;
  output_vertex->x = (int)ROUND(local_30.x * 256.0f);
  output_vertex->y = (int)ROUND(fVar1);
  output_vertex->z = (int)ROUND(fVar2);
  return output_vertex;
}
