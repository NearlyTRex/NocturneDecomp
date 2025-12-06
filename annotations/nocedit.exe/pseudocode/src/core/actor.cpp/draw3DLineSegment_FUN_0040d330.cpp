// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469]]
// Convention: __cdecl
// Signature: void core_actor.cpp_draw3DLineSegment_FUN_0040d330(CVector3i * start_point, CVector3f * direction_offset)

#include "nocturne.h"

void __cdecl
core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

{
  float fVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  SRenderVertex *in_stack_ffffff54;
  SRenderVertex *in_stack_ffffff58;
  int aiStack_7c [7];
  uint uStack_60;
  float local_30;
  CVector3i local_2c;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar7 = 0;
  local_2c.z = start_point->x;
  local_20 = start_point->y;
  local_1c = start_point->z;
  local_18 = direction_offset->x * 0.2f;
  local_14 = direction_offset->y * 0.2f;
  local_10 = 0.2f * direction_offset->z;
  fVar1 = (float)start_point->y * 0.8f + local_14;
  fVar2 = 0.8f * (float)start_point->z + local_10;
  uStack_60 = 0x40d3f1;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xffffffac
            );
  local_2c.x = (int)ROUND(fVar1 * 256f);
  local_2c.y = (int)ROUND(fVar2 * 256f);
  local_2c.z = (int)ROUND(local_30 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_2c);
  pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 1;
  piVar6 = aiStack_7c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  piVar6 = (int *)&stack0xffffff54;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff54,in_stack_ffffff58);
  return;
}
