// Name: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405a20
// Address: 00405a20
// Address Range: [[00405a20, 00405abc]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405a20(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405a20(SMRGLHeaderPrimitive *prim)

{
  if (_DAT_01c38b40 == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
  }
  else if (DAT_006141c0 == 0x20) {
    _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
  }
  else {
    _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
  }
  _DAT_01c38b58 = 0;
  _DAT_01c38b54 = 1;
  if (DAT_0070ca6c != 0) {
    engine_fpoly_c_rasterizePolygonHardware_FUN_004abdd0
              ((SRenderVertex **)(prim + 1),(prim->base).count);
    return (SMRGLHeaderExtended *)&DAT_0070ca84;
  }
  engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  return (SMRGLHeaderExtended *)&DAT_0070ca84;
}
