// Name: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
// Address Range: [[0045d470, 0045d5c7]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470 (SMRGLHeaderPrimitive *polygon_data,int line_color)

#include "nocturne.h"

void __cdecl
shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470
          (SMRGLHeaderPrimitive *polygon_data,int line_color)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  int local_18;
  
  bVar5 = 0;
  pSVar1 = polygon_data + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      pSVar3 = g_RenderVertexBuffer + (&(pSVar1->base).type)[local_18];
      piVar4 = g_AALineVertex1;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      pSVar3 = g_RenderVertexBuffer + (&(pSVar1->base).count)[local_18];
      piVar4 = g_AALineVertex2;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
        cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                  (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                   g_AALineVertex2[5] >> 0x10,line_color);
      }
    }
    pSVar3 = g_RenderVertexBuffer + *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    piVar4 = g_AALineVertex1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    pSVar3 = g_RenderVertexBuffer + (pSVar1->base).type;
    piVar4 = g_AALineVertex2;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = (pSVar3->projected_vertex).transformed_x;
      pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
      cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                 g_AALineVertex2[5] >> 0x10,line_color);
    }
  }
  return;
}
