// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
// Address: 0045f9d0
// Address Range: [[0045f9d0, 0045faf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar2 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < (poly->base).base.count) {
        iVar4 = 0;
        iVar2 = 0;
        pSVar3 = poly;
        do {
          iVar1 = pSVar3->vertices[0].vertex_index;
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar3->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar3->vertices[0].texture_v;
          }
          *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
          pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < (poly->base).base.count);
      }
    }
    else {
      iVar2 = 0;
      if (0 < (poly->base).base.count) {
        iVar4 = 0;
        pSVar3 = poly;
        do {
          *(int *)(&DAT_01b4d76c + iVar4) = pSVar3->vertices[0].vertex_index;
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
        } while (iVar2 < (poly->base).base.count);
      }
    }
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST);
      g_VertexPreprocessMode = 6;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
  }
  return;
}
