// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
// Address: 004699a0
// Address Range: [[004699a0, 00469a80]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_RenderedTriangleCount;
  g_RenderPixelCounter = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->shadow_pass_active == 0) {
    g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    g_VertexPreprocessMode = 6;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_0046ee37;
  }
  else {
    g_RenderStateFlags.dword = 0;
    g_VertexPreprocessMode = 0;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046eeb5;
  }
  iVar2 = this_ptr->shadow_pass_active;
  if (g_INT_01c37788 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (g_INT_01c37788 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(this_ptr,iVar2);
  }
  g_RenderedTriangleCount = iVar1;
  return (uint)(g_RenderPixelBudget <= g_RenderPixelCounter);
}
