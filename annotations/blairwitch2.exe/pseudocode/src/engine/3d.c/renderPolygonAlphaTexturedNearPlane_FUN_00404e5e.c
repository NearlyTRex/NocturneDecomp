// Name: engine_3d.c_renderPolygonAlphaTexturedNearPlane_FUN_00404e5e
// Address: 00404e5e
// Address Range: [[00404e5e, 00404ef6]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonAlphaTexturedNearPlane_FUN_00404e5e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonAlphaTexturedNearPlane_FUN_00404e5e(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(param_1 + 8);
  if (iVar1 != 0) {
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
    _DAT_01c38b54 = 9;
    _DAT_01c38b58 = 3;
    engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
