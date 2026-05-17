// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0048a820
// Address: 0048a820
// Address Range: [[0048a820, 0048a89a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0048a820(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0048a820(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58;
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
