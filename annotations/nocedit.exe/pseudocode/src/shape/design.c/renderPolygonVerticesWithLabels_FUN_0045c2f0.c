// Name: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
// Address: 0045c2f0
// Address Range: [[0045c2f0, 0045c4e5]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)

{
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
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
      local_14 = g_ModelPolygonData[polygon_index].vertex_indices[local_20];
      fVar1 = (float10)g_LoadedVertices[local_14].vertex.x * (float10)256f;
      dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(polygon_index * 0x184,local_14 * 0x14))
      ;
      local_2c.x = (int)ROUND(fVar1);
      fVar1 = (float10)g_LoadedVertices[local_14].vertex.y * (float10)256f;
      dVar2 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar2 >> 0x20),local_14 * 0x14));
      local_2c.y = (int)ROUND(fVar1);
      fVar1 = (float10)g_LoadedVertices[local_14].vertex.z * (float10)256f;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar2 >> 0x20),local_14 * 0x14));
      local_2c.z = (int)ROUND(fVar1);
      engine_matrix_c_transformToCache_FUN_0050cd70(local_20,&local_2c);
    }
    for (local_20 = 0; local_20 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_20 = local_20 + 1) {
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
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (&stack0xffffff84,"%d",
                     g_ModelPolygonData[polygon_index].vertex_indices[local_20]);
          engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff84,local_1c + 1,local_18 + 1);
        }
      }
    }
  }
  return;
}
