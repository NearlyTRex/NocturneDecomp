// Name: engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0
// Address: 00406de0
// Address Range: [[00406de0, 00406f15]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (g_UseExternalRenderer == 0) {
    engine_3d_c_renderPolygonDepthWriteTextured_FUN_00405960(polygon_info);
    pSVar2 = engine_3d_c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(polygon_info);
    return pSVar2;
  }
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_AdvancedClippingEnabled == 0) {
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
      g_RenderStateFlags.dword = RENDER_SPECIAL_EFFECTS;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((polygon_info->base).count,(int *)(polygon_info + 1));
      return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
    }
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
    g_RenderStateFlags.dword = RENDER_COMPLEX_EFFECTS;
    g_RenderStateFlag2 = PREPROCESS_PRIMITIVE_SPECIAL;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}
