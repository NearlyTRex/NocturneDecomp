// Name: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
// Address Range: [[0045d470, 0045d5c7] [03fc2a24, 03fc2baf]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive *polygon_data,int line_color)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive *polygon_data,int line_color)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  int local_18;
  
  pSVar1 = polygon_data + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      iVar1 = (&(pSVar1->base).type)[local_18];
      g_AALineVertex1[0] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
      g_AALineVertex1[1] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
      g_AALineVertex1[2] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
      g_AALineVertex1[3] = g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
      g_AALineVertex1[4] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
      g_AALineVertex1[5] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
      g_AALineVertex1[6] = g_RenderVertexBuffer[iVar1].u;
      g_AALineVertex1[7] = g_RenderVertexBuffer[iVar1].v;
      g_AALineVertex1[8] = g_RenderVertexBuffer[iVar1].r;
      g_AALineVertex1[9] = g_RenderVertexBuffer[iVar1].g;
      g_AALineVertex1[10] = g_RenderVertexBuffer[iVar1].b;
      g_AALineVertex1[0xb] = g_RenderVertexBuffer[iVar1].a;
      iVar1 = (&(pSVar1->base).count)[local_18];
      g_AALineVertex2[0] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
      g_AALineVertex2[1] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
      g_AALineVertex2[2] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
      g_AALineVertex2[3] = g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
      g_AALineVertex2[4] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
      g_AALineVertex2[5] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
      g_AALineVertex2[6] = g_RenderVertexBuffer[iVar1].u;
      g_AALineVertex2[7] = g_RenderVertexBuffer[iVar1].v;
      g_AALineVertex2[8] = g_RenderVertexBuffer[iVar1].r;
      g_AALineVertex2[9] = g_RenderVertexBuffer[iVar1].g;
      g_AALineVertex2[10] = g_RenderVertexBuffer[iVar1].b;
      g_AALineVertex2[0xb] = g_RenderVertexBuffer[iVar1].a;
      if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
        cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                  (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                   g_AALineVertex2[5] >> 0x10,line_color);
      }
    }
    iVar1 = *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    g_AALineVertex1[0] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
    g_AALineVertex1[1] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
    g_AALineVertex1[2] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
    g_AALineVertex1[3] = g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
    g_AALineVertex1[4] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    g_AALineVertex1[5] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    g_AALineVertex1[6] = g_RenderVertexBuffer[iVar1].u;
    g_AALineVertex1[7] = g_RenderVertexBuffer[iVar1].v;
    g_AALineVertex1[8] = g_RenderVertexBuffer[iVar1].r;
    g_AALineVertex1[9] = g_RenderVertexBuffer[iVar1].g;
    g_AALineVertex1[10] = g_RenderVertexBuffer[iVar1].b;
    g_AALineVertex1[0xb] = g_RenderVertexBuffer[iVar1].a;
    iVar1 = (pSVar1->base).type;
    g_AALineVertex2[0] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
    g_AALineVertex2[1] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
    g_AALineVertex2[2] = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
    g_AALineVertex2[3] = g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
    g_AALineVertex2[4] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    g_AALineVertex2[5] = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    g_AALineVertex2[6] = g_RenderVertexBuffer[iVar1].u;
    g_AALineVertex2[7] = g_RenderVertexBuffer[iVar1].v;
    g_AALineVertex2[8] = g_RenderVertexBuffer[iVar1].r;
    g_AALineVertex2[9] = g_RenderVertexBuffer[iVar1].g;
    g_AALineVertex2[10] = g_RenderVertexBuffer[iVar1].b;
    g_AALineVertex2[0xb] = g_RenderVertexBuffer[iVar1].a;
    if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
      cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                 g_AALineVertex2[5] >> 0x10,line_color);
    }
  }
  return;
}
