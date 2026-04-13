// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469] [00604780, 00604830]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3f *start_point,CVector3f *direction_offset)

#include "nocturne.h"

void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3f *start_point,CVector3f *direction_offset)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  int *piVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
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
  
  bVar12 = 0;
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
  iVar24 = pSVar10[1].projected_vertex.transformed_x;
  iVar25 = pSVar10[1].projected_vertex.transformed_y;
  iVar26 = pSVar10[1].projected_vertex.transformed_z;
  iVar27 = pSVar10[1].projected_vertex.inv_z;
  iVar28 = pSVar10[1].projected_vertex.screen_x;
  iVar29 = pSVar10[1].projected_vertex.screen_y;
  iVar30 = pSVar10[1].u;
  iVar31 = pSVar10[1].v;
  iVar32 = pSVar10[1].r;
  iVar33 = pSVar10[1].g;
  iVar34 = pSVar10[1].b;
  iVar7 = pSVar10[1].a;
  pSVar9 = pSVar10 + 1;
  piVar11 = (int *)&stack0xffffff7c;
  iVar35 = iVar7;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = (pSVar9->projected_vertex).transformed_x;
    pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  iVar7 = (pSVar10->projected_vertex).transformed_x;
  iVar13 = (pSVar10->projected_vertex).transformed_y;
  iVar14 = (pSVar10->projected_vertex).transformed_z;
  iVar15 = (pSVar10->projected_vertex).inv_z;
  iVar16 = (pSVar10->projected_vertex).screen_x;
  iVar17 = (pSVar10->projected_vertex).screen_y;
  iVar18 = pSVar10->u;
  iVar19 = pSVar10->v;
  iVar20 = pSVar10->r;
  iVar21 = pSVar10->g;
  iVar22 = pSVar10->b;
  iVar8 = pSVar10->a;
  piVar11 = (int *)&stack0xffffff4c;
  iVar23 = iVar8;
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar12 * -2 + 1) * 4);
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  vertex1.projected_vertex.transformed_y = iVar13;
  vertex1.projected_vertex.transformed_x = iVar7;
  vertex1.projected_vertex.transformed_z = iVar14;
  vertex1.projected_vertex.inv_z = iVar15;
  vertex1.projected_vertex.screen_x = iVar16;
  vertex1.projected_vertex.screen_y = iVar17;
  vertex1.u = iVar18;
  vertex1.v = iVar19;
  vertex1.r = iVar20;
  vertex1.g = iVar21;
  vertex1.b = iVar22;
  vertex1.a = iVar23;
  vertex2.projected_vertex.transformed_y = iVar25;
  vertex2.projected_vertex.transformed_x = iVar24;
  vertex2.projected_vertex.transformed_z = iVar26;
  vertex2.projected_vertex.inv_z = iVar27;
  vertex2.projected_vertex.screen_x = iVar28;
  vertex2.projected_vertex.screen_y = iVar29;
  vertex2.u = iVar30;
  vertex2.v = iVar31;
  vertex2.r = iVar32;
  vertex2.g = iVar33;
  vertex2.b = iVar34;
  vertex2.a = iVar35;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
  return;
}
