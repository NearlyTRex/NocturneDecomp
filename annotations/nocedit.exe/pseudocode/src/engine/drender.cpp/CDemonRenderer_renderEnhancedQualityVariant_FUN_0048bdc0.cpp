// Name: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
// Address: 0048bdc0
// Address Range: [[0048bdc0, 0048bf04]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < (polygon_info->base).count) {
      iVar3 = 0;
      pSVar2 = polygon_info;
      do {
        iVar1 = pSVar2[1].base.type;
        *(int *)((int)g_VertexIndexBuffer + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (polygon_info->base).count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags.dword = RENDER_ENGINE_ULTRA_QUALITY;
        if ((this_ptr->unk == 0) && (iVar4 = 0, 0 < (polygon_info->base).count)) {
          iVar3 = 0;
          pSVar2 = polygon_info;
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
      else {
        g_RenderStateFlags.dword = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
    }
  }
  return;
}
