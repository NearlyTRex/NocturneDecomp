// Name: FUN_00441710
// Address: 00441710
// Address Range: [[00441710, 004417f4]]
// Convention: unknown
// Signature: int FUN_00441710(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00441710(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x4f0;
    FUN_005030e0("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar5 = *(int *)(param_2 + 0x2320);
  if (iVar5 < 0) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x4f5;
    FUN_005030e0("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  iVar3 = *(int *)(param_1 + 0x39ce8);
  iVar6 = 0;
  if (0 < iVar3) {
    iVar5 = iVar5 * 400 + param_1;
    iVar2 = param_1;
    do {
      piVar1 = DAT_00612560;
      iVar4 = *(int *)(iVar5 + 0x39e7c) * 0x30;
      *(uint *)(iVar2 + 0x3a64c) = *(uint *)(iVar4 + 0x20 + *DAT_00612560);
      *(uint *)(iVar2 + 0x3a7dc) = *(uint *)(iVar4 + 0x24 + *piVar1);
      iVar3 = iVar2 + 4;
      *(uint *)(iVar2 + 0x3a96c) = *(uint *)(iVar4 + 0x28 + *piVar1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar2 = iVar3;
    } while (iVar6 < *(int *)(param_1 + 0x39ce8));
  }
  return iVar3;
}
