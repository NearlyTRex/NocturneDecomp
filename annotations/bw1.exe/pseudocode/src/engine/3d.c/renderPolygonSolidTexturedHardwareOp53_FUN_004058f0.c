// Name: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0
// Address: 004058f0
// Address Range: [[004058f0, 0040599b]]
// Convention: __cdecl
// Signature: undefined * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(int param_1)

{
  if (_DAT_01c51d00 == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
  }
  else if (DAT_0061b4a0 == 0x20) {
    _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
  }
  else {
    _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
  }
  _DAT_01c51d14 = 3;
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  _DAT_01c51d18 = 0;
  if (DAT_00713a6c != 0) {
    engine_fpoly_c_rasterizePolygonHardware_FUN_004c4d80
              ((int *)(param_1 + 0x18),*(uint *)(param_1 + 4));
    return &DAT_00713a84;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  return &DAT_00713a84;
}
