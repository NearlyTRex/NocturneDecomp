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
      g_RenderVertexBuffer[0x7fe].projected_vertex.transformed_x =
           g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
      g_RenderVertexBuffer[0x7fe].projected_vertex.transformed_y =
           g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
      g_RenderVertexBuffer[0x7fe].projected_vertex.transformed_z =
           g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
      g_RenderVertexBuffer[0x7fe].projected_vertex.inv_z =
           g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
      g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x =
           g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
      g_RenderVertexBuffer[0x7fe].projected_vertex.screen_y =
           g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
      g_RenderVertexBuffer[0x7fe].u = g_RenderVertexBuffer[iVar1].u;
      g_RenderVertexBuffer[0x7fe].v = g_RenderVertexBuffer[iVar1].v;
      g_RenderVertexBuffer[0x7fe].r = g_RenderVertexBuffer[iVar1].r;
      g_RenderVertexBuffer[0x7fe].g = g_RenderVertexBuffer[iVar1].g;
      g_RenderVertexBuffer[0x7fe].b = g_RenderVertexBuffer[iVar1].b;
      g_RenderVertexBuffer[0x7fe].a = g_RenderVertexBuffer[iVar1].a;
      iVar1 = (&(pSVar1->base).count)[local_18];
      g_RenderVertexBuffer[0x7ff].projected_vertex.transformed_x =
           g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
      g_RenderVertexBuffer[0x7ff].projected_vertex.transformed_y =
           g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
      g_RenderVertexBuffer[0x7ff].projected_vertex.transformed_z =
           g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
      g_RenderVertexBuffer[0x7ff].projected_vertex.inv_z =
           g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
      g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x =
           g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
      g_RenderVertexBuffer[0x7ff].projected_vertex.screen_y =
           g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
      g_RenderVertexBuffer[0x7ff].u = g_RenderVertexBuffer[iVar1].u;
      g_RenderVertexBuffer[0x7ff].v = g_RenderVertexBuffer[iVar1].v;
      g_RenderVertexBuffer[0x7ff].r = g_RenderVertexBuffer[iVar1].r;
      g_RenderVertexBuffer[0x7ff].g = g_RenderVertexBuffer[iVar1].g;
      g_RenderVertexBuffer[0x7ff].b = g_RenderVertexBuffer[iVar1].b;
      g_RenderVertexBuffer[0x7ff].a = g_RenderVertexBuffer[iVar1].a;
      if (((g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x & 0x80000000U) == 0) &&
         ((g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x & 0x80000000U) == 0)) {
        cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                  (g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x >> 0x10,
                   g_RenderVertexBuffer[0x7fe].projected_vertex.screen_y >> 0x10,
                   g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x >> 0x10,
                   g_RenderVertexBuffer[0x7ff].projected_vertex.screen_y >> 0x10,line_color);
      }
    }
    iVar1 = *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    g_RenderVertexBuffer[0x7fe].projected_vertex.transformed_x =
         g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
    g_RenderVertexBuffer[0x7fe].projected_vertex.transformed_y =
         g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
    g_RenderVertexBuffer[0x7fe].projected_vertex.transformed_z =
         g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
    g_RenderVertexBuffer[0x7fe].projected_vertex.inv_z =
         g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
    g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x =
         g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    g_RenderVertexBuffer[0x7fe].projected_vertex.screen_y =
         g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    g_RenderVertexBuffer[0x7fe].u = g_RenderVertexBuffer[iVar1].u;
    g_RenderVertexBuffer[0x7fe].v = g_RenderVertexBuffer[iVar1].v;
    g_RenderVertexBuffer[0x7fe].r = g_RenderVertexBuffer[iVar1].r;
    g_RenderVertexBuffer[0x7fe].g = g_RenderVertexBuffer[iVar1].g;
    g_RenderVertexBuffer[0x7fe].b = g_RenderVertexBuffer[iVar1].b;
    g_RenderVertexBuffer[0x7fe].a = g_RenderVertexBuffer[iVar1].a;
    iVar1 = (pSVar1->base).type;
    g_RenderVertexBuffer[0x7ff].projected_vertex.transformed_x =
         g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
    g_RenderVertexBuffer[0x7ff].projected_vertex.transformed_y =
         g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
    g_RenderVertexBuffer[0x7ff].projected_vertex.transformed_z =
         g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
    g_RenderVertexBuffer[0x7ff].projected_vertex.inv_z =
         g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
    g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x =
         g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    g_RenderVertexBuffer[0x7ff].projected_vertex.screen_y =
         g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    g_RenderVertexBuffer[0x7ff].u = g_RenderVertexBuffer[iVar1].u;
    g_RenderVertexBuffer[0x7ff].v = g_RenderVertexBuffer[iVar1].v;
    g_RenderVertexBuffer[0x7ff].r = g_RenderVertexBuffer[iVar1].r;
    g_RenderVertexBuffer[0x7ff].g = g_RenderVertexBuffer[iVar1].g;
    g_RenderVertexBuffer[0x7ff].b = g_RenderVertexBuffer[iVar1].b;
    g_RenderVertexBuffer[0x7ff].a = g_RenderVertexBuffer[iVar1].a;
    if (((g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x & 0x80000000U) == 0) &&
       ((g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x & 0x80000000U) == 0)) {
      cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                (g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x >> 0x10,
                 g_RenderVertexBuffer[0x7fe].projected_vertex.screen_y >> 0x10,
                 g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x >> 0x10,
                 g_RenderVertexBuffer[0x7ff].projected_vertex.screen_y >> 0x10,line_color);
    }
  }
  return;
}
