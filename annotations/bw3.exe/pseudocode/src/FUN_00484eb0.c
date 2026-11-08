// Name: FUN_00484eb0
// Address: 00484eb0
// Address Range: [[00484eb0, 00484f0a]]
// Convention: unknown
// Signature: void FUN_00484eb0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00484eb0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  iVar2 = param_3;
  while (iVar2 = iVar2 + 1, iVar2 < *param_1) {
    uVar1 = FUN_00484ca0(param_1,iVar2);
    FUN_00484bd0(param_1,iVar3,uVar1);
    uVar1 = FUN_00484dd0(param_1,iVar2);
    FUN_00484d00(param_1,iVar3,uVar1);
    iVar3 = iVar3 + 1;
  }
  FUN_004822d0(param_1,param_2,param_3);
  return;
}
