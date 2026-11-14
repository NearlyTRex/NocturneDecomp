// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_004074b0
// Address: 004074b0
// Address Range: [[004074b0, 004075a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_004074b0(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_004074b0(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b4 = render_flags;
    if ((render_flags & 0x10U) != 0) {
      _DAT_01c6b5c4 =
           engine_light_cpp_calculateLighting_FUN_004e0e00
                     ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                      (primitive->surface_normal).C.i);
    }
    _DAT_01c6e2b8 = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        _DAT_01c6e2b8 = 1;
      }
    }
    else {
      _DAT_01c6e2b8 = 5;
    }
    if (_DAT_01c6b5c8 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_0043bac0
                ((primitive->base).count,(int *)(primitive + 1));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840((primitive->base).count,(int *)(primitive + 1));
  }
  return;
}
