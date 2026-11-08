// Name: FUN_004698a0
// Address: 004698a0
// Address Range: [[004698a0, 00469990]]
// Convention: unknown
// Signature: undefined4 FUN_004698a0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004698a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  
  _DAT_01ba5c7c = 0;
  if ((param_1[3] != 0) && (iVar2 = FUN_00403970(param_2 + 8), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < *(int *)(param_2 + 4)) {
    iVar4 = 0;
    iVar5 = param_2;
    do {
      iVar1 = *(int *)(iVar5 + 0x18);
      *(int *)(&DAT_01ba5c84 + iVar4) = iVar1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0xc;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & *(uint *)(iVar1 * 0x30 + 0x10 + *param_1);
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (param_1[1] == 0) {
      _DAT_01c38b54 = 0xc0;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = &LAB_0046ef35;
    }
    else {
      _DAT_01d046a0 = "..\\engine\\drender.cpp";
      _DAT_01d046a4 = 0x29d;
      FUN_004e4500("Can't use demonZFacetCount in shadow mode!");
    }
    FUN_00469590(param_1,*(uint *)(param_2 + 4),&DAT_01ba5c84);
    uVar3 = _DAT_01ba5c7c;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
