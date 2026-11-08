// Name: FUN_00404560
// Address: 00404560
// Address Range: [[00404560, 004046d1]]
// Convention: unknown
// Signature: int FUN_00404560(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404560(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 == 0) goto LAB_00404580;
  FUN_004039d0(param_1);
  if (_DAT_01c6e24c == 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) goto LAB_004045d6;
      _DAT_01c6b5cc = FUN_00562e69;
    }
    else {
      if (DAT_005fba20 != 0x20) goto LAB_00404668;
      _DAT_01c6b5cc = (code *)&LAB_00560f31;
    }
  }
  else if (_DAT_01c6e2a0 == 0) {
    if (DAT_005fba20 == 0x20) {
LAB_004045d6:
      _DAT_01c6b5cc = FUN_00562c33;
    }
    else {
      _DAT_01c6b5cc = FUN_00562e69;
    }
  }
  else if (DAT_005fba20 == 0x20) {
    _DAT_01c6b5cc = (code *)&LAB_00560f31;
  }
  else {
LAB_00404668:
    _DAT_01c6b5cc = (code *)&LAB_00561713;
  }
  piVar3 = &DAT_00730418;
  _DAT_01c6e2b8 = 1;
  _DAT_01c6e2b4 = 0xd9;
  piVar2 = (int *)(param_1 + 0x18);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
    *piVar3 = *piVar2 + DAT_007303e0;
    (&DAT_0060b02c)[(*piVar2 + DAT_007303e0) * 0xc] = piVar2[1];
    piVar3 = piVar3 + 1;
    *(int *)(&DAT_0060b030 + (*piVar2 + DAT_007303e0) * 0x30) = piVar2[2];
    piVar2 = piVar2 + 3;
  }
  FUN_0043a840(*(uint *)(param_1 + 4),&DAT_00730418);
LAB_00404580:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
