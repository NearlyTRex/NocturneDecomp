// Name: engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40
// Address: 00406f40
// Address Range: [[00406f40, 00407078]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40(int param_1)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    engine_3d_c_renderPolygonDepthWritePass_FUN_00405980(param_1);
    iVar1 = engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0(param_1);
    return iVar1;
  }
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c35e68 == 0) {
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
      _DAT_01c38b54 = 0x28d;
      _DAT_01c38b58 = 5;
      engine_clipper_c_clipPolygonToViewport_FUN_00433000
                (*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
      return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
    }
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
    _DAT_01c38b54 = 0x8d;
    _DAT_01c38b58 = 5;
    engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
