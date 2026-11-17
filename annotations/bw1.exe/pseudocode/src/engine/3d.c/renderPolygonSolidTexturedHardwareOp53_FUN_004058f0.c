// Name: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0
// Address: 004058f0
// Address Range: [[004058f0, 0040599b]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(SMRGLHeaderPrimitive *prim)

{
  if (g_MMXSupported == 0) {
    if (g_INT_0061b4a0 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
  }
  else if (g_INT_0061b4a0 == 0x20) {
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
  }
  else {
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
  }
  g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  g_VertexPreprocessMode = 0;
  if (g_BypassClipping != 0) {
    engine_fpoly_c_rasterizePolygonHardware_FUN_004c4d80
              ((SRenderVertex **)(prim + 1),(prim->base).count);
    return (SMRGLHeaderExtended *)&g_RenderResult;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
  return (SMRGLHeaderExtended *)&g_RenderResult;
}
