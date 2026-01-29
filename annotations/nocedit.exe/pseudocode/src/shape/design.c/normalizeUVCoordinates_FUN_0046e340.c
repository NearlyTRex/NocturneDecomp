// Name: shape_design.c_normalizeUVCoordinates_FUN_0046e340
// Address: 0046e340
// Address Range: [[0046e340, 0046e4c8]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_normalizeUVCoordinates_FUN_0046e340(void)

#include "nocturne.h"

void __cdecl shape_design_c_normalizeUVCoordinates_FUN_0046e340(void)

{
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  float local_24;
  float local_20;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    local_24 = 1e+30;
    local_20 = 1e+30;
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      if (g_ModelPolygonData[local_18].uv_u[local_14] < local_24) {
        local_24 = g_ModelPolygonData[local_18].uv_u[local_14];
      }
      if (g_ModelPolygonData[local_18].uv_v[local_14] < local_20) {
        local_20 = g_ModelPolygonData[local_18].uv_v[local_14];
      }
    }
    dVar3 = floor
                      ((double)((local_24 + 4.0) * (float)0.00390625));
    fVar1 = (float10)256;
    dVar4 = floor
                      ((double)((local_20 + 4.0) * (float)0.00390625));
    fVar2 = (float10)256;
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      g_ModelPolygonData[local_18].uv_u[local_14] =
           g_ModelPolygonData[local_18].uv_u[local_14] - (float)((float10)dVar3 * fVar1);
      g_ModelPolygonData[local_18].uv_v[local_14] =
           g_ModelPolygonData[local_18].uv_v[local_14] - (float)((float10)dVar4 * fVar2);
    }
  }
  return;
}
