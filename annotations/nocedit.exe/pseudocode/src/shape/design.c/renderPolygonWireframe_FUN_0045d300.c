// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462] [00603048, 006031b3] [03fc0ba8, 03fc0eaf]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar4;
  int *piVar3;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  SRenderVertex local_a8;
  SRenderVertex local_78;
  SRenderVertex local_48;
  int local_18;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2;
  SRenderVertex in_stack_fffffef8;
  
  bVar7 = 0;
  pSVar1 = polygon_data + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    engine_3d_c_setActiveRenderColor_FUN_00404540();
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      iVar27 = (&(pSVar1->base).type)[local_18];
      iVar4 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_x;
      iVar5 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_y;
      iVar6 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_z;
      iVar7 = g_RenderVertexBuffer[iVar27].projected_vertex.inv_z;
      iVar8 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_x;
      iVar9 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_y;
      iVar10 = g_RenderVertexBuffer[iVar27].u;
      iVar11 = g_RenderVertexBuffer[iVar27].v;
      iVar12 = g_RenderVertexBuffer[iVar27].r;
      iVar13 = g_RenderVertexBuffer[iVar27].g;
      iVar14 = g_RenderVertexBuffer[iVar27].b;
      iVar15 = g_RenderVertexBuffer[iVar27].a;
      iVar27 = (&(pSVar1->base).count)[local_18];
      iVar16 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_x;
      iVar17 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_y;
      iVar18 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_z;
      iVar19 = g_RenderVertexBuffer[iVar27].projected_vertex.inv_z;
      iVar20 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_x;
      iVar21 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_y;
      iVar22 = g_RenderVertexBuffer[iVar27].u;
      iVar23 = g_RenderVertexBuffer[iVar27].v;
      iVar24 = g_RenderVertexBuffer[iVar27].r;
      iVar25 = g_RenderVertexBuffer[iVar27].g;
      iVar26 = g_RenderVertexBuffer[iVar27].b;
      iVar27 = g_RenderVertexBuffer[iVar27].a;
      local_a8.projected_vertex.transformed_x = iVar16;
      local_a8.projected_vertex.transformed_y = iVar17;
      local_a8.projected_vertex.transformed_z = iVar18;
      local_a8.projected_vertex.inv_z = iVar19;
      local_a8.projected_vertex.screen_x = iVar20;
      local_a8.projected_vertex.screen_y = iVar21;
      local_a8.u = iVar22;
      local_a8.v = iVar23;
      local_a8.r = iVar24;
      local_a8.g = iVar25;
      local_a8.b = iVar26;
      local_a8.a = iVar27;
      pSVar2 = &local_a8;
      piVar3 = (int *)&stack0xffffff28;
      for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      }
      local_a8.projected_vertex.transformed_x = iVar4;
      local_a8.projected_vertex.transformed_y = iVar5;
      local_a8.projected_vertex.transformed_z = iVar6;
      local_a8.projected_vertex.inv_z = iVar7;
      local_a8.projected_vertex.screen_x = iVar8;
      local_a8.projected_vertex.screen_y = iVar9;
      local_a8.u = iVar10;
      local_a8.v = iVar11;
      local_a8.r = iVar12;
      local_a8.g = iVar13;
      local_a8.b = iVar14;
      local_a8.a = iVar15;
      pSVar2 = &local_a8;
      piVar3 = (int *)&stack0xfffffef8;
      for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      }
      vertex1.projected_vertex.transformed_y = iVar5;
      vertex1.projected_vertex.transformed_x = iVar4;
      vertex1.projected_vertex.transformed_z = iVar6;
      vertex1.projected_vertex.inv_z = iVar7;
      vertex1.projected_vertex.screen_x = iVar8;
      vertex1.projected_vertex.screen_y = iVar9;
      vertex1.u = iVar10;
      vertex1.v = iVar11;
      vertex1.r = iVar12;
      vertex1.g = iVar13;
      vertex1.b = iVar14;
      vertex1.a = iVar15;
      vertex2.projected_vertex.transformed_y = iVar17;
      vertex2.projected_vertex.transformed_x = iVar16;
      vertex2.projected_vertex.transformed_z = iVar18;
      vertex2.projected_vertex.inv_z = iVar19;
      vertex2.projected_vertex.screen_x = iVar20;
      vertex2.projected_vertex.screen_y = iVar21;
      vertex2.u = iVar22;
      vertex2.v = iVar23;
      vertex2.r = iVar24;
      vertex2.g = iVar25;
      vertex2.b = iVar26;
      vertex2.a = iVar27;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
    }
    iVar27 = *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    iVar4 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_x;
    iVar5 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_y;
    iVar6 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_z;
    iVar7 = g_RenderVertexBuffer[iVar27].projected_vertex.inv_z;
    iVar8 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_x;
    iVar9 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_y;
    iVar10 = g_RenderVertexBuffer[iVar27].u;
    iVar11 = g_RenderVertexBuffer[iVar27].v;
    iVar12 = g_RenderVertexBuffer[iVar27].r;
    iVar13 = g_RenderVertexBuffer[iVar27].g;
    iVar14 = g_RenderVertexBuffer[iVar27].b;
    iVar15 = g_RenderVertexBuffer[iVar27].a;
    iVar27 = (pSVar1->base).type;
    iVar16 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_x;
    iVar17 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_y;
    iVar18 = g_RenderVertexBuffer[iVar27].projected_vertex.transformed_z;
    iVar19 = g_RenderVertexBuffer[iVar27].projected_vertex.inv_z;
    iVar20 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_x;
    iVar21 = g_RenderVertexBuffer[iVar27].projected_vertex.screen_y;
    iVar22 = g_RenderVertexBuffer[iVar27].u;
    iVar23 = g_RenderVertexBuffer[iVar27].v;
    iVar24 = g_RenderVertexBuffer[iVar27].r;
    iVar25 = g_RenderVertexBuffer[iVar27].g;
    iVar26 = g_RenderVertexBuffer[iVar27].b;
    iVar27 = g_RenderVertexBuffer[iVar27].a;
    local_a8.projected_vertex.transformed_x = iVar16;
    local_a8.projected_vertex.transformed_y = iVar17;
    local_a8.projected_vertex.transformed_z = iVar18;
    local_a8.projected_vertex.inv_z = iVar19;
    local_a8.projected_vertex.screen_x = iVar20;
    local_a8.projected_vertex.screen_y = iVar21;
    local_a8.u = iVar22;
    local_a8.v = iVar23;
    local_a8.r = iVar24;
    local_a8.g = iVar25;
    local_a8.b = iVar26;
    local_a8.a = iVar27;
    pSVar2 = &local_a8;
    piVar3 = (int *)&stack0xffffff28;
    for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
    }
    local_a8.projected_vertex.transformed_x = iVar4;
    local_a8.projected_vertex.transformed_y = iVar5;
    local_a8.projected_vertex.transformed_z = iVar6;
    local_a8.projected_vertex.inv_z = iVar7;
    local_a8.projected_vertex.screen_x = iVar8;
    local_a8.projected_vertex.screen_y = iVar9;
    local_a8.u = iVar10;
    local_a8.v = iVar11;
    local_a8.r = iVar12;
    local_a8.g = iVar13;
    local_a8.b = iVar14;
    local_a8.a = iVar15;
    pSVar4 = &local_a8;
    piVar6 = (int *)&stack0xfffffef8;
    for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = pSVar4;
      piVar6 = piVar6;
    }
    vertex1_00.projected_vertex.transformed_y = iVar5;
    vertex1_00.projected_vertex.transformed_x = iVar4;
    vertex1_00.projected_vertex.transformed_z = iVar6;
    vertex1_00.projected_vertex.inv_z = iVar7;
    vertex1_00.projected_vertex.screen_x = iVar8;
    vertex1_00.projected_vertex.screen_y = iVar9;
    vertex1_00.u = iVar10;
    vertex1_00.v = iVar11;
    vertex1_00.r = iVar12;
    vertex1_00.g = iVar13;
    vertex1_00.b = iVar14;
    vertex1_00.a = iVar15;
    vertex2_00.projected_vertex.transformed_y = iVar17;
    vertex2_00.projected_vertex.transformed_x = iVar16;
    vertex2_00.projected_vertex.transformed_z = iVar18;
    vertex2_00.projected_vertex.inv_z = iVar19;
    vertex2_00.projected_vertex.screen_x = iVar20;
    vertex2_00.projected_vertex.screen_y = iVar21;
    vertex2_00.u = iVar22;
    vertex2_00.v = iVar23;
    vertex2_00.r = iVar24;
    vertex2_00.g = iVar25;
    vertex2_00.b = iVar26;
    vertex2_00.a = iVar27;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
  }
  return;
}
