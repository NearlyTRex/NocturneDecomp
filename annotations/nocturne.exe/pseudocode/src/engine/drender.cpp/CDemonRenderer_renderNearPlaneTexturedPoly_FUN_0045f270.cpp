// Name: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270
// Address: 0045f270
// Address Range: [[0045f270, 0045f3b5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar3 != 0)) {
    local_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      iVar4 = 0;
      pSVar2 = poly;
      do {
        iVar1 = pSVar2->vertices[0].vertex_index;
        *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if ((this_ptr->face_count == 0) && (this_ptr->skip_uv_extraction == 0)) {
        iVar4 = 0;
        iVar3 = 0;
        pSVar2 = poly;
        if (0 < (poly->base).base.count) {
          do {
            iVar1 = *(int *)(&DAT_01b4d76c + iVar3);
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2->vertices[0].texture_v;
            pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < (poly->base).base.count);
        }
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 3;
        g_ScanlineRenderFunc =
             (MainScanlineFunc *)core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = 0;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
    }
  }
  return;
}
