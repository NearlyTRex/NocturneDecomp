// Name: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0
// Address: 004060b0
// Address Range: [[004060b0, 00406224]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_006b0278 == 0) {
      if (g_ResolutionTable[8].height == 0) {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
          }
          else {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
        }
        else {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
        }
        g_RenderStateFlags.dword = RENDER_LIGHTING_COLOR;
        g_VertexPreprocessMode = 0;
        g_ScanlineRenderFunc = pcVar2;
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
          }
          else {
            pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
        }
        else {
          pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
        }
        g_RenderStateFlags.dword = (RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 1;
        g_ScanlineRenderFunc = pcVar2;
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_BitsPerPixel == 0x20) {
          pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
        }
        else {
          pcVar2 = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
        }
      }
      else if (g_BitsPerPixel == 0x20) {
        pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
      }
      else {
        pcVar2 = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
      }
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = pcVar2;
    }
    g_CurrentLightingValue =
         engine_light_cpp_calculateLighting_FUN_004c6cc0
                   ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i
                   );
    g_ActiveRenderColor =
         engine_3d_c_lookupLitColor_FUN_00404680(DAT_006b0260,g_CurrentLightingValue);
    engine_clipper_c_clipAndRasterize_FUN_00432cd0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
