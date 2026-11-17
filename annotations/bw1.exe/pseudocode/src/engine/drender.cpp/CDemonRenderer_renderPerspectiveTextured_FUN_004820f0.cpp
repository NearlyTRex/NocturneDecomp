// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_004820f0
// Address: 004820f0
// Address Range: [[004820f0, 0048216a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_004820f0(CDemonRenderer *this_ptr,int polygon)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_004820f0(CDemonRenderer *this_ptr,int polygon)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(polygon + 8)), iVar1 != 0)) {
    g_RenderStateFlags.bytes[0] = this_ptr->shadow_pass_active == 0;
    if ((bool)g_RenderStateFlags.bytes[0]) {
      g_VertexPreprocessMode = 6;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9;
    }
    else {
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    }
    g_RenderStateFlags.dword._1_3_ = 0;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
              (this_ptr,*(int *)(polygon + 4),(int *)(polygon + 0x18));
  }
  return;
}
