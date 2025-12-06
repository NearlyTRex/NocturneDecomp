// Name: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
// Address: 00407620
// Address Range: [[00407620, 00407712]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(SMRGLHeaderPrimitive * primitive, int render_flags, int render_state_flags, int alpha_blend_flags, int special_render_mode)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
          (SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags,
          int alpha_blend_flags,int special_render_mode)

{
  SMRGLHeaderExtended *pSVar1;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *extraout_EAX_00;
  
  pSVar1 = (SMRGLHeaderExtended *)
           engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (pSVar1 != (SMRGLHeaderExtended *)0x0) {
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
    g_RenderStateFlags = render_state_flags;
    if ((render_state_flags & 0x10U) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_00505780
                     ((primitive->surface_normal).A,(primitive->surface_normal).B,
                      (primitive->surface_normal).C);
    }
    g_RenderStateFlag2 = special_render_mode;
    if (special_render_mode == 0) {
      if ((alpha_blend_flags & 0xc0U) != 0) {
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
      }
    }
    else {
      g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((primitive->base).count,(int *)(primitive + 1));
      return extraout_EAX_00;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)(primitive + 1));
    pSVar1 = extraout_EAX;
  }
  return pSVar1;
}
