// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_84 */
/* WARNING: Variable defined which should be unmapped: local_b4 */

void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

{
  SRenderVertex vertex2;
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex local_b4;
  SRenderVertex local_84;
  CVector3i local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3i local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar5 = 0;
  local_84.w_recip = (float)&local_54;
  local_24 = (float)start_point->x;
  local_20 = (float)start_point->y;
  local_1c = (float)start_point->z;
  local_18 = direction_offset->x * 0.2f;
  local_14 = direction_offset->y * 0.2f;
  local_10 = 0.2f * direction_offset->z;
  local_48 = (float)start_point->x * 0.8f;
  local_44 = (float)start_point->y * 0.8f;
  local_40 = 0.8f * (float)start_point->z;
  local_3c = local_48 + local_18;
  local_38 = local_44 + local_14;
  local_34 = local_40 + local_10;
  local_54.x = (int)ROUND(local_24 * 256.0f);
  local_54.y = (int)ROUND(local_20 * 256.0f);
  local_54.z = (int)ROUND(local_1c * 256.0f);
  local_84.fog = (int)g_CDemonRendererPtr1->vertex_buffer_ptr;
  local_84.color = 0x40d3f1;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)local_84.fog,&local_54);
  local_30.x = (int)ROUND(local_3c * 256.0f);
  local_30.y = (int)ROUND(local_38 * 256.0f);
  local_30.z = (int)ROUND(local_34 * 256.0f);
  local_84.w_recip = (float)&local_30;
  local_84.fog = (int)(g_CDemonRendererPtr1->vertex_buffer_ptr + 1);
  local_84.color = 0x40d434;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)local_84.fog,(CVector3i *)local_84.w_recip);
  pSVar3 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 1;
  pSVar4 = &local_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar2 = &local_b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar2 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
  }
  vertex2.color = local_84.color;
  vertex2.projected_vertex = local_84.projected_vertex;
  vertex2.u = local_84.u;
  vertex2.v = local_84.v;
  vertex2.light = local_84.light;
  vertex2.fog = local_84.fog;
  vertex2.w_recip = local_84.w_recip;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_b4,vertex2);
  return;
}
