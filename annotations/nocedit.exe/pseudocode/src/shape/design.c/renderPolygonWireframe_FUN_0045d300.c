// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462] [00603048, 006031b3]]
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
  SRenderVertex *pSVar3;
  int *piVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
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
  int iVar28;
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
      pSVar2 = g_RenderVertexBuffer + (&(pSVar1->base).type)[local_18];
      pSVar3 = &local_78;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
      }
      pSVar2 = g_RenderVertexBuffer + (&(pSVar1->base).count)[local_18];
      pSVar3 = &local_48;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
      }
      pSVar2 = &local_48;
      pSVar3 = &local_a8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
      }
      pSVar2 = &local_a8;
      piVar4 = (int *)&stack0xffffff28;
      iVar17 = local_a8.projected_vertex.transformed_x;
      iVar18 = local_a8.projected_vertex.transformed_y;
      iVar19 = local_a8.projected_vertex.transformed_z;
      iVar20 = local_a8.projected_vertex.inv_z;
      iVar21 = local_a8.projected_vertex.screen_x;
      iVar22 = local_a8.projected_vertex.screen_y;
      iVar23 = local_a8.u;
      iVar24 = local_a8.v;
      iVar25 = local_a8.r;
      iVar26 = local_a8.g;
      iVar27 = local_a8.b;
      iVar28 = local_a8.a;
      for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      }
      pSVar2 = &local_78;
      pSVar3 = &local_a8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
      }
      pSVar2 = &local_a8;
      piVar4 = (int *)&stack0xfffffef8;
      iVar5 = local_a8.projected_vertex.transformed_x;
      iVar6 = local_a8.projected_vertex.transformed_y;
      iVar7 = local_a8.projected_vertex.transformed_z;
      iVar8 = local_a8.projected_vertex.inv_z;
      iVar9 = local_a8.projected_vertex.screen_x;
      iVar10 = local_a8.projected_vertex.screen_y;
      iVar11 = local_a8.u;
      iVar12 = local_a8.v;
      iVar13 = local_a8.r;
      iVar14 = local_a8.g;
      iVar15 = local_a8.b;
      iVar16 = local_a8.a;
      for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      }
      vertex1.projected_vertex.transformed_y = iVar6;
      vertex1.projected_vertex.transformed_x = iVar5;
      vertex1.projected_vertex.transformed_z = iVar7;
      vertex1.projected_vertex.inv_z = iVar8;
      vertex1.projected_vertex.screen_x = iVar9;
      vertex1.projected_vertex.screen_y = iVar10;
      vertex1.u = iVar11;
      vertex1.v = iVar12;
      vertex1.r = iVar13;
      vertex1.g = iVar14;
      vertex1.b = iVar15;
      vertex1.a = iVar16;
      vertex2.projected_vertex.transformed_y = iVar18;
      vertex2.projected_vertex.transformed_x = iVar17;
      vertex2.projected_vertex.transformed_z = iVar19;
      vertex2.projected_vertex.inv_z = iVar20;
      vertex2.projected_vertex.screen_x = iVar21;
      vertex2.projected_vertex.screen_y = iVar22;
      vertex2.u = iVar23;
      vertex2.v = iVar24;
      vertex2.r = iVar25;
      vertex2.g = iVar26;
      vertex2.b = iVar27;
      vertex2.a = iVar28;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
    }
    pSVar2 = g_RenderVertexBuffer + *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    pSVar3 = &local_78;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
    }
    pSVar2 = g_RenderVertexBuffer + (pSVar1->base).type;
    pSVar3 = &local_48;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
    }
    pSVar2 = &local_48;
    pSVar3 = &local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar7 * -8 + 4);
    }
    pSVar2 = &local_a8;
    piVar4 = (int *)&stack0xffffff28;
    iVar17 = local_a8.projected_vertex.transformed_x;
    iVar18 = local_a8.projected_vertex.transformed_y;
    iVar19 = local_a8.projected_vertex.transformed_z;
    iVar20 = local_a8.projected_vertex.inv_z;
    iVar21 = local_a8.projected_vertex.screen_x;
    iVar22 = local_a8.projected_vertex.screen_y;
    iVar23 = local_a8.u;
    iVar24 = local_a8.v;
    iVar25 = local_a8.r;
    iVar26 = local_a8.g;
    iVar27 = local_a8.b;
    iVar28 = local_a8.a;
    for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    }
    pSVar2 = &local_78;
    pSVar5 = &local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      (pSVar5->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar7 * -8 + 4);
      pSVar5 = pSVar5;
    }
    pSVar4 = &local_a8;
    piVar6 = (int *)&stack0xfffffef8;
    for (iVar1 = local_a8.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = pSVar4;
      piVar6 = piVar6;
    }
    vertex1_00.projected_vertex.transformed_y = local_a8.projected_vertex.transformed_y;
    vertex1_00.projected_vertex.transformed_x = local_a8.projected_vertex.transformed_x;
    vertex1_00.projected_vertex.transformed_z = local_a8.projected_vertex.transformed_z;
    vertex1_00.projected_vertex.inv_z = local_a8.projected_vertex.inv_z;
    vertex1_00.projected_vertex.screen_x = local_a8.projected_vertex.screen_x;
    vertex1_00.projected_vertex.screen_y = local_a8.projected_vertex.screen_y;
    vertex1_00.u = local_a8.u;
    vertex1_00.v = local_a8.v;
    vertex1_00.r = local_a8.r;
    vertex1_00.g = local_a8.g;
    vertex1_00.b = local_a8.b;
    vertex1_00.a = local_a8.a;
    vertex2_00.projected_vertex.transformed_y = iVar18;
    vertex2_00.projected_vertex.transformed_x = iVar17;
    vertex2_00.projected_vertex.transformed_z = iVar19;
    vertex2_00.projected_vertex.inv_z = iVar20;
    vertex2_00.projected_vertex.screen_x = iVar21;
    vertex2_00.projected_vertex.screen_y = iVar22;
    vertex2_00.u = iVar23;
    vertex2_00.v = iVar24;
    vertex2_00.r = iVar25;
    vertex2_00.g = iVar26;
    vertex2_00.b = iVar27;
    vertex2_00.a = iVar28;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
  }
  return;
}
