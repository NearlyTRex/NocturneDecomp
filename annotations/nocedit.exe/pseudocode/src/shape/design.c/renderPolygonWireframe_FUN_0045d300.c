// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive * polygon_data)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  int iVar1;
  SRenderVertex *pSVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  SRenderVertex *in_stack_fffffef8;
  SRenderVertex *in_stack_fffffefc;
  uint auStack_d8 [10];
  uint uStack_b0;
  uint local_a8 [12];
  int local_78 [12];
  int local_48 [12];
  int local_18;
  SMRGLHeaderPrimitive *local_14;
  
  bVar7 = 0;
  local_14 = polygon_data + 1;
  uStack_b0 = 0x45d321;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar1 != 0) {
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
      puVar6 = auStack_d8;
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
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffef8,in_stack_fffffefc);
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
    puVar6 = auStack_d8;
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
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffef8,in_stack_fffffefc);
  }
  return;
}
