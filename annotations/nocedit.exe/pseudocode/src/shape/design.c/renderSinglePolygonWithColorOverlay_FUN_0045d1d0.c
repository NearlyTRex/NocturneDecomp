// Name: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// Address: 0045d1d0
// Address Range: [[0045d1d0, 0045d2fb]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int color_value)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int color_value)

{
  SMRGLPrimitiveBigPolyIndex local_6c;
  int local_14;
  
  if (((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
     (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)) {
    local_6c.base.base.count = g_ModelPolygonData[polygon_index].vertex_indices_count;
    local_6c.base.surface_normal.A.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.x * 65535.0f));
    local_6c.base.surface_normal.B.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.y * 65535.0f));
    local_6c.base.surface_normal.C.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.z * 65535.0f));
    local_6c.base.surface_normal.D.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].plane_distance * 65535.0f *
                          256.0f));
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      local_6c.vertices[local_14] = g_ModelPolygonData[polygon_index].vertex_indices[local_14];
    }
    if (g_AntiAliasingEnabled == 0) {
      shape_design_c_renderPolygonWireframe_FUN_0045d300(&local_6c.base);
    }
    else {
      shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(&local_6c.base,color_value);
    }
  }
  return;
}
