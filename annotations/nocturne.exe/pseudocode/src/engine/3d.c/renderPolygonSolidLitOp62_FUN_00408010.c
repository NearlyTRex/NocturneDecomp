// Name: engine_3d.c_renderPolygonSolidLitOp62_FUN_00408010
// Address: 00408010
// Address Range: [[00408010, 0040812d]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonSolidLitOp62_FUN_00408010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonSolidLitOp62_FUN_00408010(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = FUN_0052f823;
    }
    _DAT_01c039a0 = 0x13;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    if (DAT_005b763c < 0xff) {
      _DAT_01c039a0 = _DAT_01c039a0 | 0x20;
    }
    iVar5 = 0;
    iVar4 = 0;
    _DAT_01c039a4 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 4) * 3; iVar2 = iVar2 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_006b029c + iVar4) = iVar1;
      (&DAT_005c502c)[iVar1 * 0xc] = piVar3[1];
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      *(int *)(&DAT_005c5030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    engine_clipper_c_FUN_00432cd0(iVar5,&DAT_006b029c);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
