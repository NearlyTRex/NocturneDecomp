// Name: engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00405040
// Address: 00405040
// Address Range: [[00405040, 004050d6]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized2_FUN_00405040(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized2_FUN_00405040(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
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
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_SOLID_ALPHA_BLEND);
    g_VertexPreprocessMode = 2;
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return &prim[1].base.type + (prim->base).count;
}
