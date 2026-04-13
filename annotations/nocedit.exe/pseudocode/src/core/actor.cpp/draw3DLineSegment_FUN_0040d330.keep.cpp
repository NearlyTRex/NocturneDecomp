// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// MANUAL RECONSTRUCTION
// Address Range: [[0040d330, 0040d469] [00604780, 00604830]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3f *start_point,CVector3f *direction_offset)

#include "nocturne.h"

void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3f *start_point,CVector3f *direction_offset)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3i local_54;
  CVector3i local_30;
  SRenderVertex *pSVar10;

  fVar1 = direction_offset->x * 0.2f;
  fVar2 = direction_offset->y * 0.2f;
  fVar3 = 0.2f * direction_offset->z;
  fVar4 = start_point->x * 0.8f;
  fVar5 = start_point->y * 0.8f;
  fVar6 = 0.8f * start_point->z;

  local_54.x = (int)ROUND(start_point->x * 256.0f);
  local_54.y = (int)ROUND(start_point->y * 256.0f);
  local_54.z = (int)ROUND(start_point->z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_54);

  local_30.x = (int)ROUND((fVar4 + fVar1) * 256.0f);
  local_30.y = (int)ROUND((fVar5 + fVar2) * 256.0f);
  local_30.z = (int)ROUND((fVar6 + fVar3) * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_30);

  pSVar10 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar10[0], pSVar10[1]);
  return;
}
