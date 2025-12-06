// Name: engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
// Address: 0048b420
// Address Range: [[0048b420, 0048b548]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar2 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < *(int *)(in_stack_0000000c + 4)) {
        iVar4 = 0;
        iVar2 = 0;
        iVar3 = in_stack_0000000c;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (this_ptr->field8_0x20 == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar3 + 0x1c);
            this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar3 + 0x20);
          }
          *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(in_stack_0000000c + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(in_stack_0000000c + 4)) {
        iVar4 = 0;
        iVar3 = in_stack_0000000c;
        do {
          *(uint *)((int)g_VertexIndexBuffer + iVar4) = *(uint *)(iVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar2 < *(int *)(in_stack_0000000c + 4));
      }
    }
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags = RENDER_ENGINE_SPECIAL_DEPTH;
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d;
    }
    else {
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,*(int *)(in_stack_0000000c + 4),g_VertexIndexBuffer);
  }
  return;
}
