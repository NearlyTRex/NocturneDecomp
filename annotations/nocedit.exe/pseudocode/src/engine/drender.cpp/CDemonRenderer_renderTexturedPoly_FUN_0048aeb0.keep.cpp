// Name: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0048aeb0
// Address: 0048aeb0
// MANUAL RECONSTRUCTION
// Address Range: [[0048aeb0, 0048b021]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0048aeb0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0048aeb0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

{
  int iVar3;
  int iVar2;
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if ((this_ptr->plane_culling_enabled == 0) ||
       (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar2 != 0))
    {
      if (this_ptr->face_count == 0) {
        iVar2 = 0;
        if (0 < (poly->base).base.count) {
          do {
            iVar1 = poly->vertices[iVar2].vertex_index;
            if (this_ptr->skip_uv_extraction == 0) {
              this_ptr->vertex_buffer_ptr[iVar1].u = poly->vertices[iVar2].texture_u;
              this_ptr->vertex_buffer_ptr[iVar1].v = poly->vertices[iVar2].texture_v;
            }
            g_VertexIndexBuffer[iVar2] = iVar1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (poly->base).base.count);
        }
      }
      else {
        iVar3 = 0;
        if (0 < (poly->base).base.count) {
          do {
            g_VertexIndexBuffer[iVar3] = poly->vertices[iVar3].vertex_index;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (poly->base).base.count);
        }
      }
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags.dword = render_flags;
        g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
    }
    return;
  }
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
            (this_ptr,&poly->base,render_flags);
  return;
}
