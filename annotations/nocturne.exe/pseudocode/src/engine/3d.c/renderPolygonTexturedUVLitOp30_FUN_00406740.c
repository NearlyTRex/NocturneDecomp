// Name: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00406740
// Address: 00406740
// Address Range: [[00406740, 00406833]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00406740(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00406740(int param_1)

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
    _DAT_01c039a0 = 1;
    _DAT_01c039a4 = 0;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    iVar5 = 0;
    iVar2 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) * 3; iVar4 = iVar4 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_006b029c + iVar2) = iVar1;
      (&DAT_005c502c)[iVar1 * 0xc] = piVar3[1];
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      *(int *)(&DAT_005c5030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    FUN_00432cd0(iVar5,&DAT_006b029c);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
