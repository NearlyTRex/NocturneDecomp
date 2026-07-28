// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00408a60
// Address: 00408a60
// Address Range: [[00408a60, 00408c08]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(int param_1)

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
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_1 + 8));
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a4 = 1;
    _DAT_01c039a0 = 0x1e7;
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) || (4 < *(int *)(param_1 + 4))) {
      engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),piVar8);
    }
    else {
      iVar3 = DAT_006b4950 * 0x118;
      puVar6 = (uint *)(&DAT_006b4954 + iVar3);
      DAT_006b4950 = DAT_006b4950 + 1;
      *puVar6 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar9 = &DAT_005c5014 + *piVar8 * 0xc;
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
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      uVar1 = DAT_005b763c;
      piVar8 = (int *)(&DAT_006b4a18 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar8 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar11 * -8 + 4);
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_006b4a60 + iVar3) = uVar1;
      *(int *)(&DAT_006b4a68 + iVar3) = iVar2;
      *(uint *)(&DAT_006b4a64 + iVar3) = _DAT_01c03998;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
