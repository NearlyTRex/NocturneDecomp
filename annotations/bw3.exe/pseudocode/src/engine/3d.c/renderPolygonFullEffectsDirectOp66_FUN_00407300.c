// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300
// Address: 00407300
// Address Range: [[00407300, 004074a8]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(int param_1)

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
    _DAT_01c6e2b8 = 1;
    _DAT_01c6e2b4 = 0x1e7;
    if (((DAT_00730478 == 0) || (0x9c3 < DAT_0073047c)) || (4 < *(int *)(param_1 + 4))) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),vertex_indices);
    }
    else {
      iVar3 = DAT_0073047c * 0x118;
      puVar6 = (uint *)(&DAT_00730480 + iVar3);
      DAT_0073047c = DAT_0073047c + 1;
      *puVar6 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar8 = &DAT_0060b014 + *vertex_indices * 0xc;
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
      pSVar4 = engine_texture_cpp_FUN_0056acf0();
      uVar1 = DAT_005fba38;
      puVar6 = (uint *)(&DAT_00730544 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar6 = *(uint *)pSVar4;
        pSVar4 = pSVar4 + (uint)bVar10 * -8 + 4;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0073058c + iVar3) = uVar1;
      *(int *)(&DAT_00730594 + iVar3) = iVar2;
      *(uint *)(&DAT_00730590 + iVar3) = _DAT_01c6e2ac;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
