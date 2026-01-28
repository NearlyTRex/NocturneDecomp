// Name: engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
// Address: 0048aa50
// Address Range: [[0048aa50, 0048ab40]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  uint local_14;
  
  g_RenderPixelCounter = 0;
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < (polygon_info->base).count) {
    iVar3 = 0;
    pSVar4 = polygon_info;
    do {
      iVar1 = pSVar4[1].base.type;
      *(int *)((int)g_VertexIndexBuffer + iVar3) = iVar1;
      iVar3 = iVar3 + 4;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
    } while (iVar2 < (polygon_info->base).count);
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags = RENDER_TEXTURE_BASE;
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35;
    }
    else {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 0x29d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't use demonZFacetCount in shadow mode!");
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
    iVar2 = g_RenderPixelCounter;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
