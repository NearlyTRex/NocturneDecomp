// Name: engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
// Address: 0048aeb0
// MANUAL RECONSTRUCTION
// Address Range: [[0048aeb0, 0048b021]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

{
  SMRGLHeaderPrimitive *pSVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar2;
  int iVar4;
  int iVar5;
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if ((this_ptr->plane_culling_enabled == 0) ||
       (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar2 != 0)) {
      if (this_ptr->face_count == 0) {
        iVar2 = 0;
        if (0 < (prim->base).count) {
          iVar5 = 0;
          pSVar2 = prim;
          do {
            iVar1 = pSVar2[1].base.type;
            if (this_ptr->skip_uv_extraction == 0) {
              this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2[1].base.count;
              this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2[1].surface_normal.A.i;
            }
            *(int *)((int)g_VertexIndexBuffer + iVar5) = iVar1;
            pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar2 < (prim->base).count);
        }
      }
      else {
        iVar3 = 0;
        if (0 < (prim->base).count) {
          iVar4 = 0;
          pSVar1 = prim;
          do {
            *(int *)((int)g_VertexIndexBuffer + iVar4) = pSVar1[1].base.type;
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->surface_normal).B;
          } while (iVar3 < (prim->base).count);
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
                (this_ptr,(prim->base).count,g_VertexIndexBuffer);
    }
    return;
  }
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(this_ptr,prim,render_flags);
  return;
}
