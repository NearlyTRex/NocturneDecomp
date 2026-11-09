// Name: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980
// Address: 00404980
// Address Range: [[00404980, 00404af4]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404980(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404980(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (DAT_007303f4 == 0) {
      if (0x00000001 == 0) {
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
        _DAT_01c6e2b4 = 0x10;
        _DAT_01c6e2b8 = 0;
      }
      else {
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
        _DAT_01c6e2b4 = 0xd0;
        _DAT_01c6e2b8 = 1;
      }
    }
    else {
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
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
    }
    _DAT_01c6b5c4 =
         engine_light_cpp_calculateLighting_FUN_004e0e00
                   (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    _DAT_01c6b5c0 = engine_3d_c_lookupLitColor_FUN_00403990(DAT_007303dc,_DAT_01c6b5c4);
    engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
