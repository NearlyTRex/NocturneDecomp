// Name: engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
// Address: 00404a40
// Address Range: [[00404a40, 00404adf]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags.dword = RENDER_PLANE_MASKED_LIT;
    g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}
