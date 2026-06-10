// Name: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
// MANUAL RECONSTRUCTION
// Address Range: [[0045d470, 0045d5c7] [03fc2a24, 03fc2baf]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive *polygon_data,int line_color)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive *polygon_data,int line_color)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int local_18;
  
  pSVar1 = polygon_data + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      iVar1 = (&(pSVar1->base).type)[local_18];
      g_RenderVertexBuffer[0x7fe] = g_RenderVertexBuffer[iVar1];
      iVar1 = (&(pSVar1->base).count)[local_18];
      g_RenderVertexBuffer[0x7ff] = g_RenderVertexBuffer[iVar1];
      if (((g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x & 0x80000000U) == 0) &&
         ((g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x & 0x80000000U) == 0)) {
        cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                  (g_RenderVertexBuffer[0x7fe].projected_vertex.screen_x >> 0x10,
                   g_RenderVertexBuffer[0x7fe].projected_vertex.screen_y >> 0x10,
                   g_RenderVertexBuffer[0x7ff].projected_vertex.screen_x >> 0x10,
                   g_RenderVertexBuffer[0x7ff].projected_vertex.screen_y >> 0x10,line_color);
      }
    }
    iVar1 = (&(pSVar1->base).type)[(polygon_data->base).count + -1];
    g_RenderVertexBuffer[0x7fe] = g_RenderVertexBuffer[iVar1];
    iVar1 = (pSVar1->base).type;
    g_RenderVertexBuffer[0x7ff] = g_RenderVertexBuffer[iVar1];
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
