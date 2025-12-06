// Name: engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
// Address: 0048aeb0
// Address Range: [[0048aeb0, 0048b021]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000010;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if ((this_ptr->plane_culling_enabled == 0) ||
       (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0))
    {
      if (this_ptr->face_count == 0) {
        iVar3 = 0;
        if (0 < *(int *)(render_flags + 4)) {
          iVar4 = 0;
          iVar2 = render_flags;
          do {
            iVar1 = *(int *)(iVar2 + 0x18);
            if (this_ptr->field8_0x20 == 0) {
              this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar2 + 0x1c);
              this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar2 + 0x20);
            }
            *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
            iVar2 = iVar2 + 0xc;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < *(int *)(render_flags + 4));
        }
      }
      else {
        iVar3 = 0;
        if (0 < *(int *)(render_flags + 4)) {
          iVar4 = 0;
          iVar2 = render_flags;
          do {
            *(uint *)((int)g_VertexIndexBuffer + iVar4) = *(uint *)(iVar2 + 0x18);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0xc;
          } while (iVar3 < *(int *)(render_flags + 4));
        }
      }
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = in_stack_00000010;
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      }
      else {
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,*(int *)(render_flags + 4),g_VertexIndexBuffer);
    }
    return;
  }
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
            (this_ptr,polygon_info,render_flags);
  return;
}
