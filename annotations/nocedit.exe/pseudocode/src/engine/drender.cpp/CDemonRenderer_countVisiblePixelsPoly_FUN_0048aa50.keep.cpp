// Name: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0048aa50
// Address: 0048aa50
// MANUAL RECONSTRUCTION
// Address Range: [[0048aa50, 0048ab40]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0048aa50(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0048aa50(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  int iVar4;
  uint local_14;
  int iVar1;

  g_RenderPixelCounter = 0;
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar4 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < (poly->base).base.count) {
    do {
      iVar1 = poly->vertices[iVar2].vertex_index;
      g_VertexIndexBuffer[iVar2] = iVar1;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
    } while (iVar2 < (poly->base).base.count);
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35;
    }
    else {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 669;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't use demonZFacetCount in shadow mode!");
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
    iVar4 = g_RenderPixelCounter;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}
