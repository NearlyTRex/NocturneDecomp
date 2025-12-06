// Name: shape_design.c_renderSinglePolygon_FUN_0045ce20
// Address: 0045ce20
// Address Range: [[0045ce20, 0045d1ce]]
// Convention: __cdecl
// Signature: void shape_design.c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

#include "nocturne.h"

void __cdecl shape_design_c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

{
  char cVar1;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  float10 fVar4;
  double dVar5;
  int local_c4;
  uint local_c0;
  int local_bc;
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
    local_c0 = g_ModelPolygonData[polygon_index].vertex_indices_count;
    fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.x * (float10)65535f;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,polygon_index * 0x184));
    local_bc = (int)ROUND(fVar4);
    local_c4 = 0x45cee2;
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
    local_c0 = 0x45cf00;
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
    local_bc = 0x45cf24;
    crt_math_c_round_FUN_005fe6b0
              ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
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
      local_bc = 0x45cffe;
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(local_6c);
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
          local_18 = local_18 + 1) {
        local_14 = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
        fVar4 = (float10)g_ModelPolygonData[polygon_index].uv_u[local_18] *
                (float10)65536;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44 /* combine 2-byte values */(polygon_index * 0x184,local_18 * 4 + polygon_index * 0x184));
        g_RenderVertexBuffer[local_14].u = (float)(int)ROUND(fVar4);
        fVar4 = (float10)g_ModelPolygonData[polygon_index].uv_v[local_18] *
                (float10)65536;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44 /* combine 2-byte values */(polygon_index * 0x184,local_18 * 4 + polygon_index * 0x184));
        g_RenderVertexBuffer[local_14].v = (float)(int)ROUND(fVar4);
      }
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
                  ((SMRGLHeaderPrimitive *)&local_c4);
      }
      else if (g_GouraudShadingEnabled == 0) {
        engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60((SMRGLHeaderPrimitive *)&local_c4);
      }
      else {
        engine_3d_c_renderPolygonTextureWrappedStandard_FUN_00405ce0
                  ((SMRGLHeaderPrimitive *)&local_c4);
      }
    }
    else if (local_1c == 0) {
      if (g_EditorTextureMode != 4) {
        local_20 = g_ModelPolygonData[polygon_index].material_id;
        local_bc = 0x45d168;
        engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
        if (g_GouraudShadingEnabled == 0) {
          if (g_ZBufferEnabled == 0) {
            engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0((SMRGLHeaderPrimitive *)&local_c4);
          }
          else {
            engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
                      ((SMRGLHeaderPrimitive *)&local_c4);
          }
        }
        else if (g_ZBufferEnabled == 0) {
          engine_3d_c_renderPolygon_FUN_00403ba0((SMRGLHeaderPrimitive *)&local_c4);
        }
        else {
          engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50((SMRGLHeaderPrimitive *)&local_c4);
        }
      }
    }
    else {
      local_20 = -g_EditorColorMode;
      local_bc = 0x45d111;
      engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0((SMRGLHeaderPrimitive *)&local_c4);
      }
      else {
        engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0((SMRGLHeaderPrimitive *)&local_c4);
      }
    }
  }
  return;
}
