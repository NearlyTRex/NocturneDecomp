// Name: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
// Address Range: [[0045d470, 0045d5c7]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive * polygon_data, int line_color)

#include "nocturne.h"

void __cdecl
shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470
          (SMRGLHeaderPrimitive *polygon_data,int line_color)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  
  bVar6 = 0;
  pSVar1 = polygon_data + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    for (iVar2 = 0; iVar2 < (polygon_data->base).count + -1; iVar2 = iVar2 + 1) {
      pSVar4 = g_RenderVertexBuffer + (&(pSVar1->base).type)[iVar2];
      piVar5 = g_AALineVertex1;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      pSVar4 = g_RenderVertexBuffer + (&(pSVar1->base).count)[iVar2];
      piVar5 = g_AALineVertex2;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
        iVar2 = line_color;
        cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                  (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                   g_AALineVertex2[5] >> 0x10,line_color);
      }
    }
    pSVar4 = g_RenderVertexBuffer + *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    piVar5 = g_AALineVertex1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    pSVar4 = g_RenderVertexBuffer + (pSVar1->base).type;
    piVar5 = g_AALineVertex2;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
      cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                 g_AALineVertex2[5] >> 0x10,line_color);
    }
  }
  return;
}
