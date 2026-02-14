// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
// Address: 0048b550
// Address Range: [[0048b550, 0048b649]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (polygon_info->base).count) {
      iVar4 = 0;
      pSVar2 = polygon_info;
      do {
        iVar1 = pSVar2[1].base.type;
        if (this_ptr->unk == 0) {
          this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2[1].base.count;
          this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2[1].surface_normal.A;
        }
        *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
        pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < (polygon_info->base).count);
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags.dword = RENDER_TEXTURE_PERSPECTIVE;
    }
    else {
      g_RenderStateFlags.dword = RENDER_TEXTURE_ENABLE;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
  }
  return;
}
