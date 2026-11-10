// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100
// Address: 00407100
// Address Range: [[00407100, 004072ff]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(int param_1)

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
  byte bVar10;
  int iStack_14;
  
  bVar10 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
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
    piVar5 = &DAT_00730418;
    _DAT_01c6e2b4 = 0x1e7;
    _DAT_01c6e2b8 = 1;
    piVar7 = (int *)(param_1 + 0x18);
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 4) * 3; iVar2 = iVar2 + 3) {
      *piVar5 = *piVar7 + DAT_007303e0;
      iVar3 = DAT_007303e0;
      (&DAT_0060b02c)[(*piVar7 + DAT_007303e0) * 0xc] = piVar7[1];
      piVar5 = piVar5 + 1;
      *(int *)(&DAT_0060b030 + (iVar3 + *piVar7) * 0x30) = piVar7[2];
      piVar7 = piVar7 + 3;
    }
    if (((DAT_00730478 == 0) || (0x9c3 < DAT_0073047c)) ||
       (iVar2 = *(int *)(param_1 + 4), 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),&DAT_00730418);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar3 = DAT_0073047c * 0x118;
      DAT_0073047c = DAT_0073047c + 1;
      piVar7 = (int *)(&DAT_00730480 + iVar3);
      *piVar7 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar5 = &DAT_0060b014 + *(int *)((int)&DAT_00730418 + iVar2) * 0xc;
          piVar9 = piVar7 + 1;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar9 = *piVar5;
            piVar5 = piVar5 + (uint)bVar10 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          if (piVar7[3] < iStack_14) {
            iStack_14 = piVar7[3];
          }
          piVar7 = piVar7 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < *(int *)(param_1 + 4));
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_0056acf0();
      uVar1 = DAT_005fba38;
      piVar7 = (int *)(&DAT_00730544 + iVar3);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        piVar7 = piVar7 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0073058c + iVar3) = uVar1;
      *(uint *)(&DAT_00730590 + iVar3) = _DAT_01c6e2ac;
      *(int *)(&DAT_00730594 + iVar3) = iStack_14;
    }
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
