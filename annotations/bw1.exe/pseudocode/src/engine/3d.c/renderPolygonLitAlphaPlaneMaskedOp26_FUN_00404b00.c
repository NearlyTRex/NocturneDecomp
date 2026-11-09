// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00
// Address: 00404b00
// Address Range: [[00404b00, 00404be5]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 == 0) goto LAB_00404b6e;
  if (_DAT_01c51cac == 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) goto LAB_00404b38;
      _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
    else {
      if (DAT_0061b4a0 != 0x20) goto LAB_00404b9d;
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
  }
  else if (_DAT_01c51d00 == 0) {
    if (DAT_0061b4a0 == 0x20) {
LAB_00404b38:
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
LAB_00404b9d:
    _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
  }
  _DAT_01c51d14 = 0xd9;
  _DAT_01c51d18 = 1;
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(param_1);
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
LAB_00404b6e:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
