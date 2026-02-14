// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_d8 */
/* WARNING: Variable defined which should be unmapped: local_108 */

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex local_108;
  SRenderVertex local_d8;
  SRenderVertex local_a8;
  SRenderVertex local_78;
  SRenderVertex local_48;
  int local_18;
  
  bVar5 = 0;
  pSVar1 = polygon_data + 1;
  local_d8.w_recip = (float)&polygon_data->surface_normal;
  local_d8.fog = 0x45d321;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950((SClipPlane *)local_d8.w_recip);
  if (iVar2 != 0) {
    local_d8.w_recip = 6.41241e-39;
    engine_3d_c_setActiveRenderColor_FUN_00404540();
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      pSVar3 = g_RenderVertexBuffer + (&(pSVar1->base).type)[local_18];
      pSVar4 = &local_78;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
      }
      pSVar3 = g_RenderVertexBuffer + (&(pSVar1->base).count)[local_18];
      pSVar4 = &local_48;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
      }
      pSVar3 = &local_48;
      pSVar4 = &local_a8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
      }
      pSVar3 = &local_a8;
      pSVar4 = &local_d8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      pSVar3 = &local_78;
      pSVar4 = &local_a8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
      }
      pSVar3 = &local_a8;
      pSVar4 = &local_108;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      vertex2.fog = local_d8.fog;
      vertex2.projected_vertex = local_d8.projected_vertex;
      vertex2.u = local_d8.u;
      vertex2.v = local_d8.v;
      vertex2.light = local_d8.light;
      vertex2.color = local_d8.color;
      vertex2.w_recip = local_d8.w_recip;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_108,vertex2);
    }
    pSVar3 = g_RenderVertexBuffer + *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    pSVar4 = &local_78;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    pSVar3 = g_RenderVertexBuffer + (pSVar1->base).type;
    pSVar4 = &local_48;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    pSVar3 = &local_48;
    pSVar4 = &local_a8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    pSVar3 = &local_a8;
    pSVar4 = &local_d8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    pSVar3 = &local_78;
    pSVar4 = &local_a8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    pSVar3 = &local_a8;
    pSVar4 = &local_108;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    vertex2_00.fog = local_d8.fog;
    vertex2_00.projected_vertex = local_d8.projected_vertex;
    vertex2_00.u = local_d8.u;
    vertex2_00.v = local_d8.v;
    vertex2_00.light = local_d8.light;
    vertex2_00.color = local_d8.color;
    vertex2_00.w_recip = local_d8.w_recip;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_108,vertex2_00);
  }
  return;
}
