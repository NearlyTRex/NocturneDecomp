// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
// Address: 004696f0
// Address Range: [[004696f0, 00469799]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  SMRGLPrimitivePoly *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      pSVar1 = poly;
      iVar2 = 0;
      do {
        *(int *)((int)g_VertexIndexBuffer + iVar2) = pSVar1->vertices[0].vertex_index;
        iVar3 = iVar3 + 1;
        pSVar1 = (SMRGLPrimitivePoly *)&(pSVar1->base).surface_normal.B;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (poly->base).base.count);
    }
    if (this_ptr->shadow_pass_active == 0) {
      g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
      g_VertexPreprocessMode = 6;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_0046ec58;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
  }
  return;
}
