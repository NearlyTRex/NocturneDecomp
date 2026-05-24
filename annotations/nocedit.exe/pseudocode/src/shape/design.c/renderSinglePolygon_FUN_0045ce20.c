// Name: shape_design.c_renderSinglePolygon_FUN_0045ce20
// Address: 0045ce20
// Address Range: [[0045ce20, 0045d1ce]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

{
  char cVar2;
  char *pcVar2;
  char *pcVar3;
  SMRGLPrimitiveBigPolyIndex local_c4;
  SMRGLTextureBasic local_6c [3];
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  char cVar1;
  
  if (((g_SelectionBlinkTimer == 0) ||
      ((polygon_index != g_SelectedPolygonIndex && (polygon_index != g_SecondaryPolygonIndex)))) &&
     ((g_WireframeMode == 0 ||
      ((g_CurrentPartIndex == -1 ||
       (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)))))) {
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
    local_c4.base.base.count = g_ModelPolygonData[polygon_index].vertex_indices_count;
    local_c4.base.surface_normal.A.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.x * 65535.0f));
    local_c4.base.surface_normal.B.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.y * 65535.0f));
    local_c4.base.surface_normal.C.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.z * 65535.0f));
    local_c4.base.surface_normal.D.i =
         (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].plane_distance * 65535.0f *
                          256.0f));
    for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_18 = local_18 + 1) {
      local_c4.vertices[local_18] = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
    }
    local_1c = (uint)(g_ModelPolygonData[polygon_index].texture_name[0] == '\0');
    if ((g_ModelPolygonData[polygon_index].polygon_type == 2) &&
       (((g_EditorTextureMode == 0 || (g_EditorTextureMode == 1)) && (local_1c == 0)))) {
      local_6c[0].base.count = 0;
      pcVar2 = g_ModelPolygonData[polygon_index].texture_name;
      pcVar3 = local_6c[0].texture_name;
      do {
        cVar1 = *pcVar2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar2;
        pcVar3 = pcVar3 + 2;
      } while (cVar2 != '\0');
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(local_6c);
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
          local_18 = local_18 + 1) {
        local_14 = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
        g_RenderVertexBuffer[local_14].u =
             (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].uv_u[local_18] *
                              (float)65536));
        g_RenderVertexBuffer[local_14].v =
             (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].uv_v[local_18] *
                              (float)65536));
      }
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonLitNearPlaneOp35_FUN_00404a40(&local_c4.base);
      }
      else if (g_GouraudShadingEnabled == 0) {
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c60(&local_c4.base);
      }
      else {
        engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_00405ce0(&local_c4.base);
      }
    }
    else if (local_1c == 0) {
      if (g_EditorTextureMode != 4) {
        local_20 = g_ModelPolygonData[polygon_index].material_id;
        engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
        if (g_GouraudShadingEnabled == 0) {
          if (g_ZBufferEnabled == 0) {
            engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403ad0(&local_c4.base);
          }
          else {
            engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404ae0(&local_c4.base);
          }
        }
        else if (g_ZBufferEnabled == 0) {
          engine_3d_c_renderPolygonFogColorOp6_FUN_00403ba0(&local_c4.base);
        }
        else {
          engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00404d50(&local_c4.base);
        }
      }
    }
    else {
      local_20 = -g_EditorColorMode;
      engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403ad0(&local_c4.base);
      }
      else {
        engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404ae0(&local_c4.base);
      }
    }
  }
  return;
}
