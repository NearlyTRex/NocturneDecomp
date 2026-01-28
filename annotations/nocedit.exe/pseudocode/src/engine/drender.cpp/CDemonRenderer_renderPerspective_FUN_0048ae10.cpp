// Name: engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
// Address: 0048ae10
// Address Range: [[0048ae10, 0048aea8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags = render_flags;
    }
    else {
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return;
}
