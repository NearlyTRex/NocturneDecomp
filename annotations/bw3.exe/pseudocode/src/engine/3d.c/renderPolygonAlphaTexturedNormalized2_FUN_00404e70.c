// Name: engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00404e70
// Address: 00404e70
// Address Range: [[00404e70, 00404f06]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized2_FUN_00404e70(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized2_FUN_00404e70(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (g_INT_005fba20 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_SOLID_ALPHA_BLEND);
    g_VertexPreprocessMode = 2;
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,(int *)(prim + 1));
  }
  return &prim[1].base.type + (prim->base).count;
}
