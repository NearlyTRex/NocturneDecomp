// Name: FUN_0049c310
// Address: 0049c310
// Address Range: [[0049c310, 0049c36a]]
// Convention: unknown
// Signature: void FUN_0049c310(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0049c310(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  iVar2 = param_3;
  while (iVar2 = iVar2 + 1, iVar2 < *param_1) {
    uVar1 = FUN_0049c100(param_1,iVar2);
    FUN_0049c030(param_1,iVar3,uVar1);
    uVar1 = FUN_0049c230(param_1,iVar2);
    FUN_0049c160(param_1,iVar3,uVar1);
    iVar3 = iVar3 + 1;
  }
  FUN_00499730(param_1,param_2,param_3);
  return;
}
