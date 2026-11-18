// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
// Address: 0046b580
// Address Range: [[0046b580, 0046b660]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_RenderedTriangleCount;
  g_RenderPixelCounter = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->shadow_pass_active == 0) {
    g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    g_VertexPreprocessMode = 6;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_0046fea7;
  }
  else {
    g_RenderStateFlags.dword = 0;
    g_VertexPreprocessMode = 0;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046ff25;
  }
  iVar2 = this_ptr->shadow_pass_active;
  if (g_INT_01c6cee8 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (g_INT_01c6cee8 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(this_ptr,iVar2);
  }
  g_RenderedTriangleCount = iVar1;
  return (uint)(g_RenderPixelBudget <= g_RenderPixelCounter);
}
