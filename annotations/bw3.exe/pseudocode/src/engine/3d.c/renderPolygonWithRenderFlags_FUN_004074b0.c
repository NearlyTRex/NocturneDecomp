// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_004074b0
// Address: 004074b0
// Address Range: [[004074b0, 004075a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_004074b0(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_004074b0(int param_1,uint param_2,int param_3)

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
    _DAT_01c6e2b4 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c6b5c4 =
           engine_light_cpp_calculateLighting_FUN_004e0e00
                     (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    }
    _DAT_01c6e2b8 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c6e2b8 = 1;
      }
    }
    else {
      _DAT_01c6e2b8 = 5;
    }
    if (_DAT_01c6b5c8 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_0043bac0
                (*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return;
}
