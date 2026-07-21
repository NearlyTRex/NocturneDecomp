// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50
// Address: 00407e50
// Address Range: [[00407e50, 00408004]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
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
    _DAT_01c039a0 = 0xd3;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    if (DAT_005b763c < 0xff) {
      _DAT_01c039a0 = _DAT_01c039a0 | 0x20;
    }
    iVar5 = 0;
    _DAT_01c039a4 = 1;
    iVar6 = 0;
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *(int *)((int)&DAT_006b029c + iVar5) = *piVar4;
      iVar2 = piVar4[1];
      iVar3 = piVar4[2];
      if (DAT_005b762c < 0x41) {
        if (iVar2 < 0x40000) {
          iVar2 = 0x40000;
        }
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (0xfbffff < iVar2) {
          iVar2 = 0xfbffff;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
      }
      else {
        if (iVar2 < 0x10000) {
          iVar2 = 0x10000;
        }
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (0xfeffff < iVar2) {
          iVar2 = 0xfeffff;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
      }
      (&DAT_005c502c)[*piVar4 * 0xc] = iVar2;
      iVar2 = *piVar4;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 3;
      *(int *)(&DAT_005c5030 + iVar2 * 0x30) = iVar3;
    }
    FUN_00432cd0(iVar6,&DAT_006b029c);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
