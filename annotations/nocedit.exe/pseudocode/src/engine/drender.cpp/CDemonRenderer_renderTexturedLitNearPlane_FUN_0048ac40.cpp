// Name: engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
// Address: 0048ac40
// Address Range: [[0048ac40, 0048ad85]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  uint uVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    uVar5 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(in_stack_0000000c + 4)) {
      iVar4 = 0;
      iVar2 = in_stack_0000000c;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        uVar5 = uVar5 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_stack_0000000c + 4));
    }
    if (((uVar5 & 0x80000000) == 0) || ((uVar5 & 0x1f) == 0)) {
      if ((this_ptr->face_count == 0) && (this_ptr->field8_0x20 == 0)) {
        iVar4 = 0;
        iVar3 = 0;
        iVar2 = in_stack_0000000c;
        if (0 < *(int *)(in_stack_0000000c + 4)) {
          do {
            iVar1 = *(int *)((int)g_VertexIndexBuffer + iVar3);
            this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar2 + 0x1c);
            this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar2 + 0x20);
            iVar2 = iVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(in_stack_0000000c + 4));
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
                (this_ptr,*(int *)(in_stack_0000000c + 4),g_VertexIndexBuffer);
    }
  }
  return;
}
