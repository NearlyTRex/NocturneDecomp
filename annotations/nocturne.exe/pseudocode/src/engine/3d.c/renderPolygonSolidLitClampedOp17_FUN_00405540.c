// Name: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00405540
// Address: 00405540
// Address Range: [[00405540, 0040573e]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 == 0) goto LAB_0040571f;
  if (DAT_006b027c == 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
LAB_00405589:
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
LAB_00405670:
      _DAT_01c00c7c = &LAB_0052f823;
    }
  }
  else if (_DAT_01c03948 == 0) {
    if (DAT_005b7624 == 0x20) goto LAB_00405589;
    _DAT_01c00c7c = &LAB_00530322;
  }
  else {
    if (DAT_005b7624 != 0x20) goto LAB_00405670;
    _DAT_01c00c7c = &LAB_0052f031;
  }
  engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
  _DAT_01c039a0 = 0x13;
  if (DAT_005b763c < 0xff) {
    _DAT_01c039a0 = 0x33;
  }
  iVar6 = 0;
  iVar5 = 0;
  _DAT_01c039a4 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
    *(int *)((int)&DAT_006b029c + iVar5) = *piVar4;
    iVar2 = piVar4[1];
    iVar3 = piVar4[2];
    if (_DAT_01c02594 == 0) {
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
    else {
      if (iVar2 < 0x20000) {
        iVar2 = 0x20000;
      }
      if (iVar3 < 0x20000) {
        iVar3 = 0x20000;
      }
      if (0xfdffff < iVar2) {
        iVar2 = 0xfdffff;
      }
      if (0xfdffff < iVar3) {
        iVar3 = 0xfdffff;
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
LAB_0040571f:
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
