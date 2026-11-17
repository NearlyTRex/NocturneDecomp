// Name: engine_3d.c_renderPolygonVertexAlphaLitOp60_FUN_00406a50
// Address: 00406a50
// Address Range: [[00406a50, 00406aef]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_00406a50(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_00406a50(SMRGLHeaderPrimitive *prim)

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
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_ALPHA_FROM_VERTEX);
    g_VertexPreprocessMode = 1;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
