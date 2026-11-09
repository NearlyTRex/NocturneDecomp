// Name: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405850
// Address: 00405850
// Address Range: [[00405850, 004058ec]]
// Convention: __cdecl
// Signature: undefined * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405850(int param_1)

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
  _DAT_01c6e2b8 = 0;
  _DAT_01c6e2b4 = 1;
  if (DAT_007303ec != 0) {
    engine_fpoly_c_rasterizePolygonHardware_FUN_004b3960
              ((int *)(param_1 + 0x18),*(uint *)(param_1 + 4));
    return &DAT_00730404;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  return &DAT_00730404;
}
