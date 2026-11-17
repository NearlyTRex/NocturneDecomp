// Name: core_setutil.cpp_generateSphereVertex_FUN_0055d610
// Address: 0055d610
// Address Range: [[0055d610, 0055d6f6]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_generateSphereVertex_FUN_0055d610(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

#include "nocturne.h"

void __cdecl core_setutil_cpp_generateSphereVertex_FUN_0055d610(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

{
  CDemonRenderer *pCVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3i aCStack_38 [3];
  int iStack_c;
  
  fVar2 = (float10)longitude_index * (float10)0.0625f * (float10)3.141593f *
          (float10)2;
  iStack_c = latitude_index;
  fVar3 = (float10)fsin(fVar2);
  fVar2 = (float10)fcos(fVar2);
  fVar4 = (float10)radius;
  fVar5 = (float10)latitude_index * (float10)0.25f * (float10)3.141593f *
          (float10)0.5;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  aCStack_38[0].x = (int)ROUND((float)(fVar3 * fVar4 * fVar6) * 256.0f);
  aCStack_38[0].y = (int)ROUND((float)(fVar5 * fVar4) * 256.0f);
  aCStack_38[0].z = (int)ROUND((float)(fVar2 * fVar4 * fVar6) * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[vertex_buffer_index].projected_vertex
             ,aCStack_38);
  pCVar1 = g_CDemonRenderer_PTR_00612560;
  g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[vertex_buffer_index].u = 0x800000;
  pCVar1->vertex_buffer_ptr[vertex_buffer_index].v = 0x800000;
  return;
}
