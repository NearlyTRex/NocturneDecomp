// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_00407640
// Address: 00407640
// Address Range: [[00407640, 00407732]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407640(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407640(int param_1,uint param_2,int param_3)

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
    _DAT_01c38b54 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c35e64 =
           engine_light_cpp_calculateLighting_FUN_004e28b0
                     (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    }
    _DAT_01c38b58 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c38b58 = 1;
      }
    }
    else {
      _DAT_01c38b58 = 5;
    }
    if (_DAT_01c35e68 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00433000
                (*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return;
}
