// Name: shape_design.c_weldNearbyVertices_FUN_00465c50
// Address: 00465c50
// Address Range: [[00465c50, 00465d48]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_weldNearbyVertices_FUN_00465c50(int polygon_index,float tolerance)

#include "nocturne.h"

void __cdecl shape_design_c_weldNearbyVertices_FUN_00465c50(int polygon_index,float tolerance)

{
  uint uVar1;
  int local_1c;
  uint local_18;
  
  for (local_1c = 0; local_1c < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
      local_1c = local_1c + 1) {
    uVar1 = g_ModelPolygonData[polygon_index].vertex_indices[local_1c];
    for (local_18 = 0; (int)local_18 < g_VertexCount; local_18 = local_18 + 1) {
      if (((ABS(g_LoadedVertices[uVar1].vertex.x - g_LoadedVertices[local_18].vertex.x) < tolerance)
          && (ABS(g_LoadedVertices[uVar1].vertex.y - g_LoadedVertices[local_18].vertex.y) <
              tolerance)) &&
         (ABS(g_LoadedVertices[uVar1].vertex.z - g_LoadedVertices[local_18].vertex.z) < tolerance))
      {
        g_ModelPolygonData[polygon_index].vertex_indices[local_1c] = local_18;
      }
    }
  }
  shape_design_c_removeUnusedVertices_FUN_00463830();
  return;
}
