// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
// Address: 0045ee60
// Address Range: [[0045ee60, 0045eeda]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
      g_VertexPreprocessMode = 6;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
