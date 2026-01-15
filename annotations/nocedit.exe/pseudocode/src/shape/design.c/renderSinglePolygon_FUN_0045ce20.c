// Name: shape_design.c_renderSinglePolygon_FUN_0045ce20
// Address: 0045ce20
// Address Range: [[0045ce20, 0045d1ce]]
// Convention: __cdecl
// Signature: void shape_design.c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

#include "nocturne.h"

void __cdecl shape_design_c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  double dVar4;
  SMRGLHeaderPrimitive local_c4;
  uint auStack_ac [16];
  SMRGLTextureBasic local_6c [3];
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  if (((g_SelectionBlinkTimer == 0) ||
      ((polygon_index != g_SelectedPolygonIndex && (polygon_index != g_SecondaryPolygonIndex)))) &&
     ((g_WireframeMode == 0 ||
      ((g_CurrentPartIndex == -1 ||
       (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)))))) {
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
    local_c4.base.count = g_ModelPolygonData[polygon_index].vertex_indices_count;
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)(g_ModelPolygonData[polygon_index].normal.x * 65535f));
    local_c4.surface_normal.A = (int)ROUND(dVar4);
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)(g_ModelPolygonData[polygon_index].normal.y * 65535f));
    local_c4.surface_normal.B = (int)ROUND(dVar4);
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)(g_ModelPolygonData[polygon_index].normal.z * 65535f));
    local_c4.surface_normal.C = (int)ROUND(dVar4);
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)(g_ModelPolygonData[polygon_index].plane_distance *
                                65535f * 256f));
    local_c4.surface_normal.D = (int)ROUND(dVar4);
    for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_18 = local_18 + 1) {
      auStack_ac[local_18] = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
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
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(local_6c);
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
          local_18 = local_18 + 1) {
        local_14 = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
        dVar4 = crt_math_c_round_FUN_005fe6b0
                          ((double)(g_ModelPolygonData[polygon_index].uv_u[local_18] *
                                   (float)65536));
        g_RenderVertexBuffer[local_14].u = (float)(int)ROUND(dVar4);
        dVar4 = crt_math_c_round_FUN_005fe6b0
                          ((double)(g_ModelPolygonData[polygon_index].uv_v[local_18] *
                                   (float)65536));
        g_RenderVertexBuffer[local_14].v = (float)(int)ROUND(dVar4);
      }
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(&local_c4);
      }
      else if (g_GouraudShadingEnabled == 0) {
        engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60(&local_c4);
      }
      else {
        engine_3d_c_renderPolygonTextureWrappedStandard_FUN_00405ce0(&local_c4);
      }
    }
    else if (local_1c == 0) {
      if (g_EditorTextureMode != 4) {
        local_20 = g_ModelPolygonData[polygon_index].material_id;
        engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
        if (g_GouraudShadingEnabled == 0) {
          if (g_ZBufferEnabled == 0) {
            engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0(&local_c4);
          }
          else {
            engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(&local_c4);
          }
        }
        else if (g_ZBufferEnabled == 0) {
          engine_3d_c_renderPolygon_FUN_00403ba0(&local_c4);
        }
        else {
          engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50(&local_c4);
        }
      }
    }
    else {
      local_20 = -g_EditorColorMode;
      engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0(&local_c4);
      }
      else {
        engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(&local_c4);
      }
    }
  }
  return;
}
