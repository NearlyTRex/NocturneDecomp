// Name: engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0
// Address: 00405aa0
// Address Range: [[00405aa0, 00405b4b]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive *prim)

{
  if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
  }
  else if (g_BitsPerPixel == 0x20) {
    g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
  }
  else {
    g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  g_VertexPreprocessMode = PREPROCESS_NONE;
  if (g_BypassClipping != 0) {
    engine_3d_c_rasterizePolygonHardware_FUN_004d1340
              ((SRenderVertex **)(prim + 1),(prim->base).count);
    return (SMRGLHeaderExtended *)&g_RenderResult;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,(int *)(prim + 1));
  return (SMRGLHeaderExtended *)&g_RenderResult;
}
