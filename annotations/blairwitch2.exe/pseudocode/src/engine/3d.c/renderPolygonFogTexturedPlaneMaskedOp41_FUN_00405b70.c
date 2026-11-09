// Name: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70
// Address: 00405b70
// Address Range: [[00405b70, 00405cf7]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c38aec == 0) {
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
      _DAT_01c38b54 = 0xc5;
    }
    else {
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
      _DAT_01c38b54 = 0xcd;
    }
    _DAT_01c38b58 = 1;
    piVar3 = &DAT_0070ca98;
    piVar2 = (int *)(param_1 + 0x18);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *piVar3 = *piVar2 + DAT_0070ca60;
      (&DAT_0062202c)[(*piVar2 + DAT_0070ca60) * 0xc] = piVar2[1];
      piVar3 = piVar3 + 1;
      *(int *)(&DAT_00622030 + (*piVar2 + DAT_0070ca60) * 0x30) = piVar2[2];
      piVar2 = piVar2 + 3;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),&DAT_0070ca98);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
