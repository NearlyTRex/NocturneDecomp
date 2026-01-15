// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469]]
// Convention: __cdecl
// Signature: void core_actor.cpp_draw3DLineSegment_FUN_0040d330(CVector3i * start_point, CVector3f * direction_offset)

#include "nocturne.h"

void __cdecl
core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

{
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  SRenderVertex *in_stack_ffffff4c;
  SRenderVertex *in_stack_ffffff50;
  int aiStack_84 [9];
  uint uStack_60;
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
  local_54.x = (int)ROUND(local_24 * 256f);
  local_54.y = (int)ROUND(local_20 * 256f);
  local_54.z = (int)ROUND(local_1c * 256f);
  uStack_60 = 0x40d3f1;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_54);
  local_30.x = (int)ROUND(local_3c * 256f);
  local_30.y = (int)ROUND(local_38 * 256f);
  local_30.z = (int)ROUND(local_34 * 256f);
  uStack_60 = 0x40d434;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_30);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 1;
  piVar4 = aiStack_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  piVar4 = (int *)&stack0xffffff4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff4c,in_stack_ffffff50);
  return;
}
