// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280
// Address: 00406280
// Address Range: [[00406280, 00406513]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (DAT_00713a74 == 0) {
      if (DAT_00713a70 == 0) {
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
        if (0x00000001 == 0) {
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
          _DAT_01c51d18 = 0;
          _DAT_01c51d14 = 0xc1;
        }
        else {
          _DAT_01c51d18 = 1;
          _DAT_01c51d14 = 0xc1;
        }
      }
      else {
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
        _DAT_01c51d14 = 0xc0;
        _DAT_01c51d18 = 1;
        engine_light_cpp_calculateLighting_FUN_004ffd40
                  (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
        _DAT_01c4f020 = engine_3d_c_lookupLitColor_FUN_00403990(DAT_00713a5c,_DAT_01c4f024);
      }
    }
    else {
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
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
    }
    piVar3 = &DAT_00713a98;
    piVar2 = (int *)(param_1 + 0x18);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *piVar3 = *piVar2 + DAT_00713a60;
      (&DAT_0062902c)[(*piVar2 + DAT_00713a60) * 0xc] = piVar2[1];
      piVar3 = piVar3 + 1;
      *(int *)(&DAT_00629030 + (*piVar2 + DAT_00713a60) * 0x30) = piVar2[2];
      piVar2 = piVar2 + 3;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(param_1 + 4),&DAT_00713a98);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
