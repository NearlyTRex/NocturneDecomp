// Name: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00406520
// Address: 00406520
// Address Range: [[00406520, 004065e8]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406520(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
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
    _DAT_01c51d14 = 0x10;
    _DAT_01c51d18 = 0;
    _DAT_01c4f024 =
         engine_light_cpp_calculateLighting_FUN_004ffd40
                   (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    _DAT_01c4f020 = engine_3d_c_lookupLitColor_FUN_00403990(DAT_00713a5c,_DAT_01c4f024);
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
