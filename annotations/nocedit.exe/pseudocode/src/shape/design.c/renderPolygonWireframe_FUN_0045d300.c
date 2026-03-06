// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  SRenderVertex in_stack_fffffef8;
  byte auVar8 [24];
  byte in_stack_ffffff28 [40];
  uint uVar9;
  SRenderVertex local_a8;
  SRenderVertex local_78;
  SRenderVertex local_48;
  int local_18;
  
  bVar7 = 0;
  pSVar1 = polygon_data + 1;
  uVar9 = 0x45d321;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    iVar2 = 0x45d331;
    engine_3d_c_setActiveRenderColor_FUN_00404540();
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      pSVar4 = g_RenderVertexBuffer + (&(pSVar1->base).type)[local_18];
      pSVar5 = &local_78;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
        pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      }
      pSVar4 = g_RenderVertexBuffer + (&(pSVar1->base).count)[local_18];
      pSVar5 = &local_48;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
        pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      }
      pSVar4 = &local_48;
      pSVar5 = &local_a8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
        pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      }
      pSVar4 = &local_a8;
      piVar6 = (int *)&stack0xffffff28;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      pSVar4 = &local_78;
      pSVar5 = &local_a8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
        pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      }
      pSVar4 = &local_a8;
      piVar6 = (int *)&stack0xfffffef8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      vertex2.g = uVar9;
      auVar8 = in_stack_ffffff28._0_24_;
      vertex2.projected_vertex.transformed_x = auVar8._0_4_;
      vertex2.projected_vertex.transformed_y = auVar8._4_4_;
      vertex2.projected_vertex.transformed_z = auVar8._8_4_;
      vertex2.projected_vertex.inv_z = auVar8._12_4_;
      vertex2.projected_vertex.screen_x = auVar8._16_4_;
      vertex2.projected_vertex.screen_y = auVar8._20_4_;
      vertex2.u = in_stack_ffffff28._24_4_;
      vertex2.v = in_stack_ffffff28._28_4_;
      vertex2.z = in_stack_ffffff28._32_4_;
      vertex2.r = in_stack_ffffff28._36_4_;
      vertex2.fog = iVar2;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffef8,vertex2);
    }
    pSVar4 = g_RenderVertexBuffer + *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    pSVar5 = &local_78;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
    }
    pSVar4 = g_RenderVertexBuffer + (pSVar1->base).type;
    pSVar5 = &local_48;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
    }
    pSVar4 = &local_48;
    pSVar5 = &local_a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
    }
    pSVar4 = &local_a8;
    piVar6 = (int *)&stack0xffffff28;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    pSVar4 = &local_78;
    pSVar5 = &local_a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
    }
    pSVar4 = &local_a8;
    piVar6 = (int *)&stack0xfffffef8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    vertex2_00.g = uVar9;
    auVar8 = in_stack_ffffff28._0_24_;
    vertex2_00.projected_vertex.transformed_x = auVar8._0_4_;
    vertex2_00.projected_vertex.transformed_y = auVar8._4_4_;
    vertex2_00.projected_vertex.transformed_z = auVar8._8_4_;
    vertex2_00.projected_vertex.inv_z = auVar8._12_4_;
    vertex2_00.projected_vertex.screen_x = auVar8._16_4_;
    vertex2_00.projected_vertex.screen_y = auVar8._20_4_;
    vertex2_00.u = in_stack_ffffff28._24_4_;
    vertex2_00.v = in_stack_ffffff28._28_4_;
    vertex2_00.z = in_stack_ffffff28._32_4_;
    vertex2_00.r = in_stack_ffffff28._36_4_;
    vertex2_00.fog = iVar2;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffef8,vertex2_00);
  }
  return;
}
