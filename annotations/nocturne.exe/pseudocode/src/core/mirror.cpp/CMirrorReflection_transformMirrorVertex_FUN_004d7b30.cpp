// Name: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
// Address: 004d7b30
// Address Range: [[004d7b30, 004d7bce]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)

#include "nocturne.h"

CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)

{
  CVector3f *pCVar1;
  int *piVar2;
  byte bVar3;
  int aiStackY_100c [1009];
  CVector3f local_3c;
  CVector3f local_30;
  int local_24;
  int local_20 [2];
  CVector3f local_18;
  
  bVar3 = 0;
  local_3c.x = (float)input_vertex->x * 0.00390625f;
  local_3c.y = (float)input_vertex->y * 0.00390625f;
  local_3c.z = (float)input_vertex->z * 0.00390625f;
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                     (this_ptr,&local_18,&local_3c);
  if (&local_30 != pCVar1) {
    local_30.x = pCVar1->x;
    local_30.y = pCVar1->y;
    local_30.z = pCVar1->z;
  }
  local_24 = (int)ROUND(local_30.x * 256.0f);
  local_20[0] = (int)ROUND(local_30.y * 256.0f);
  local_20[1] = (int)ROUND(local_30.z * 256.0f);
  piVar2 = (int *)((int)output_vertex + (uint)bVar3 * -8 + 4);
  output_vertex->x = (int)ROUND(local_30.x * 256.0f);
  *piVar2 = local_20[(uint)bVar3 * -2];
  piVar2[(uint)bVar3 * -2 + 1] = local_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return output_vertex;
}
