// Name: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
// Address: 0048bf10
// Address Range: [[0048bf10, 0048bfd6]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

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
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = RENDER_ENGINE_CORE_COMPLEX;
      }
      else {
        g_RenderStateFlags = 0;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      g_RenderStateFlag2 = PREPROCESS_NONE;
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
    }
  }
  return;
}
