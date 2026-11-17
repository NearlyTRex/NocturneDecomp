// Name: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_0051a0a0
// Address: 0051a0a0
// Address Range: [[0051a0a0, 0051a28f]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_0051a0a0(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_0051a0a0(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output)

{
  int *piVar1;
  byte bVar2;
  float afStackY_1078 [9];
  int aiStackY_1054 [15];
  float afStackY_1018 [992];
  CVector3f local_90;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74 [2];
  int local_6c;
  int local_68 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar2 = 0;
  local_3c.x = (float)point_a->x * 0.00390625f;
  local_3c.y = (float)point_a->y * 0.00390625f;
  local_3c.z = (float)point_a->z * 0.00390625f;
  local_24.x = (float)point_b->x * 1.525879e-05f;
  local_24.y = (float)point_b->y * 1.525879e-05f;
  local_24.z = (float)point_b->z * 1.525879e-05f;
  local_84 = local_24.x + local_3c.x;
  local_80 = local_24.y + local_3c.y;
  local_7c = local_24.z + local_3c.z;
  if (&local_24 != &local_54) {
    local_24.x = local_84;
    local_24.y = local_80;
    local_24.z = local_7c;
  }
  local_54.x = local_84;
  local_54.y = local_80;
  local_54.z = local_7c;
  core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_00519920(this_ptr,&local_3c,&local_18);
  local_90.x = local_18.x;
  *(uint *)((int)&local_90 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&local_3c != &local_90) {
    local_3c.x = local_90.x;
    local_3c.y = local_90.y;
    local_3c.z = local_90.z;
  }
  core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_00519920(this_ptr,&local_24,&local_48);
  local_60.x = local_48.x;
  *(uint *)((int)&local_60 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_48 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&local_24 != &local_60) {
    local_24.x = local_60.x;
    local_24.y = local_60.y;
    local_24.z = local_60.z;
  }
  local_74[0] = local_24.y - local_3c.y;
  local_74[1] = local_24.z - local_3c.z;
  local_78 = local_24.x - local_3c.x;
  local_30.x = local_24.x - local_3c.x;
  *(float *)((int)&local_30 + (uint)bVar2 * -8 + 4) = local_74[(uint)bVar2 * -2];
  *(float *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       local_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (&local_24 != &local_30) {
    local_24.x = local_30.x;
    local_24.y = local_30.y;
    local_24.z = local_30.z;
  }
  local_6c = (int)ROUND(local_24.x * 65536.0f);
  local_68[0] = (int)ROUND(local_24.y * 65536.0f);
  local_68[1] = (int)ROUND(local_24.z * 65536.0f);
  piVar1 = (int *)((int)output + (uint)bVar2 * -8 + 4);
  output->x = (int)ROUND(local_24.x * 65536.0f);
  *piVar1 = local_68[(uint)bVar2 * -2];
  piVar1[(uint)bVar2 * -2 + 1] = local_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return output;
}
