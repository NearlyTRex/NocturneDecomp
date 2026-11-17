// Name: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00
// Address: 00406e00
// Address Range: [[00406e00, 00406f35]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (g_INT_01c37788 == 0) {
    engine_3d_c_renderPolygonDepthWritePass_FUN_00405980(prim);
    pSVar2 = engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0(prim);
    return pSVar2;
  }
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_AdvancedClippingEnabled == 0) {
      if (g_MMXSupported == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
        }
      }
      else if (g_INT_006141c0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_DEPTH_WRITE | RENDER_COLOR_FROM_VERTEX);
      g_VertexPreprocessMode = 0;
      engine_clipper_c_clipPolygonToViewport_FUN_00433000((prim->base).count,(int *)(prim + 1));
      return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
    }
    if (g_MMXSupported == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (g_INT_006141c0 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_DEPTH_WRITE);
    g_VertexPreprocessMode = 4;
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
