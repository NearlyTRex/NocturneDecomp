// Name: FUN_00483cb0
// Address: 00483cb0
// Address Range: [[00483cb0, 00483d0a]]
// Convention: unknown
// Signature: void FUN_00483cb0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00483cb0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  iVar2 = param_3;
  while (iVar2 = iVar2 + 1, iVar2 < *param_1) {
    uVar1 = FUN_00483aa0(param_1,iVar2);
    FUN_004839d0(param_1,iVar3,uVar1);
    uVar1 = FUN_00483bd0(param_1,iVar2);
    FUN_00483b00(param_1,iVar3,uVar1);
    iVar3 = iVar3 + 1;
  }
  FUN_004810d0(param_1,param_2,param_3);
  return;
}
