// Name: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980
// Address: 00404980
// Address Range: [[00404980, 00404af4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404980(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404980(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_TexturesDisabled == 0) {
      if (g_INT_006104ec == 0) {
        if (g_MMXSupported == 0) {
          if (g_INT_0061b4a0 == 0x20) {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
          }
          else {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
          }
        }
        else if (g_INT_0061b4a0 == 0x20) {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
        }
        else {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        g_RenderStateFlags.dword = RENDER_LIGHTING_COLOR;
        g_VertexPreprocessMode = 0;
        g_ScanlineRenderFunc = pcVar2;
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_INT_0061b4a0 == 0x20) {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
          }
          else {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
          }
        }
        else if (g_INT_0061b4a0 == 0x20) {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
        }
        else {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        g_RenderStateFlags.dword = (RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 1;
        g_ScanlineRenderFunc = pcVar2;
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_INT_0061b4a0 == 0x20) {
          pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
        }
        else {
          pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
        }
      }
      else if (g_INT_0061b4a0 == 0x20) {
        pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
      }
      else {
        pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
      }
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = pcVar2;
    }
    g_CurrentLightingValue =
         engine_light_cpp_calculateLighting_FUN_004ffd40
                   ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i
                   );
    g_INT_01c4f020 =
         engine_3d_c_lookupLitColor_FUN_00403990(g_CurrentPolygonColor,g_CurrentLightingValue);
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
