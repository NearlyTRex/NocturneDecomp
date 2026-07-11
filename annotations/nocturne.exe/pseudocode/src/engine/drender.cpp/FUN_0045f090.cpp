// Name: FUN_0045f090
// Address: 0045f090
// Address Range: [[0045f090, 0045f180]]
// Convention: unknown
// Signature: undefined4 FUN_0045f090(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0045f090(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  
  _DAT_01b4d764 = 0;
  if ((param_1[3] != 0) && (iVar2 = FUN_00404610(param_2 + 8), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < *(int *)(param_2 + 4)) {
    iVar4 = 0;
    iVar5 = param_2;
    do {
      iVar1 = *(int *)(iVar5 + 0x18);
      *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0xc;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & *(uint *)(iVar1 * 0x30 + 0x10 + *param_1);
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (param_1[1] == 0) {
      _DAT_01c039a0 = 0xc0;
      _DAT_01c039a4 = 6;
      _DAT_01c00c7c = &LAB_00464075;
    }
    else {
      _DAT_01cc4800 = "..\\engine\\drender.cpp";
      _DAT_01cc4804 = 0x29c;
      FUN_004c8440("Can't use demonZFacetCount in shadow mode!");
    }
    FUN_0045ed80(param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
    uVar3 = _DAT_01b4d764;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
