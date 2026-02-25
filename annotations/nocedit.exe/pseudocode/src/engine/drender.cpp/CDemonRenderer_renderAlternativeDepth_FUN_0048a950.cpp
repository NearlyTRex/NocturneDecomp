// Name: engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
// Address: 0048a950
// Address Range: [[0048a950, 0048aa49]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < (prim->base).count) {
      iVar2 = 0;
      pSVar3 = prim;
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
      } while (iVar4 < (prim->base).count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar4 = this_ptr->face_capture_enabled;
      if ((iVar4 != 0) && (this_ptr->face_count != 0)) {
        this_ptr->face_capture_enabled = local_18;
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags.dword = RENDER_ALTERNATIVE_DEPTH;
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(prim->base).count,g_VertexIndexBuffer);
      this_ptr->face_capture_enabled = iVar4;
    }
  }
  return;
}
