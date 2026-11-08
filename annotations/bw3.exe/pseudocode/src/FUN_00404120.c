// Name: FUN_00404120
// Address: 00404120
// Address Range: [[00404120, 0040431e]]
// Convention: unknown
// Signature: int FUN_00404120(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404120(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 == 0) goto LAB_004042ff;
  if (DAT_007303f8 == 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
LAB_00404169:
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
LAB_00404250:
      _DAT_01c6b5cc = (code *)&LAB_00561713;
    }
  }
  else if (_DAT_01c6e2a0 == 0) {
    if (DAT_005fba20 == 0x20) goto LAB_00404169;
    _DAT_01c6b5cc = FUN_00562e69;
  }
  else {
    if (DAT_005fba20 != 0x20) goto LAB_00404250;
    _DAT_01c6b5cc = (code *)&LAB_00560f31;
  }
  FUN_004039d0(param_1);
  _DAT_01c6e2b4 = 0x13;
  if (DAT_005fba38 < 0xff) {
    _DAT_01c6e2b4 = 0x33;
  }
  iVar6 = 0;
  iVar5 = 0;
  _DAT_01c6e2b8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
    *(int *)((int)&DAT_00730418 + iVar5) = *piVar4;
    iVar2 = piVar4[1];
    iVar3 = piVar4[2];
    if (_DAT_01c6cee8 == 0) {
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
    (&DAT_0060b02c)[*piVar4 * 0xc] = iVar2;
    iVar2 = *piVar4;
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 3;
    *(int *)(&DAT_0060b030 + iVar2 * 0x30) = iVar3;
  }
  FUN_0043a840(iVar6,&DAT_00730418);
LAB_004042ff:
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
