// Name: core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
// Address: 00522a50
// Address Range: [[00522a50, 00522bef]]
// Convention: __cdecl
// Signature: CVector3i * core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CVector3i * output, SMirrorReflection * reflection, CVector3i * point_a, CVector3i * point_b)

#include "nocturne.h"

CVector3i * __cdecl
core_mirror_cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
          (CVector3i *output,SMirrorReflection *reflection,CVector3i *point_a,CVector3i *point_b)

{
  CVector3f *pCVar1;
  CVector3i *unaff_ESI;
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
  local_24.x = (float)(int)(reflection->corner1).x * 0.00390625f;
  local_24.y = (float)(int)(reflection->corner1).y * 0.00390625f;
  local_24.z = (float)(int)(reflection->corner1).z * 0.00390625f;
  local_54.x = (float)point_a->x * 1.525879e-05f;
  local_54.y = (float)point_a->y * 1.525879e-05f;
  local_54.z = (float)point_a->z * 1.525879e-05f;
  local_60.x = local_54.x + local_24.x;
  local_60.y = local_54.y + local_24.y;
  local_60.z = local_54.z + local_24.z;
  if (&local_54 != &local_60) {
    local_54.x = local_60.x;
    local_54.y = local_60.y;
    local_54.z = local_60.z;
  }
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0
                     ((SMirrorReflection *)output,&local_48,&local_24);
  if (&local_24 != pCVar1) {
    local_24.x = pCVar1->x;
    local_24.y = pCVar1->y;
    local_24.z = pCVar1->z;
  }
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0
                     ((SMirrorReflection *)output,&local_18,&local_54);
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
  local_3c = (int)ROUND(local_54.x * 65536f);
  local_38[0] = (int)ROUND(local_54.y * 65536f);
  local_38[1] = (int)ROUND(local_54.z * 65536f);
  piVar2 = (int *)((int)unaff_ESI + (uint)bVar3 * -8 + 4);
  unaff_ESI->x = (int)ROUND(local_54.x * 65536f);
  *piVar2 = local_38[(uint)bVar3 * -2];
  piVar2[(uint)bVar3 * -2 + 1] = local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return unaff_ESI;
}
