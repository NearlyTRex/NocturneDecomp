// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// MANUAL RECONSTRUCTION
// Address Range: [[0045d300, 0045d462] [00603048, 006031b3] [03fc0ba8, 03fc0eaf]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  int *vertex_indices;
  int count;
  int i;

  if (engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal) != 0) {
    engine_3d_c_setActiveRenderColor_FUN_00404540();
    vertex_indices = (int *)(polygon_data + 1);
    count = polygon_data->base.count;
    for (i = 0; i < count - 1; i++) {
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[vertex_indices[i]],
                                                 g_RenderVertexBuffer[vertex_indices[i + 1]]);
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[vertex_indices[count - 1]],
                                               g_RenderVertexBuffer[vertex_indices[0]]);
  }
  return;
}
