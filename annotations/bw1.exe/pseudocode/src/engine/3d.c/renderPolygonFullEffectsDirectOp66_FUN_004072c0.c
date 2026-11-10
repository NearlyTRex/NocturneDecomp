// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_004072c0
// Address: 004072c0
// Address Range: [[004072c0, 00407468]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_004072c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_004072c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  piVar8 = (int *)(param_1 + 0x18);
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
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
    _DAT_01c51d18 = 1;
    _DAT_01c51d14 = 0x1e7;
    if (((DAT_00713af8 == 0) || (0x9c3 < DAT_00713afc)) || (4 < *(int *)(param_1 + 4))) {
      engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(param_1 + 4),piVar8);
    }
    else {
      iVar3 = DAT_00713afc * 0x118;
      puVar6 = (uint *)(&DAT_00713b00 + iVar3);
      DAT_00713afc = DAT_00713afc + 1;
      *puVar6 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar9 = &DAT_00629014 + *piVar8 * 0xc;
          puVar10 = puVar6 + 1;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          if ((int)puVar6[3] < iVar2) {
            iVar2 = puVar6[3];
          }
          puVar6 = puVar6 + 0xc;
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar7 < *(int *)(param_1 + 4));
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_00597d00();
      uVar1 = DAT_0061b4b8;
      piVar8 = (int *)(&DAT_00713bc4 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar8 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar11 * -8 + 4);
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_00713c0c + iVar3) = uVar1;
      *(int *)(&DAT_00713c14 + iVar3) = iVar2;
      *(uint *)(&DAT_00713c10 + iVar3) = _DAT_01c51d0c;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
