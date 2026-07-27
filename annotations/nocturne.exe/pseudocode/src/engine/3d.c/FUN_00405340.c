// Name: engine_3d.c_FUN_00405340
// Address: 00405340
// Address Range: [[00405340, 00405439]]
// Convention: unknown
// Signature: int engine_3d_c_FUN_00405340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_FUN_00405340(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
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
  _DAT_01c039a0 = 1;
  _DAT_01c039a4 = 0;
  engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
  piVar3 = &DAT_006b029c;
  piVar2 = (int *)(param_1 + 0x18);
  for (iVar4 = 0; iVar1 = DAT_006b0264, iVar4 < *(int *)(param_1 + 4) * 3; iVar4 = iVar4 + 3) {
    *piVar3 = *piVar2 + DAT_006b0264;
    (&DAT_005c502c)[(*piVar2 + iVar1) * 0xc] = piVar2[1];
    piVar3 = piVar3 + 1;
    *(int *)(&DAT_005c5030 + (*piVar2 + iVar1) * 0x30) = piVar2[2];
    piVar2 = piVar2 + 3;
  }
  engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),&DAT_006b029c);
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
