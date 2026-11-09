// Name: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
// Address: 004059a0
// Address Range: [[004059a0, 00405b26]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c6e24c == 0) {
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
      _DAT_01c6e2b4 = 0xc5;
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
      _DAT_01c6e2b4 = 0xcd;
    }
    _DAT_01c6e2b8 = 1;
    piVar3 = &DAT_00730418;
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x18);
    while( true ) {
      if (*(int *)(param_1 + 4) * 3 <= iVar1) break;
      *piVar3 = *piVar2 + DAT_007303e0;
      (&DAT_0060b02c)[(*piVar2 + DAT_007303e0) * 0xc] = piVar2[1];
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + 3;
      *(int *)(&DAT_0060b030 + (*piVar2 + DAT_007303e0) * 0x30) = piVar2[2];
      piVar2 = piVar2 + 3;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),&DAT_00730418);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
