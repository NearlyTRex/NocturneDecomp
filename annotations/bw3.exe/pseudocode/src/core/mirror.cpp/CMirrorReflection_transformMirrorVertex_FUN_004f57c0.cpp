// Name: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004f57c0
// Address: 004f57c0
// Address Range: [[004f57c0, 004f586f]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004f57c0(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004f57c0(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)

{
  int *piVar1;
  byte bVar2;
  int aiStackY_1024 [1013];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [2];
  int local_30;
  int local_2c [2];
  CVector3f local_24;
  CVector3f local_18;
  
  bVar2 = 0;
  local_24.x = (float)input_vertex->x * _DAT_005e29c8;
  local_24.y = (float)input_vertex->y * _DAT_005e29c8;
  local_24.z = (float)input_vertex->z * _DAT_005e29c8;
  core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004f50f0(this_ptr,&local_24,&local_18);
  local_3c = local_18.x;
  *(uint *)((int)local_38 + (uint)bVar2 * 0xfffffff8) =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)local_38 + ((uint)bVar2 * -2 + (uint)bVar2 * -2 + 1) * 4) =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&local_48 != &local_3c) {
    local_48 = local_3c;
    local_44 = local_38[0];
    local_40 = local_38[1];
  }
  local_30 = (int)ROUND(local_48 * _DAT_005e29c0);
  local_2c[0] = (int)ROUND(local_44 * _DAT_005e29c0);
  local_2c[1] = (int)ROUND(local_40 * _DAT_005e29c0);
  piVar1 = (int *)((int)output_vertex + (uint)bVar2 * -8 + 4);
  output_vertex->x = (int)ROUND(local_48 * _DAT_005e29c0);
  *piVar1 = local_2c[(uint)bVar2 * -2];
  piVar1[(uint)bVar2 * -2 + 1] = local_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return output_vertex;
}
