// Name: engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40
// Address: 00404e40
// Address Range: [[00404e40, 00404ed6]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void * __cdecl
engine_3d_c_renderPolygonVertexLitNearPlane_FUN_00404e40(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
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
    g_RenderStateFlags = RENDER_ADVANCED_TEXTURED;
    g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return &polygon_info[1].base.type + (polygon_info->base).count;
}
