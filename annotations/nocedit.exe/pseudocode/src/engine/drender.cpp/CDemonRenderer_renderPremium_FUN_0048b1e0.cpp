// Name: engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
// Address: 0048b1e0
// Address Range: [[0048b1e0, 0048b31b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar4 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < (prim->base).count) {
        iVar2 = 0;
        iVar4 = 0;
        pSVar3 = prim;
        do {
          iVar1 = pSVar3[1].base.type;
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar3[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar3[1].surface_normal.A;
          }
          *(int *)((int)g_VertexIndexBuffer + iVar2) = iVar1;
          pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < (prim->base).count);
      }
    }
    else {
      iVar4 = 0;
      if (0 < (prim->base).count) {
        iVar2 = 0;
        pSVar3 = prim;
        do {
          *(int *)((int)g_VertexIndexBuffer + iVar2) = pSVar3[1].base.type;
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
        } while (iVar4 < (prim->base).count);
      }
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags.dword = RENDER_ENGINE_CORE_PREMIUM;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,g_VertexIndexBuffer);
  }
  return;
}
