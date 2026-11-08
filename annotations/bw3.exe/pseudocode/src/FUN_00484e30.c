// Name: FUN_00484e30
// Address: 00484e30
// Address Range: [[00484e30, 00484ea2]]
// Convention: unknown
// Signature: void FUN_00484e30(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00484e30(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_004820b0(param_1,param_2,param_3);
  for (iVar2 = *param_1 + -2; param_2 < iVar2; iVar2 = iVar2 + -1) {
    uVar1 = FUN_00484ca0(param_1,iVar2 + -1);
    FUN_00484bd0(param_1,iVar2,uVar1);
    uVar1 = FUN_00484dd0(param_1,iVar2 + -1);
    FUN_00484d00(param_1,iVar2,uVar1);
  }
  FUN_00484bd0(param_1,param_2,1);
  FUN_00484d00(param_1,param_2,0xffffffff);
  return;
}
