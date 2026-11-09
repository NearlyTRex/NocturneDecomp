// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407562]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407470(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407470(int param_1,uint param_2,int param_3)

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
    _DAT_01c51d14 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c4f024 =
           engine_light_cpp_calculateLighting_FUN_004ffd40
                     (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    }
    _DAT_01c51d18 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c51d18 = 1;
      }
    }
    else {
      _DAT_01c51d18 = 5;
    }
    if (_DAT_01c4f028 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_0043de60
                (*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return;
}
