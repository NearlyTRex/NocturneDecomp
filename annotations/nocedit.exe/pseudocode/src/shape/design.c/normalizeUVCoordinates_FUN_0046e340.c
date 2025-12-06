// Name: shape_design.c_normalizeUVCoordinates_FUN_0046e340
// Address: 0046e340
// Address Range: [[0046e340, 0046e4c8]]
// Convention: __cdecl
// Signature: void shape_design.c_normalizeUVCoordinates_FUN_0046e340(void)

#include "nocturne.h"

void __cdecl shape_design_c_normalizeUVCoordinates_FUN_0046e340(void)

{
  float10 fVar1;
  float10 fVar2;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float10 in_ST0;
  double dVar3;
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
    dVar3 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar1 = (float10)256;
    dVar3 = crt_math_c_floor_FUN_005feb90(dVar3);
    in_ST0 = (float10)dVar3;
    fVar2 = (float10)256;
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      g_ModelPolygonData[local_18].uv_u[local_14] =
           g_ModelPolygonData[local_18].uv_u[local_14] -
           (float)((float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) * fVar1);
      g_ModelPolygonData[local_18].uv_v[local_14] =
           g_ModelPolygonData[local_18].uv_v[local_14] -
           (float)((float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) * fVar2);
    }
  }
  return;
}
