// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive * polygon_data)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  int iVar1;
  SRenderVertex *pSVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  SRenderVertex in_stack_fffffef8;
  byte auVar8 [24];
  byte in_stack_ffffff28 [40];
  uint uVar9;
  float fVar10;
  uint local_a8 [12];
  int local_78 [12];
  int local_48 [12];
  int local_18;
  SMRGLHeaderPrimitive *local_14;
  
  bVar7 = 0;
  local_14 = polygon_data + 1;
  uVar9 = 0x45d321;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar1 != 0) {
    fVar10 = 6.41241e-39;
    engine_3d_c_setActiveRenderColor_FUN_00404540();
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      pSVar2 = g_RenderVertexBuffer + (&(local_14->base).type)[local_18];
      piVar3 = local_78;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      }
      pSVar2 = g_RenderVertexBuffer + (&(local_14->base).count)[local_18];
      piVar3 = local_48;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      }
      piVar3 = local_48;
      piVar5 = local_a8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      }
      puVar4 = local_a8;
      puVar6 = (uint *)&stack0xffffff28;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      piVar3 = local_78;
      piVar5 = local_a8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      }
      puVar4 = local_a8;
      puVar6 = (uint *)&stack0xfffffef8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      vertex2.fog = (float)uVar9;
      auVar8 = in_stack_ffffff28._0_24_;
      vertex2.projected_vertex.transformed_x = auVar8._0_4_;
      vertex2.projected_vertex.transformed_y = auVar8._4_4_;
      vertex2.projected_vertex.transformed_z = auVar8._8_4_;
      vertex2.projected_vertex.inv_z = auVar8._12_4_;
      vertex2.projected_vertex.screen_x = auVar8._16_4_;
      vertex2.projected_vertex.screen_y = auVar8._20_4_;
      vertex2.u = (float)in_stack_ffffff28._24_4_;
      vertex2.v = (float)in_stack_ffffff28._28_4_;
      vertex2.light = (float)in_stack_ffffff28._32_4_;
      vertex2.color = in_stack_ffffff28._36_4_;
      vertex2.w_recip = fVar10;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffef8,vertex2);
    }
    pSVar2 = g_RenderVertexBuffer + *(int *)((int)local_14 + (polygon_data->base).count * 4 + -4);
    piVar3 = local_78;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
    }
    pSVar2 = g_RenderVertexBuffer + (local_14->base).type;
    piVar3 = local_48;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
    }
    piVar3 = local_48;
    piVar5 = local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    }
    puVar4 = local_a8;
    puVar6 = (uint *)&stack0xffffff28;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar3 = local_78;
    piVar5 = local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    }
    puVar4 = local_a8;
    puVar6 = (uint *)&stack0xfffffef8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    vertex2_00.fog = (float)uVar9;
    auVar8 = in_stack_ffffff28._0_24_;
    vertex2_00.projected_vertex.transformed_x = auVar8._0_4_;
    vertex2_00.projected_vertex.transformed_y = auVar8._4_4_;
    vertex2_00.projected_vertex.transformed_z = auVar8._8_4_;
    vertex2_00.projected_vertex.inv_z = auVar8._12_4_;
    vertex2_00.projected_vertex.screen_x = auVar8._16_4_;
    vertex2_00.projected_vertex.screen_y = auVar8._20_4_;
    vertex2_00.u = (float)in_stack_ffffff28._24_4_;
    vertex2_00.v = (float)in_stack_ffffff28._28_4_;
    vertex2_00.light = (float)in_stack_ffffff28._32_4_;
    vertex2_00.color = in_stack_ffffff28._36_4_;
    vertex2_00.w_recip = fVar10;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffef8,vertex2_00);
  }
  return;
}
