// Name: core_mirror.cpp_transformMirrorVertex_FUN_005229b0
// Address: 005229b0
// Address Range: [[005229b0, 00522a4e]]
// Convention: __cdecl
// Signature: int * core_mirror.cpp_transformMirrorVertex_FUN_005229b0(SMirrorReflection * reflection, CVector3f * input_vertex, CVector3f * output_vertex)

#include "nocturne.h"

int * __cdecl
core_mirror_cpp_transformMirrorVertex_FUN_005229b0
          (SMirrorReflection *reflection,CVector3f *input_vertex,CVector3f *output_vertex)

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
  local_3c.x = (float)(int)input_vertex->x * 0.00390625f;
  local_3c.y = (float)(int)input_vertex->y * 0.00390625f;
  local_3c.z = (float)(int)input_vertex->z * 0.00390625f;
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0(reflection,&local_18,&local_3c);
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
  return unaff_ESI;
}
