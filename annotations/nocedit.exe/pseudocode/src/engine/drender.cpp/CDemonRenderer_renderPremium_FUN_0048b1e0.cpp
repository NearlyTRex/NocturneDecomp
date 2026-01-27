// Name: engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
// Address: 0048b1e0
// Address Range: [[0048b1e0, 0048b31b]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar4 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < (polygon_info->base).count) {
        iVar2 = 0;
        iVar4 = 0;
        pSVar3 = polygon_info;
        do {
          iVar1 = pSVar3[1].base.type;
          if (this_ptr->unk == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = (float)pSVar3[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar1].v = (float)pSVar3[1].surface_normal.A;
          }
          *(int *)((int)g_VertexIndexBuffer + iVar2) = iVar1;
          pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < (polygon_info->base).count);
      }
    }
    else {
      iVar4 = 0;
      if (0 < (polygon_info->base).count) {
        iVar2 = 0;
        pSVar3 = polygon_info;
        do {
          *(int *)((int)g_VertexIndexBuffer + iVar2) = pSVar3[1].base.type;
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
        } while (iVar4 < (polygon_info->base).count);
      }
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags = RENDER_ENGINE_CORE_PREMIUM;
    }
    else {
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
  }
  return;
}
