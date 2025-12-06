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
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1008 [1008];
  CVector3f local_3c;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  CVector3f local_18;
  
  bVar2 = 0;
  local_3c.x = (float)(int)input_vertex->x * 0.00390625f;
  local_3c.y = (float)(int)input_vertex->y * 0.00390625f;
  local_3c.z = (float)(int)input_vertex->z * 0.00390625f;
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0(reflection,&local_18,&local_3c);
  if (&local_2c != pCVar1) {
    local_2c.x = pCVar1->x;
    local_2c.y = pCVar1->y;
    local_2c.z = pCVar1->z;
  }
  local_20 = (int)ROUND(local_2c.x * 256f);
  local_1c = (int)ROUND(local_2c.y * 256f);
  local_18.x = (float)(int)ROUND(local_2c.z * 256f);
  *unaff_ESI = (int)ROUND(local_2c.x * 256f);
  unaff_ESI[(uint)bVar2 * -2 + 1] = (&local_1c)[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return unaff_ESI;
}
