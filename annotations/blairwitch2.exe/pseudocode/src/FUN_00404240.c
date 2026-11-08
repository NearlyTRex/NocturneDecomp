// Name: FUN_00404240
// Address: 00404240
// Address Range: [[00404240, 0040443e]]
// Convention: unknown
// Signature: int FUN_00404240(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404240(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = FUN_00403970(param_1 + 8);
  if (iVar1 == 0) goto LAB_0040441f;
  if (DAT_0070ca78 == 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
LAB_00404289:
        _DAT_01c35e6c = FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = (code *)&LAB_0055b3b1;
    }
    else {
LAB_00404370:
      _DAT_01c35e6c = (code *)&LAB_0055bb93;
    }
  }
  else if (_DAT_01c38b40 == 0) {
    if (DAT_006141c0 == 0x20) goto LAB_00404289;
    _DAT_01c35e6c = FUN_0055d2e9;
  }
  else {
    if (DAT_006141c0 != 0x20) goto LAB_00404370;
    _DAT_01c35e6c = (code *)&LAB_0055b3b1;
  }
  FUN_00403a20(param_1);
  _DAT_01c38b54 = 0x13;
  if (DAT_006141d8 < 0xff) {
    _DAT_01c38b54 = 0x33;
  }
  iVar6 = 0;
  iVar5 = 0;
  _DAT_01c38b58 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
    *(int *)((int)&DAT_0070ca98 + iVar5) = *piVar4;
    iVar2 = piVar4[1];
    iVar3 = piVar4[2];
    if (_DAT_01c37788 == 0) {
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
    (&DAT_0062202c)[*piVar4 * 0xc] = iVar2;
    iVar2 = *piVar4;
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 3;
    *(int *)(&DAT_00622030 + iVar2 * 0x30) = iVar3;
  }
  FUN_00431d90(iVar6,&DAT_0070ca98);
LAB_0040441f:
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
