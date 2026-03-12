// Name: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
// Address: 0045c2f0
// Address Range: [[0045c2f0, 0045c4e5]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)

{
  uint uVar1;
  uint y;
  char local_7c [80];
  CVector3i local_2c;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if ((g_KeyboardState[0x2f] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x2f] = '\0';
    g_PolygonVertexDisplayEnabled = g_PolygonVertexDisplayEnabled ^ 1;
  }
  if (((g_PolygonVertexDisplayEnabled != 0) && (-1 < polygon_index)) &&
     (polygon_index <= g_PolygonCount + -1)) {
    for (local_20 = 0; local_20 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_20 = local_20 + 1) {
      uVar1 = g_ModelPolygonData[polygon_index].vertex_indices[local_20];
      local_2c.x = (int)ROUND(ROUND(g_LoadedVertices[uVar1].vertex.x * 256.0f))
      ;
      local_2c.y = (int)ROUND(ROUND(g_LoadedVertices[uVar1].vertex.y * 256.0f))
      ;
      local_2c.z = (int)ROUND(ROUND(g_LoadedVertices[uVar1].vertex.z * 256.0f))
      ;
      engine_matrix_c_transformToCache_FUN_0050cd70(local_20,&local_2c);
    }
    for (local_20 = 0; local_20 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_20 = local_20 + 1) {
      g_ActiveRenderColor = 7;
      uVar1 = g_RenderVertexBuffer[local_20].projected_vertex.screen_x >> 0x10;
      y = g_RenderVertexBuffer[local_20].projected_vertex.screen_y >> 0x10;
      if ((int)(g_RenderVertexBuffer[local_20].projected_vertex.screen_x & -0x80000000) == 0) {
        if (((uVar1 < (uint)g_WindowWidth) && (y < (uint)g_WindowHeight)) &&
           (0 < g_RenderVertexBuffer[local_20].projected_vertex.transformed_z)) {
          engine_2d_c_plotPixel_FUN_00401140(uVar1,y);
        }
        if (((uVar1 + 8 < (uint)g_WindowWidth) && (y + 0xc < (uint)g_WindowHeight)) &&
           (0 < g_RenderVertexBuffer[local_20].projected_vertex.transformed_z)) {
          _sprintf
                    (local_7c,"%d",
                     g_ModelPolygonData[polygon_index].vertex_indices[local_20]);
          engine_2d_c_drawTextColor_FUN_00402430(local_7c,uVar1 + 1,y + 1);
        }
      }
    }
  }
  return;
}
