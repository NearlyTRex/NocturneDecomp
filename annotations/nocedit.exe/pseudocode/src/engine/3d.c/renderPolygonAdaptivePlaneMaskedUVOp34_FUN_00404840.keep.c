// Name: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404840
// Address: 00404840
// MANUAL RECONSTRUCTION
// Address Range: [[00404840, 00404a39]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404840(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404840(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLVertex *pSVar3;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar2 != 0) {
    if (g_TexturesDisabled == 0) {
      if (INT_00772a70 == 0) {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = PREPROCESS_NEAR_PLANE_CORRECT;
        engine_3d_c_calculatePolygonLighting_FUN_00403a00(primitive);
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags.dword = (RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
        engine_light_cpp_calculateLighting_FUN_00505780
                  ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                   (primitive->surface_normal).C.i);
        g_ActiveRenderColor =
             engine_3d_c_makeGrayscaleColor_FUN_004039c0
                       (g_CurrentPolygonColor,g_CurrentLightingValue);
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
        }
      }
      else if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_VertexPreprocessMode = 0;
      g_RenderStateFlags.dword = 0;
    }
    pSVar3 = (SMRGLVertex *)(primitive + 1);
    for (vertex_count = 0; vertex_count < (primitive->base).count; vertex_count = vertex_count + 1) {
      iVar1 = pSVar3[vertex_count].vertex_index;
      g_ProcessedVertexIndices[vertex_count] = iVar1;
      g_RenderVertexBuffer[iVar1].u = pSVar3[vertex_count].texture_u;
      g_RenderVertexBuffer[iVar1].v = pSVar3[vertex_count].texture_v;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(primitive + 1) + (primitive->base).count);
}
