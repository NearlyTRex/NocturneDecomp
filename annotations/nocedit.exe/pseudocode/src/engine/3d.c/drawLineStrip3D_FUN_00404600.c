// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// Address Range: [[00404600, 0040468f] [00599474, 0059952c] [03fc2964, 03fc2a23]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  int iVar1;
  SLineStrip *pSVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  uint *puVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  bVar7 = 0;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  pSVar2 = line_strip + 1;
  while (iVar3 < line_strip->vertex_count + -1) {
    iVar31 = pSVar2->primitive_type;
    local_40.projected_vertex.transformed_x =
         g_RenderVertexBuffer[iVar31].projected_vertex.transformed_x;
    local_40.projected_vertex.transformed_y =
         g_RenderVertexBuffer[iVar31].projected_vertex.transformed_y;
    local_40.projected_vertex.transformed_z =
         g_RenderVertexBuffer[iVar31].projected_vertex.transformed_z;
    local_40.projected_vertex.inv_z = g_RenderVertexBuffer[iVar31].projected_vertex.inv_z;
    local_40.projected_vertex.screen_x = g_RenderVertexBuffer[iVar31].projected_vertex.screen_x;
    local_40.projected_vertex.screen_y = g_RenderVertexBuffer[iVar31].projected_vertex.screen_y;
    local_40.u = g_RenderVertexBuffer[iVar31].u;
    local_40.v = g_RenderVertexBuffer[iVar31].v;
    local_40.r = g_RenderVertexBuffer[iVar31].r;
    local_40.g = g_RenderVertexBuffer[iVar31].g;
    local_40.b = g_RenderVertexBuffer[iVar31].b;
    local_40.a = g_RenderVertexBuffer[iVar31].a;
    iVar31 = pSVar2->vertex_count;
    iVar20 = g_RenderVertexBuffer[iVar31].projected_vertex.transformed_x;
    local_70.projected_vertex.transformed_x = iVar20;
    iVar21 = g_RenderVertexBuffer[iVar31].projected_vertex.transformed_y;
    local_70.projected_vertex.transformed_y = iVar21;
    iVar22 = g_RenderVertexBuffer[iVar31].projected_vertex.transformed_z;
    local_70.projected_vertex.transformed_z = iVar22;
    iVar23 = g_RenderVertexBuffer[iVar31].projected_vertex.inv_z;
    local_70.projected_vertex.inv_z = iVar23;
    iVar24 = g_RenderVertexBuffer[iVar31].projected_vertex.screen_x;
    local_70.projected_vertex.screen_x = iVar24;
    iVar25 = g_RenderVertexBuffer[iVar31].projected_vertex.screen_y;
    local_70.projected_vertex.screen_y = iVar25;
    iVar26 = g_RenderVertexBuffer[iVar31].u;
    local_70.u = iVar26;
    iVar27 = g_RenderVertexBuffer[iVar31].v;
    local_70.v = iVar27;
    iVar28 = g_RenderVertexBuffer[iVar31].r;
    local_70.r = iVar28;
    iVar29 = g_RenderVertexBuffer[iVar31].g;
    local_70.g = iVar29;
    iVar30 = g_RenderVertexBuffer[iVar31].b;
    local_70.b = iVar30;
    iVar31 = g_RenderVertexBuffer[iVar31].a;
    local_70.a = iVar31;
    pSVar4 = &local_70;
    puVar5 = (uint *)&stack0xffffff60;
    for (iVar1 = local_70.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *(uint *)pSVar4;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    pSVar2 = (SLineStrip *)&pSVar2->vertex_count;
    iVar3 = iVar3 + 1;
    pSVar4 = &local_40;
    piVar6 = (int *)&stack0xffffff30;
    iVar8 = local_40.projected_vertex.transformed_x;
    iVar9 = local_40.projected_vertex.transformed_y;
    iVar10 = local_40.projected_vertex.transformed_z;
    iVar11 = local_40.projected_vertex.inv_z;
    iVar12 = local_40.projected_vertex.screen_x;
    iVar13 = local_40.projected_vertex.screen_y;
    iVar14 = local_40.u;
    iVar15 = local_40.v;
    iVar16 = local_40.r;
    iVar17 = local_40.g;
    iVar18 = local_40.b;
    iVar19 = local_40.a;
    for (iVar1 = local_40.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    vertex1.projected_vertex.transformed_y = iVar9;
    vertex1.projected_vertex.transformed_x = iVar8;
    vertex1.projected_vertex.transformed_z = iVar10;
    vertex1.projected_vertex.inv_z = iVar11;
    vertex1.projected_vertex.screen_x = iVar12;
    vertex1.projected_vertex.screen_y = iVar13;
    vertex1.u = iVar14;
    vertex1.v = iVar15;
    vertex1.r = iVar16;
    vertex1.g = iVar17;
    vertex1.b = iVar18;
    vertex1.a = iVar19;
    vertex2.projected_vertex.transformed_y = iVar21;
    vertex2.projected_vertex.transformed_x = iVar20;
    vertex2.projected_vertex.transformed_z = iVar22;
    vertex2.projected_vertex.inv_z = iVar23;
    vertex2.projected_vertex.screen_x = iVar24;
    vertex2.projected_vertex.screen_y = iVar25;
    vertex2.u = iVar26;
    vertex2.v = iVar27;
    vertex2.r = iVar28;
    vertex2.g = iVar29;
    vertex2.b = iVar30;
    vertex2.a = iVar31;
    engine_3d_c_clipAndDrawLine3D_FUN_00408070(vertex1,vertex2);
  }
  return;
}
