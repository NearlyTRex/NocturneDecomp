// Name: shape_design.c_calculateVertexNormals_FUN_0045be40
// Address: 0045be40
// Address Range: [[0045be40, 0045bfe8]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_calculateVertexNormals_FUN_0045be40(void)

#include "nocturne.h"

void __cdecl shape_design_c_calculateVertexNormals_FUN_0045be40(void)

{
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_20;
  float local_1c;
  float local_18;
  float fVar1;
  
  for (local_40 = 0; (int)local_40 < g_PolygonCount; local_40 = local_40 + 1) {
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + local_40);
  }
  for (local_40 = 0; (int)local_40 < g_VertexCount; local_40 = local_40 + 1) {
    local_34 = 0;
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    for (local_3c = 0; local_3c < g_PolygonCount; local_3c = local_3c + 1) {
      for (local_38 = 0; local_38 < (int)g_ModelPolygonData[local_3c].vertex_indices_count;
          local_38 = local_38 + 1) {
        if (g_ModelPolygonData[local_3c].vertex_indices[local_38] == local_40) {
          local_34 = local_34 + 1;
          local_20 = local_20 + g_ModelPolygonData[local_3c].normal.x;
          local_1c = local_1c + g_ModelPolygonData[local_3c].normal.y;
          local_18 = local_18 + g_ModelPolygonData[local_3c].normal.z;
        }
      }
    }
    if (local_34 != 0) {
      fVar1 = SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20);
      if ((float)0.001 <= fVar1) {
        local_20 = local_20 / fVar1;
        local_1c = local_1c / fVar1;
        local_18 = local_18 / fVar1;
      }
      else {
        local_18 = 0.0;
        local_1c = 0.0;
        local_20 = 0.0;
      }
      g_VertexNormals[local_40].vertex.x = local_20;
      g_VertexNormals[local_40].vertex.y = local_1c;
      g_VertexNormals[local_40].vertex.z = local_18;
    }
  }
  return;
}
