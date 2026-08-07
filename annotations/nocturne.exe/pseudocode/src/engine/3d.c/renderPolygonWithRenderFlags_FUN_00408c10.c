// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10
// Address: 00408c10
// Address Range: [[00408c10, 00408d02]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
    }
    g_RenderStateFlags.dword = render_flags;
    if ((render_flags & 0x10U) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_004c6cc0
                     ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                      (primitive->surface_normal).C.i);
    }
    g_VertexPreprocessMode = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        g_VertexPreprocessMode = 1;
      }
    }
    else {
      g_VertexPreprocessMode = 5;
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0
                ((primitive->base).count,(int *)(primitive + 1));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_00432cd0((primitive->base).count,(int *)(primitive + 1));
  }
  return;
}
