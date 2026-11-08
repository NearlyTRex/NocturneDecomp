// Name: FUN_004066d0
// Address: 004066d0
// Address Range: [[004066d0, 00406884]]
// Convention: unknown
// Signature: int FUN_004066d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004066d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
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
      _DAT_01c6b5cc = (code *)&LAB_00561713;
    }
    _DAT_01c6e2b4 = 0xd3;
    FUN_004039d0(param_1);
    if (DAT_005fba38 < 0xff) {
      _DAT_01c6e2b4 = _DAT_01c6e2b4 | 0x20;
    }
    iVar5 = 0;
    _DAT_01c6e2b8 = 1;
    iVar6 = 0;
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *(int *)((int)&DAT_00730418 + iVar5) = *piVar4;
      iVar2 = piVar4[1];
      iVar3 = piVar4[2];
      if (DAT_005fba28 < 0x41) {
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
      (&DAT_0060b02c)[*piVar4 * 0xc] = iVar2;
      iVar2 = *piVar4;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 3;
      *(int *)(&DAT_0060b030 + iVar2 * 0x30) = iVar3;
    }
    FUN_0043a840(iVar6,&DAT_00730418);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
