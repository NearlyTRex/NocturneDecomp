// Name: shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080
// Address: 0045f080
// Address Range: [[0045f080, 0045f1c3]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_clampAndTransformUVCoordinates_FUN_0045f080(void)

#include "nocturne.h"

void __cdecl shape_design_c_clampAndTransformUVCoordinates_FUN_0045f080(void)

{
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      local_20 = g_ModelPolygonData[local_18].uv_u[local_14] * (float)0.00390625 *
                 (float)248 + (float)4;
      local_1c = g_ModelPolygonData[local_18].uv_v[local_14] * (float)0.00390625 *
                 (float)248 + (float)4;
      if (local_20 < (float)4) {
        local_20 = 4.0;
      }
      if ((float)252 < local_20) {
        local_20 = 252.0;
      }
      if (local_1c < (float)4) {
        local_1c = 4.0;
      }
      if ((float)252 < local_1c) {
        local_1c = 252.0;
      }
      g_ModelPolygonData[local_18].uv_u[local_14] = local_20;
      g_ModelPolygonData[local_18].uv_v[local_14] = local_1c;
    }
  }
  return;
}
