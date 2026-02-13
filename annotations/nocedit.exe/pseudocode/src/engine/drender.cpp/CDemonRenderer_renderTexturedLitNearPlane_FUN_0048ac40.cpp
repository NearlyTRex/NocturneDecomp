// Name: engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
// Address: 0048ac40
// Address Range: [[0048ac40, 0048ad85]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    local_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < (polygon_info->base).count) {
      iVar4 = 0;
      pSVar2 = polygon_info;
      do {
        iVar1 = pSVar2[1].base.type;
        *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (polygon_info->base).count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if ((this_ptr->face_count == 0) && (this_ptr->unk == 0)) {
        iVar4 = 0;
        iVar3 = 0;
        pSVar2 = polygon_info;
        if (0 < (polygon_info->base).count) {
          do {
            iVar1 = *(int *)((int)g_VertexIndexBuffer + iVar3);
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2[1].surface_normal.A;
            pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < (polygon_info->base).count);
        }
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags = RENDER_TEXTURE_LIT;
        g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
        g_ScanlineRenderFunc =
             core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0;
      }
      else {
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
    }
  }
  return;
}
