// Name: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403af0
// Address: 00403af0
// Address Range: [[00403af0, 00403bb8]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403af0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403af0(int param_1)

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
    _DAT_01c38b54 = 0x10;
    _DAT_01c38b58 = 0;
    _DAT_01c35e64 =
         engine_light_cpp_calculateLighting_FUN_004e28b0
                   (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    _DAT_01c35e60 = engine_3d_c_lookupLitColor_FUN_004039e0(DAT_0070ca5c,_DAT_01c35e64);
    engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
