// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
// Address: 00483c50
// Address Range: [[00483c50, 00483cd7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

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
  _DAT_01c51d14 = 0xc4;
  _DAT_01c51d18 = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0((prim->base).count,(int *)(prim + 1));
  if (DAT_007c7554 < 3) {
    return;
  }
  engine_zraster_c_rasterizePolygonCustom_FUN_005bf640
            ((SRenderVertex *)&DAT_007c7558,DAT_007c7554,scanline_renderer);
  return;
}
