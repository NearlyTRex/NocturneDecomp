// Name: engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
// Address: 0048ae10
// MANUAL RECONSTRUCTION
// Address Range: [[0048ae10, 0048aea8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags.dword = render_flags;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
