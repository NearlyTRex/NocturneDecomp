// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
// Address: 0046d330
// Address Range: [[0046d330, 0046d3b7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

{
  int iVar1;
  
  if (this_ptr->plane_culling_enabled == 0) {
    if (this_ptr->shadow_pass_active != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
    if (iVar1 == 0) {
      return;
    }
    if (this_ptr->shadow_pass_active != 0) {
      return;
    }
  }
  _DAT_01c6e2b4 = 0xc4;
  _DAT_01c6e2b8 = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_00587cd0((prim->base).count,(int *)(prim + 1));
  if (DAT_007e3e88 < 3) {
    return;
  }
  core_asgaya_cpp_rasterizePolygonCustom_FUN_005a23c0
            ((SRenderVertex *)&DAT_007e3e8c,DAT_007e3e88,scanline_renderer);
  return;
}
