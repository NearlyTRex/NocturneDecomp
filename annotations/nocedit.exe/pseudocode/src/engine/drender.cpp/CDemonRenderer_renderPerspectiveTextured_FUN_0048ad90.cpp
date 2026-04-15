// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90
// Address: 0048ad90
// Address Range: [[0048ad90, 0048ae0a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar1 != 0)) {
    g_RenderStateFlags.bytes[0] = this_ptr->face_count == 0;
    if ((bool)g_RenderStateFlags.bytes[0]) {
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9;
    }
    else {
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    g_RenderStateFlags.dword._1_3_ = 0;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
