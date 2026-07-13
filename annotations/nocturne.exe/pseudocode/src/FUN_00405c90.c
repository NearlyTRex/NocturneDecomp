// Name: FUN_00405c90
// Address: 00405c90
// Address Range: [[00405c90, 00405e01]]
// Convention: unknown
// Signature: int FUN_00405c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405c90(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_00404610(param_1 + 8);
  if (iVar1 == 0) goto LAB_00405cb0;
  FUN_00404710(param_1);
  if (_DAT_01c038f4 == 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) goto LAB_00405d06;
      _DAT_01c00c7c = &LAB_00530322;
    }
    else {
      if (DAT_005b7624 != 0x20) goto LAB_00405d98;
      _DAT_01c00c7c = &LAB_0052f031;
    }
  }
  else if (_DAT_01c03948 == 0) {
    if (DAT_005b7624 == 0x20) {
LAB_00405d06:
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
LAB_00405d98:
    _DAT_01c00c7c = &LAB_0052f823;
  }
  piVar3 = &DAT_006b029c;
  _DAT_01c039a4 = 1;
  _DAT_01c039a0 = 0xd9;
  piVar2 = (int *)(param_1 + 0x18);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
    *piVar3 = *piVar2 + DAT_006b0264;
    (&DAT_005c502c)[(*piVar2 + DAT_006b0264) * 0xc] = piVar2[1];
    piVar3 = piVar3 + 1;
    *(int *)(&DAT_005c5030 + (*piVar2 + DAT_006b0264) * 0x30) = piVar2[2];
    piVar2 = piVar2 + 3;
  }
  FUN_00432cd0(*(uint *)(param_1 + 4),&DAT_006b029c);
LAB_00405cb0:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
