// Name: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50
// Address: 00522a50
// MANUAL RECONSTRUCTION
// Address Range: [[00522a50, 00522bef] [0060c8e0, 0060c8fc]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar1;
  CVector3f *pCVar3;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  local_24.x = (float)point_a->x * 0.00390625f;
  local_24.y = (float)point_a->y * 0.00390625f;
  local_24.z = (float)point_a->z * 0.00390625f;
  local_54.x = (float)point_b->x * 1.525879e-05f;
  local_54.y = (float)point_b->y * 1.525879e-05f;
  local_54.z = (float)point_b->z * 1.525879e-05f;
  local_60.x = local_54.x + local_24.x;
  local_60.y = local_54.y + local_24.y;
  local_60.z = local_54.z + local_24.z;
  local_54 = local_60;
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0
                     (this_ptr,&local_48,&local_24);
  if (&local_24 != pCVar1) {
    local_24 = *pCVar1;
  }
  pCVar3 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0
                     (this_ptr,&local_18,&local_54);
  if (&local_54 != pCVar3) {
    local_54 = *pCVar3;
  }
  if (&local_54 != &local_30) {
    local_54.x = local_54.x - local_24.x;
    local_54.y = local_54.y - local_24.y;
    local_54.z = local_54.z - local_24.z;
  }
  fVar1 = local_54.y * 65536.0f;
  fVar2 = local_54.z * 65536.0f;
  output->x = (int)ROUND(local_54.x * 65536.0f);
  output->y = (int)ROUND(fVar1);
  output->z = (int)ROUND(fVar2);
  return output;
}
