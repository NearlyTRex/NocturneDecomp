// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
// Address: 0046b750
// Address Range: [[0046b750, 0046b7d7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

{
  int iVar1;
  
  if (this_ptr->plane_culling_enabled == 0) {
    if (this_ptr->shadow_pass_active != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
    if (iVar1 == 0) {
      return;
    }
    if (this_ptr->shadow_pass_active != 0) {
      return;
    }
  }
  g_RenderStateFlags.dword = (RENDER_FOG_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
  g_VertexPreprocessMode = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_00594f40((prim->base).count,(int *)(prim + 1));
  if (g_INT_007bee30 < 3) {
    return;
  }
  core_zombie_cpp_rasterizePolygonCustom_FUN_0059a5d0
            (g_SRenderVertex_ARRAY_007bee34,g_INT_007bee30,scanline_renderer);
  return;
}
