// Name: shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
// Address: 0045bff0
// Address Range: [[0045bff0, 0045c2e1]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0(void)

#include "nocturne.h"

void __cdecl shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0(void)

{
  double dVar1;
  char local_88 [80];
  CVector3i local_38;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  if ((g_KeyboardState[0x2f] != '\0') && (g_KeyboardState[0x1d] == '\0')) {
    g_KeyboardState[0x2f] = '\0';
    g_VertexDisplayEnabled = g_VertexDisplayEnabled ^ 1;
  }
  if (g_VertexDisplayEnabled != 0) {
    for (local_24 = 0; local_24 < g_VertexCount; local_24 = local_24 + 1) {
      dVar1 = round
                        ((double)(g_LoadedVertices[local_24].vertex.x * 256.0f));
      local_38.x = (int)ROUND(dVar1);
      dVar1 = round
                        ((double)(g_LoadedVertices[local_24].vertex.y * 256.0f));
      local_38.y = (int)ROUND(dVar1);
      dVar1 = round
                        ((double)(g_LoadedVertices[local_24].vertex.z * 256.0f));
      local_38.z = (int)ROUND(dVar1);
      engine_matrix_c_transformToCache_FUN_0050cd70(local_24,&local_38);
      g_VertexDepthSortedIndices[local_24] = local_24;
    }
    for (local_24 = 0; local_20 = local_24, local_24 < g_VertexCount + -1; local_24 = local_24 + 1)
    {
      while (local_20 = local_20 + 1, (int)local_20 < g_VertexCount) {
        if (g_LoadedVertices[g_VertexDepthSortedIndices[local_24]].vertex.z <
            g_LoadedVertices[g_VertexDepthSortedIndices[local_20]].vertex.z) {
          local_14 = g_VertexDepthSortedIndices[local_24];
          g_VertexDepthSortedIndices[local_24] = g_VertexDepthSortedIndices[local_20];
          g_VertexDepthSortedIndices[local_20] = local_14;
        }
      }
    }
    for (local_24 = 0; local_24 < g_VertexCount; local_24 = local_24 + 1) {
      local_20 = g_VertexDepthSortedIndices[local_24];
      if ((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) {
LAB_0045c20a:
        g_ActiveRenderColor = 7;
        local_1c = g_RenderVertexBuffer[local_20].projected_vertex.screen_x >> 0x10;
        local_18 = g_RenderVertexBuffer[local_20].projected_vertex.screen_y >> 0x10;
        if ((int)(g_RenderVertexBuffer[local_20].projected_vertex.screen_x & -0x80000000) == 0) {
          if (((local_1c < (uint)g_WindowWidth) && (local_18 < (uint)g_WindowHeight)) &&
             (0 < g_RenderVertexBuffer[local_20].projected_vertex.transformed_z)) {
            engine_2d_c_plotPixel_FUN_00401140(local_1c,local_18);
          }
          if (((local_1c + 8 < (uint)g_WindowWidth) && (local_18 + 0xc < (uint)g_WindowHeight)) &&
             (0 < g_RenderVertexBuffer[local_20].projected_vertex.transformed_z)) {
            _sprintf(local_88,"%d",local_20);
            engine_2d_c_drawTextColor_FUN_00402430(local_88,local_1c + 1,local_18 + 1);
          }
        }
      }
      else {
        for (local_2c = 0; local_2c < g_PolygonCount; local_2c = local_2c + 1) {
          if (g_ModelPolygonData[local_2c].part_assignment == g_CurrentPartIndex) {
            for (local_28 = 0; local_28 < (int)g_ModelPolygonData[local_2c].vertex_indices_count;
                local_28 = local_28 + 1) {
              if (g_ModelPolygonData[local_2c].vertex_indices[local_28] == local_20)
              goto LAB_0045c20a;
            }
          }
        }
      }
    }
  }
  return;
}
