// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
// Address: 00460e80
// Address Range: [[00460e80, 00460f07]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

{
  int iVar1;
  
  if (this_ptr->plane_culling_enabled == 0) {
    if (this_ptr->face_count != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
    if (iVar1 == 0) {
      return;
    }
    if (this_ptr->face_count != 0) {
      return;
    }
  }
  _DAT_01c039a0 = 0xc4;
  _DAT_01c039a4 = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_0055e040((prim->base).count,(int *)(prim + 1));
  if (DAT_00766c70 < 3) {
    return;
  }
  engine_3d_c_rasterizePolygonCustom_FUN_00562de0
            ((SRenderVertex *)&DAT_00766c74,DAT_00766c70,scanline_renderer);
  return;
}
