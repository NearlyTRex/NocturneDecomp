// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
// Address: 0048a8a0
// Address Range: [[0048a8a0, 0048a949]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  SMRGLPrimitivePoly *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar3 != 0)) {
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
              (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
  }
  return;
}
