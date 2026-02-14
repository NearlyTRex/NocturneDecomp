// Name: engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
// Address: 0048bad0
// Address Range: [[0048bad0, 0048bb99]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (polygon_info->base).count) {
      pSVar1 = polygon_info;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & this_ptr->vertex_buffer_ptr[pSVar1[1].base.type].projected_vertex.screen_x;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->base).count;
      } while (iVar3 < (polygon_info->base).count);
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags.dword = RENDER_ENGINE_CORE_MAXIMUM;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
    }
  }
  return;
}
