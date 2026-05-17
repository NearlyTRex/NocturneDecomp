// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0048a950
// Address: 0048a950
// Address Range: [[0048a950, 0048aa49]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0048a950(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0048a950(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int local_18;
  uint local_14;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < (poly->base).base.count) {
      iVar2 = 0;
      pSVar3 = &poly->base;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)g_VertexIndexBuffer + iVar2) = iVar1;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        if ((int)(this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x & -0x80000000) != 0)
        {
          local_18 = 1;
        }
        iVar2 = iVar2 + 4;
        iVar4 = iVar4 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar4 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar3 = this_ptr->face_capture_enabled;
      if ((iVar3 != 0) && (this_ptr->face_count != 0)) {
        this_ptr->face_capture_enabled = local_18;
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags.dword = (RENDER_LIGHTING_COLOR | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
      this_ptr->face_capture_enabled = iVar3;
    }
  }
  return;
}
