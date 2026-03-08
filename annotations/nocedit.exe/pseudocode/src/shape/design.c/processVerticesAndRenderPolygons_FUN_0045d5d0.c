// Name: shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
// Address: 0045d5d0
// Address Range: [[0045d5d0, 0045d918]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0(void)

{
  int iVar1;
  int iVar2;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    local_28.x = (int)ROUND(ROUND(g_LoadedVertices[local_1c].vertex.x * 256.0f));
    local_28.y = (int)ROUND(ROUND(g_LoadedVertices[local_1c].vertex.y * 256.0f));
    local_28.z = (int)ROUND(ROUND(g_LoadedVertices[local_1c].vertex.z * 256.0f));
    engine_matrix_c_transformToCache_FUN_0050cd70(local_1c,&local_28);
  }
  if (g_KeyboardState[0x22] != '\0') {
    g_KeyboardState[0x22] = '\0';
    g_GouraudShadingEnabled = 1 - g_GouraudShadingEnabled;
    shape_design_c_calculateVertexNormals_FUN_0045be40();
  }
  if (g_KeyboardState[0x2c] != '\0') {
    g_KeyboardState[0x2c] = '\0';
    g_ZBufferEnabled = 1 - g_ZBufferEnabled;
  }
  if ((g_KeyboardState[0x1e] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
    g_KeyboardState[0x1e] = '\0';
    g_AntiAliasingEnabled = 1 - g_AntiAliasingEnabled;
  }
  if (g_KeyboardState[0x44] != '\0') {
    g_KeyboardState[0x44] = '\0';
    g_WireframeMode = 1 - g_WireframeMode;
  }
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    iVar2 = engine_light_cpp_calculatePhongLighting_FUN_00505530
                      ((int)ROUND(ROUND(g_VertexNormals[local_1c].vertex.x *
                                        (float)65535)),
                       (int)ROUND(ROUND(g_VertexNormals[local_1c].vertex.y *
                                        (float)65535)),
                       (int)ROUND(ROUND(g_VertexNormals[local_1c].vertex.z *
                                        (float)65535)));
    g_RenderVertexBuffer[local_1c].r = iVar2;
  }
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    g_PolygonIndices[local_1c] = local_1c;
    g_PolygonDepths[local_1c] =
         g_RenderVertexBuffer[g_ModelPolygonData[local_1c].vertex_indices[0]].projected_vertex.
         transformed_z;
    for (local_18 = 1; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
        local_18 = local_18 + 1) {
      local_14 = g_RenderVertexBuffer[g_ModelPolygonData[local_1c].vertex_indices[local_18]].
                 projected_vertex.transformed_z;
      if (local_14 < g_PolygonDepths[local_1c]) {
        g_PolygonDepths[local_1c] = local_14;
      }
    }
  }
  for (local_1c = 0; iVar2 = local_1c, local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
    while (local_18 = iVar2 + 1, local_18 < g_PolygonCount) {
      iVar2 = local_18;
      if (g_PolygonDepths[local_1c] < g_PolygonDepths[local_18]) {
        iVar1 = g_PolygonIndices[local_1c];
        g_PolygonIndices[local_1c] = g_PolygonIndices[local_18];
        g_PolygonIndices[local_18] = iVar1;
        iVar1 = g_PolygonDepths[local_1c];
        g_PolygonDepths[local_1c] = g_PolygonDepths[local_18];
        g_PolygonDepths[local_18] = iVar1;
      }
    }
  }
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    shape_design_c_renderSinglePolygon_FUN_0045ce20(g_PolygonIndices[local_1c]);
  }
  return;
}
