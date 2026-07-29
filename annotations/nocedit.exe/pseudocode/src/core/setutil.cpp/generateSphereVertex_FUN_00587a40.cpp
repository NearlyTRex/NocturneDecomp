// Name: core_setutil.cpp_generateSphereVertex_FUN_00587a40
// Address: 00587a40
// Address Range: [[00587a40, 00587b26]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00587a40(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

#include "nocturne.h"

void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00587a40(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

{
  float10 fVar2;
  float10 fVar3;
  float10 fVar1;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3i local_38 [3];
  int local_c;
  CDemonRenderer *pCVar1;
  
  fVar2 = (float10)longitude_index * (float10)0.0625f * (float10)3.1415926535000001 *
          (float10)2;
  fVar3 = (float10)fsin(fVar2);
  fVar1 = (float10)fcos(fVar2);
  fVar4 = (float10)radius;
  fVar5 = (float10)latitude_index * (float10)0.25f * (float10)3.1415926535000001 *
          (float10)0.5;
  fVar6 = (float10)fcos(fVar5);
  fVar7 = (float10)fsin(fVar5);
  local_38[0].x = (int)ROUND((float)(fVar3 * fVar4 * fVar6) * 256.0f);
  local_38[0].y = (int)ROUND((float)(fVar7 * fVar4) * 256.0f);
  local_38[0].z = (int)ROUND((float)(fVar1 * fVar4 * fVar6) * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[vertex_buffer_index].projected_vertex,local_38
            );
  pCVar1 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr[vertex_buffer_index].u = 0x800000;
  pCVar1->vertex_buffer_ptr[vertex_buffer_index].v = 0x800000;
  return;
}
