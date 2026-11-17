// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0
// Address: 0046b7d0
// Address Range: [[0046b7d0, 0046b84a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int polygon)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int polygon)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(polygon + 8)), iVar1 != 0)) {
    g_RenderStateFlags.bytes[0] = this_ptr->shadow_pass_active == 0;
    if ((bool)g_RenderStateFlags.bytes[0]) {
      g_VertexPreprocessMode = 6;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359;
    }
    else {
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    g_RenderStateFlags.dword._1_3_ = 0;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,*(int *)(polygon + 4),(int *)(polygon + 0x18));
  }
  return;
}
