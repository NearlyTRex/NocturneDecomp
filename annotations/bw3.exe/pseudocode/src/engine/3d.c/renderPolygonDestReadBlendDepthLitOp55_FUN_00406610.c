// Name: engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610
// Address: 00406610
// Address Range: [[00406610, 004066ce]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
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
    _DAT_01c6e2b4 = 0xc3;
    if (DAT_005fba38 < 0xff) {
      _DAT_01c6e2b4 = 0xe3;
    }
    _DAT_01c6e2b8 = 1;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(param_1);
    engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
