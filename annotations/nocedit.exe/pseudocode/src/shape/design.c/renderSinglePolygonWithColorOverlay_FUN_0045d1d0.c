// Name: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// Address: 0045d1d0
// Address Range: [[0045d1d0, 0045d2fb]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int *color_value)

#include "nocturne.h"

void __cdecl shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int *color_value)

{
  double dVar1;
  SMRGLHeaderPrimitive local_6c;
  uint auStack_54 [16];
  int local_14;
  
  if (((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
     (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)) {
    local_6c.base.count = g_ModelPolygonData[polygon_index].vertex_indices_count;
    dVar1 = round
                      ((double)(g_ModelPolygonData[polygon_index].normal.x * 65535.0f));
    local_6c.surface_normal.A = (int)ROUND(dVar1);
    dVar1 = round
                      ((double)(g_ModelPolygonData[polygon_index].normal.y * 65535.0f));
    local_6c.surface_normal.B = (int)ROUND(dVar1);
    dVar1 = round
                      ((double)(g_ModelPolygonData[polygon_index].normal.z * 65535.0f));
    local_6c.surface_normal.C = (int)ROUND(dVar1);
    dVar1 = round
                      ((double)(g_ModelPolygonData[polygon_index].plane_distance *
                                65535.0f * 256.0f));
    local_6c.surface_normal.D = (int)ROUND(dVar1);
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      auStack_54[local_14] = g_ModelPolygonData[polygon_index].vertex_indices[local_14];
    }
    if (g_AntiAliasingEnabled == 0) {
      shape_design_c_renderPolygonWireframe_FUN_0045d300(&local_6c);
    }
    else {
      shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(&local_6c,(int)color_value);
    }
  }
  return;
}
