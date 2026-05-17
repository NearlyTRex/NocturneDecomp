// Name: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0048ac40
// Address: 0048ac40
// MANUAL RECONSTRUCTION
// Address Range: [[0048ac40, 0048ad85]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0048ac40(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0048ac40(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  uint local_14;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar6 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar6 != 0)) {
    local_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      do {
        iVar1 = poly->vertices[iVar3].vertex_index;
        g_VertexIndexBuffer[iVar3] = iVar1;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if ((this_ptr->face_count == 0) && (this_ptr->skip_uv_extraction == 0)) {
        iVar5 = 0;
        if (0 < (poly->base).base.count) {
          do {
            iVar2 = g_VertexIndexBuffer[iVar5];
            this_ptr->vertex_buffer_ptr[iVar2].u = poly->vertices[iVar5].texture_u;
            this_ptr->vertex_buffer_ptr[iVar2].v = poly->vertices[iVar5].texture_v;
            iVar5 = iVar5 + 1;
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
