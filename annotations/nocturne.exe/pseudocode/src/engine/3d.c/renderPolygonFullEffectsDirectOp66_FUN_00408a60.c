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
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  piVar7 = (int *)(param_1 + 0x18);
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_005300ec;
      }
      else {
        _DAT_01c00c7c = &LAB_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = &LAB_0052f031;
    }
    else {
      _DAT_01c00c7c = &LAB_0052f823;
    }
    _DAT_01c039a4 = 1;
    _DAT_01c039a0 = 0x1e7;
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) || (4 < *(int *)(param_1 + 4))) {
      engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),piVar7);
    }
    else {
      iVar3 = DAT_006b4950 * 0x118;
      puVar5 = (uint *)(&DAT_006b4954 + iVar3);
      DAT_006b4950 = DAT_006b4950 + 1;
      *puVar5 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar8 = &DAT_005c5014 + *piVar7 * 0xc;
          puVar9 = puVar5 + 1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          if ((int)puVar5[3] < iVar2) {
            iVar2 = puVar5[3];
          }
          puVar5 = puVar5 + 0xc;
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar6 < *(int *)(param_1 + 4));
      }
      puVar5 = (uint *)engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      uVar1 = DAT_005b763c;
      puVar8 = (uint *)(&DAT_006b4a18 + iVar3);
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_006b4a60 + iVar3) = uVar1;
      *(int *)(&DAT_006b4a68 + iVar3) = iVar2;
      *(uint *)(&DAT_006b4a64 + iVar3) = _DAT_01c03998;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
