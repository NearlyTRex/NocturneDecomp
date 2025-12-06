// Name: engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0
// Address: 00405aa0
// Address Range: [[00405aa0, 00405b4b]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive *polygon_info)

{
  if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
  }
  else if (g_BitsPerPixel == 0x20) {
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
  }
  else {
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  g_RenderStateFlags = RENDER_VERTEX_LIGHTING;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  g_RenderStateFlag2 = PREPROCESS_NONE;
  if (g_BypassClipping != 0) {
    engine_3d_c_rasterizePolygon_FUN_004d1340
              ((SRenderVertex **)(polygon_info + 1),(polygon_info->base).count);
    return (SMRGLHeaderExtended *)&g_RenderResult;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0
            ((polygon_info->base).count,(int *)(polygon_info + 1));
  return (SMRGLHeaderExtended *)&g_RenderResult;
}
