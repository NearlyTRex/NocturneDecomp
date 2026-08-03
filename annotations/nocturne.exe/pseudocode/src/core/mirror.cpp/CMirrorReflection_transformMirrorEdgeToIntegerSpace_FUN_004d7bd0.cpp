// Name: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
// Address: 004d7bd0
// Address Range: [[004d7bd0, 004d7d6f]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output)

{
  CVector3f *pCVar1;
  int *piVar2;
  byte bVar3;
  int aiStackY_1024 [1006];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  int local_3c;
  int local_38 [2];
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  local_24.x = (float)point_a->x * 0.00390625f;
  local_24.y = (float)point_a->y * 0.00390625f;
  local_24.z = (float)point_a->z * 0.00390625f;
  local_54.x = (float)point_b->x * _DAT_005a088c;
  local_54.y = (float)point_b->y * _DAT_005a088c;
  local_54.z = (float)point_b->z * _DAT_005a088c;
  local_60.x = local_54.x + local_24.x;
  local_60.y = local_54.y + local_24.y;
  local_60.z = local_54.z + local_24.z;
  if (&local_54 != &local_60) {
    local_54.x = local_60.x;
    local_54.y = local_60.y;
    local_54.z = local_60.z;
  }
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                     (this_ptr,&local_48,&local_24);
  if (&local_24 != pCVar1) {
    local_24.x = pCVar1->x;
    local_24.y = pCVar1->y;
    local_24.z = pCVar1->z;
  }
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                     (this_ptr,&local_18,&local_54);
  if (&local_54 != pCVar1) {
    local_54.x = pCVar1->x;
    local_54.y = pCVar1->y;
    local_54.z = pCVar1->z;
  }
  local_30.y = local_54.y - local_24.y;
  local_30.z = local_54.z - local_24.z;
  local_30.x = local_54.x - local_24.x;
  if (&local_54 != &local_30) {
    local_54.x = local_54.x - local_24.x;
    local_54.y = local_54.y - local_24.y;
    local_54.z = local_54.z - local_24.z;
  }
  local_3c = (int)ROUND(local_54.x * 65536.0f);
  local_38[0] = (int)ROUND(local_54.y * 65536.0f);
  local_38[1] = (int)ROUND(local_54.z * 65536.0f);
  piVar2 = (int *)((int)output + (uint)bVar3 * -8 + 4);
  output->x = (int)ROUND(local_54.x * 65536.0f);
  *piVar2 = local_38[(uint)bVar3 * -2];
  piVar2[(uint)bVar3 * -2 + 1] = local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return output;
}
