// Name: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
// Address: 004d7bd0
// Address Range: [[004d7bd0, 004d7d6f]]
// Convention: unknown
// Signature: void core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(CMirrorReflection *param_1,int *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(CMirrorReflection *param_1,int *param_2,int *param_3)

{
  CVector3f *pCVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1024 [1006];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  int local_3c;
  int local_38 [2];
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar2 = 0;
  local_24.x = (float)*param_2 * 0.00390625f;
  local_24.y = (float)param_2[1] * 0.00390625f;
  local_24.z = (float)param_2[2] * 0.00390625f;
  local_54.x = (float)*param_3 * _DAT_005a088c;
  local_54.y = (float)param_3[1] * _DAT_005a088c;
  local_54.z = (float)param_3[2] * _DAT_005a088c;
  local_60.x = local_54.x + local_24.x;
  local_60.y = local_54.y + local_24.y;
  local_60.z = local_54.z + local_24.z;
  if (&local_54 != &local_60) {
    local_54.x = local_60.x;
    local_54.y = local_60.y;
    local_54.z = local_60.z;
  }
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                     (param_1,&local_48,&local_24);
  if (&local_24 != pCVar1) {
    local_24.x = pCVar1->x;
    local_24.y = pCVar1->y;
    local_24.z = pCVar1->z;
  }
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                     (param_1,&local_18,&local_54);
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
  *unaff_ESI = (int)ROUND(local_54.x * 65536.0f);
  unaff_ESI[(uint)bVar2 * -2 + 1] = local_38[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return;
}
