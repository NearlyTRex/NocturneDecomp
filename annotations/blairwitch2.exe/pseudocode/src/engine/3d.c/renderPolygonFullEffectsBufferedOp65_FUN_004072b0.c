// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0
// Address: 004072b0
// Address Range: [[004072b0, 0040748d]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  int iStack_14;
  
  bVar11 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(param_1 + 8);
  if (iVar2 != 0) {
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
    piVar5 = &DAT_0070ca98;
    _DAT_01c38b54 = 0x1e7;
    _DAT_01c38b58 = 1;
    piVar7 = (int *)(param_1 + 0x18);
    for (iVar2 = 0; iVar3 = DAT_0070ca60, iVar2 < *(int *)(param_1 + 4) * 3; iVar2 = iVar2 + 3) {
      *piVar5 = *piVar7 + DAT_0070ca60;
      (&DAT_0062202c)[(*piVar7 + iVar3) * 0xc] = piVar7[1];
      piVar5 = piVar5 + 1;
      *(int *)(&DAT_00622030 + (*piVar7 + iVar3) * 0x30) = piVar7[2];
      piVar7 = piVar7 + 3;
    }
    if (((DAT_0070caf8 == 0) || (0x9c3 < DAT_0070cafc)) ||
       (iVar2 = *(int *)(param_1 + 4), 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),&DAT_0070ca98);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar3 = DAT_0070cafc * 0x118;
      DAT_0070cafc = DAT_0070cafc + 1;
      piVar7 = (int *)(&DAT_0070cb00 + iVar3);
      *piVar7 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar5 = &DAT_00622014 + *(int *)((int)&DAT_0070ca98 + iVar2) * 0xc;
          piVar9 = piVar7 + 1;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar9 = *piVar5;
            piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          if (piVar7[3] < iStack_14) {
            iStack_14 = piVar7[3];
          }
          piVar7 = piVar7 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < *(int *)(param_1 + 4));
      }
      pSVar4 = engine_texture_cpp_FUN_005750e0();
      uVar1 = DAT_006141d8;
      puVar10 = (uint *)(&DAT_0070cbc4 + iVar3);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *(uint *)pSVar4;
        pSVar4 = pSVar4 + (uint)bVar11 * -8 + 4;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_0070cc0c + iVar3) = uVar1;
      *(uint *)(&DAT_0070cc10 + iVar3) = _DAT_01c38b4c;
      *(int *)(&DAT_0070cc14 + iVar3) = iStack_14;
    }
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
