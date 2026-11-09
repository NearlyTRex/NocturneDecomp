// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407490
// Address: 00407490
// Address Range: [[00407490, 00407638]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *vertex_indices;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  vertex_indices = (int *)(param_1 + 0x18);
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
    _DAT_01c38b58 = 1;
    _DAT_01c38b54 = 0x1e7;
    if (((DAT_0070caf8 == 0) || (0x9c3 < DAT_0070cafc)) || (4 < *(int *)(param_1 + 4))) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(param_1 + 4),vertex_indices);
    }
    else {
      iVar3 = DAT_0070cafc * 0x118;
      puVar6 = (uint *)(&DAT_0070cb00 + iVar3);
      DAT_0070cafc = DAT_0070cafc + 1;
      *puVar6 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar8 = &DAT_00622014 + *vertex_indices * 0xc;
          puVar9 = puVar6 + 1;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          if ((int)puVar6[3] < iVar2) {
            iVar2 = puVar6[3];
          }
          puVar6 = puVar6 + 0xc;
          iVar7 = iVar7 + 1;
          vertex_indices = vertex_indices + 1;
        } while (iVar7 < *(int *)(param_1 + 4));
      }
      pSVar4 = engine_texture_cpp_FUN_005750e0();
      uVar1 = DAT_006141d8;
      puVar6 = (uint *)(&DAT_0070cbc4 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar6 = *(uint *)pSVar4;
        pSVar4 = pSVar4 + (uint)bVar10 * -8 + 4;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0070cc0c + iVar3) = uVar1;
      *(int *)(&DAT_0070cc14 + iVar3) = iVar2;
      *(uint *)(&DAT_0070cc10 + iVar3) = _DAT_01c38b4c;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
