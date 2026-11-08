// Name: FUN_0056a870
// Address: 0056a870
// Address Range: [[0056a870, 0056a8e5]]
// Convention: unknown
// Signature: undefined4 FUN_0056a870(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0056a870(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00569eb0(param_1);
  iVar3 = *piVar1 + -2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar3 != *(int *)(param_1 + 0x2320)) {
    FUN_00569890(param_1,iVar3);
  }
  uVar2 = FUN_00569eb0(param_1,iVar3,param_2,param_3,*(uint *)(param_1 + 0x2324),
                       param_1 + 0x2140);
  uVar2 = FUN_005660c0(uVar2);
  return uVar2;
}
