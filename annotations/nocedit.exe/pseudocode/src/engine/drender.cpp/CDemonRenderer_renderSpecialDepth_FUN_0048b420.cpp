// Name: engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
// Address: 0048b420
// Address Range: [[0048b420, 0048b548]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SMRGLHeaderPrimitive *pSVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar3 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < (prim->base).count) {
        iVar5 = 0;
        iVar3 = 0;
        pSVar3 = prim;
        do {
          iVar1 = pSVar3[1].base.type;
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar3[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar1].v = (int)pSVar3[1].surface_normal.A;
          }
          *(int *)((int)g_VertexIndexBuffer + iVar5) = iVar1;
          pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar3 < (prim->base).count);
      }
    }
    else {
      iVar2 = 0;
      if (0 < (prim->base).count) {
        iVar4 = 0;
        pSVar1 = prim;
        do {
          *(int *)((int)g_VertexIndexBuffer + iVar4) = pSVar1[1].base.type;
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->surface_normal).B;
        } while (iVar2 < (prim->base).count);
      }
    }
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST);
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,g_VertexIndexBuffer);
  }
  return;
}
