// Name: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0048ac40
// Address: 0048ac40
// Address Range: [[0048ac40, 0048ad85]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0048ac40(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0048ac40(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  uint local_14;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar6 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar6 != 0)) {
    local_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      iVar4 = 0;
      pSVar3 = poly;
      do {
        iVar1 = pSVar3->vertices[0].vertex_index;
        *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if ((this_ptr->face_count == 0) && (this_ptr->skip_uv_extraction == 0)) {
        iVar5 = 0;
        iVar6 = 0;
        pSVar2 = &poly->base;
        if (0 < (poly->base).base.count) {
          do {
            iVar2 = *(int *)((int)g_VertexIndexBuffer + iVar6);
            this_ptr->vertex_buffer_ptr[iVar2].u = pSVar2[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar2].v = (int)pSVar2[1].surface_normal.A;
            pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar5 < (poly->base).base.count);
        }
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = PREPROCESS_NEAR_PLANE_CORRECT;
        g_ScanlineRenderFunc =
             (MainScanlineFunc *)core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
    }
  }
  return;
}
