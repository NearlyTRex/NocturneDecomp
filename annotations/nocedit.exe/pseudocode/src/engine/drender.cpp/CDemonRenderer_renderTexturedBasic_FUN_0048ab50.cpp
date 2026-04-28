// Name: engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
// Address: 0048ab50
// Address Range: [[0048ab50, 0048ac30]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_RenderedTriangleCount;
  g_RenderPixelCounter = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->face_count == 0) {
    g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37;
  }
  else {
    g_RenderStateFlags.dword = 0;
    g_VertexPreprocessMode = PREPROCESS_NONE;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5;
  }
  iVar2 = this_ptr->face_count;
  if (g_UseExternalRenderer != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (g_UseExternalRenderer != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(this_ptr,iVar2);
  }
  g_RenderedTriangleCount = iVar1;
  return (uint)(g_RenderPixelBudget <= g_RenderPixelCounter);
}
