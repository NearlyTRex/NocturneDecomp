// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90
// Address: 0045ef90
// Address Range: [[0045ef90, 0045f089]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < (poly->base).base.count) {
      iVar2 = 0;
      pSVar3 = poly;
      do {
        iVar1 = pSVar3->vertices[0].vertex_index;
        *(int *)(&DAT_01b4d76c + iVar2) = iVar1;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        if ((int)(this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x & -0x80000000) != 0)
        {
          local_18 = 1;
        }
        iVar2 = iVar2 + 4;
        iVar4 = iVar4 + 1;
        pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
      } while (iVar4 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar4 = this_ptr->face_capture_enabled;
      if ((iVar4 != 0) && (this_ptr->face_count != 0)) {
        this_ptr->face_capture_enabled = local_18;
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags.dword = (RENDER_LIGHTING_COLOR | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 6;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = 0;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepth16BitConditional_FUN_00463ac7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
      this_ptr->face_capture_enabled = iVar4;
    }
  }
  return;
}
