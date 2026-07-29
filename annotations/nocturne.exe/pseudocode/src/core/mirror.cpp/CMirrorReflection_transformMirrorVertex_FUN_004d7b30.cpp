// Name: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
// Address: 004d7b30
// Address Range: [[004d7b30, 004d7bce]]
// Convention: unknown
// Signature: void core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30(CMirrorReflection *param_1,int *param_2)

#include "nocturne.h"

void core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30(CMirrorReflection *param_1,int *param_2)

{
  CVector3f *pCVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_100c [1009];
  CVector3f local_3c;
  CVector3f local_30;
  int local_24;
  int local_20 [2];
  CVector3f local_18;
  
  bVar2 = 0;
  local_3c.x = (float)*param_2 * 0.00390625f;
  local_3c.y = (float)param_2[1] * 0.00390625f;
  local_3c.z = (float)param_2[2] * 0.00390625f;
  pCVar1 = core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                     (param_1,&local_18,&local_3c);
  if (&local_30 != pCVar1) {
    local_30.x = pCVar1->x;
    local_30.y = pCVar1->y;
    local_30.z = pCVar1->z;
  }
  local_24 = (int)ROUND(local_30.x * 256.0f);
  local_20[0] = (int)ROUND(local_30.y * 256.0f);
  local_20[1] = (int)ROUND(local_30.z * 256.0f);
  *unaff_ESI = (int)ROUND(local_30.x * 256.0f);
  unaff_ESI[(uint)bVar2 * -2 + 1] = local_20[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       local_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return;
}
