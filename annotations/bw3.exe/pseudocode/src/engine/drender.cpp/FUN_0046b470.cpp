// Name: FUN_0046b470
// Address: 0046b470
// Address Range: [[0046b470, 0046b570]]
// Convention: unknown
// Signature: undefined4 FUN_0046b470(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0046b470(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  
  _DAT_01bdd810 = 0;
  if ((param_1[3] == 0) || (iVar4 = FUN_00403920(param_2 + 8), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < *(int *)(param_2 + 4)) {
      iVar3 = 0;
      iVar5 = param_2;
      do {
        iVar1 = *(int *)(iVar5 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        iVar5 = iVar5 + 0xc;
        iVar4 = iVar4 + 1;
        local_14 = local_14 & *(uint *)(iVar1 * 0x30 + 0x10 + *param_1);
      } while (iVar4 < *(int *)(param_2 + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (param_1[1] == 0) {
        _DAT_01c6e2b4 = 0xc0;
        _DAT_01c6e2b8 = 6;
        _DAT_01c6b5cc = &LAB_0046ffa5;
      }
      else {
        _DAT_01d71de0 = "..\\engine\\drender.cpp";
        _DAT_01d71de4 = 0x29d;
        FUN_004e4330("Can't use demonZFacetCount in shadow mode!");
      }
      FUN_0046b160(param_1,*(uint *)(param_2 + 4),&DAT_01bdd818);
      uVar2 = _DAT_01bdd810;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
