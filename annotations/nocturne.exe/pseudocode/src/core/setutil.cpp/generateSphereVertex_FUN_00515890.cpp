// Name: core_setutil.cpp_generateSphereVertex_FUN_00515890
// Address: 00515890
// Address Range: [[00515890, 00515976]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00515890(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00515890(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

{
  CDemonRenderer *pCVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3i local_38 [3];
  int local_c;
  
  fVar2 = (float10)longitude_index * (float10)_DAT_00590fd5 * (float10)_DAT_00590fd9 *
          (float10)_DAT_00590fe1;
  local_c = latitude_index;
  fVar3 = (float10)fsin(fVar2);
  fVar2 = (float10)fcos(fVar2);
  fVar4 = (float10)radius;
  fVar5 = (float10)latitude_index * (float10)_DAT_00590fe9 * (float10)_DAT_00590fd9 *
          (float10)_DAT_00590ff1;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  local_38[0].x = (int)ROUND((float)(fVar3 * fVar4 * fVar6) * _DAT_005a1ab0);
  local_38[0].y = (int)ROUND((float)(fVar5 * fVar4) * _DAT_005a1ab0);
  local_38[0].z = (int)ROUND((float)(fVar2 * fVar4 * fVar6) * _DAT_005a1ab0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[vertex_buffer_index].projected_vertex
             ,local_38);
  pCVar1 = g_CDemonRenderer_PTR_005ae704;
  g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[vertex_buffer_index].u = 0x800000;
  pCVar1->vertex_buffer_ptr[vertex_buffer_index].v = 0x800000;
  return;
}
