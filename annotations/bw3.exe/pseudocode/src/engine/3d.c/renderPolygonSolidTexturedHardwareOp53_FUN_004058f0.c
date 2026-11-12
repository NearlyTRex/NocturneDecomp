// Name: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0
// Address: 004058f0
// Address Range: [[004058f0, 0040599b]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(SMRGLHeaderPrimitive *prim)

{
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
  _DAT_01c6e2b4 = 3;
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  _DAT_01c6e2b8 = 0;
  if (DAT_007303ec != 0) {
    engine_fpoly_c_rasterizePolygonHardware_FUN_004b3960
              ((SRenderVertex **)(prim + 1),(prim->base).count);
    return (SMRGLHeaderExtended *)&DAT_00730404;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,(int *)(prim + 1));
  return (SMRGLHeaderExtended *)&DAT_00730404;
}
