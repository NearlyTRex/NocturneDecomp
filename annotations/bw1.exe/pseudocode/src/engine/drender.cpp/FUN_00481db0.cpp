// Name: FUN_00481db0
// Address: 00481db0
// Address Range: [[00481db0, 00481ea0]]
// Convention: unknown
// Signature: undefined4 FUN_00481db0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00481db0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  
  _DAT_01bc1238 = 0;
  if ((param_1[3] != 0) && (iVar2 = FUN_00403920(param_2 + 8), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < *(int *)(param_2 + 4)) {
    iVar4 = 0;
    iVar5 = param_2;
    do {
      iVar1 = *(int *)(iVar5 + 0x18);
      *(int *)(&DAT_01bc1240 + iVar4) = iVar1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0xc;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & *(uint *)(iVar1 * 0x30 + 0x10 + *param_1);
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (param_1[1] == 0) {
      _DAT_01c51d14 = 0xc0;
      _DAT_01c51d18 = 6;
      _DAT_01c4f02c = &LAB_00487425;
    }
    else {
      _DAT_01d1d400 = "..\\engine\\drender.cpp";
      _DAT_01d1d404 = 0x29d;
      FUN_005030e0("Can't use demonZFacetCount in shadow mode!");
    }
    FUN_00481aa0(param_1,*(uint *)(param_2 + 4),&DAT_01bc1240);
    uVar3 = _DAT_01bc1238;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
