// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
// Address: 00408880
// Address Range: [[00408880, 00408a5d]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  int local_14;
  
  bVar11 = 0;
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
    piVar5 = &DAT_006b029c;
    _DAT_01c039a0 = 0x1e7;
    _DAT_01c039a4 = 1;
    piVar7 = (int *)(param_1 + 0x18);
    for (iVar2 = 0; iVar3 = DAT_006b0264, iVar2 < *(int *)(param_1 + 4) * 3; iVar2 = iVar2 + 3) {
      *piVar5 = *piVar7 + DAT_006b0264;
      (&DAT_005c502c)[(*piVar7 + iVar3) * 0xc] = piVar7[1];
      piVar5 = piVar5 + 1;
      *(int *)(&DAT_005c5030 + (*piVar7 + iVar3) * 0x30) = piVar7[2];
      piVar7 = piVar7 + 3;
    }
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) ||
       (iVar2 = *(int *)(param_1 + 4), 4 < iVar2)) {
      engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),&DAT_006b029c);
    }
    else {
      iVar8 = 0;
      local_14 = 0x7fffffff;
      iVar3 = DAT_006b4950 * 0x118;
      DAT_006b4950 = DAT_006b4950 + 1;
      piVar7 = (int *)(&DAT_006b4954 + iVar3);
      *piVar7 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar5 = &DAT_005c5014 + *(int *)((int)&DAT_006b029c + iVar2) * 0xc;
          piVar9 = piVar7 + 1;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar9 = *piVar5;
            piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          if (piVar7[3] < local_14) {
            local_14 = piVar7[3];
          }
          piVar7 = piVar7 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < *(int *)(param_1 + 4));
      }
      puVar4 = (uint *)engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      uVar1 = DAT_005b763c;
      puVar10 = (uint *)(&DAT_006b4a18 + iVar3);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_006b4a60 + iVar3) = uVar1;
      *(uint *)(&DAT_006b4a64 + iVar3) = _DAT_01c03998;
      *(int *)(&DAT_006b4a68 + iVar3) = local_14;
    }
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
