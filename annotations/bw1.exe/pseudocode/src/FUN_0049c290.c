// Name: FUN_0049c290
// Address: 0049c290
// Address Range: [[0049c290, 0049c302]]
// Convention: unknown
// Signature: void FUN_0049c290(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0049c290(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_00499510(param_1,param_2,param_3);
  for (iVar2 = *param_1 + -2; param_2 < iVar2; iVar2 = iVar2 + -1) {
    uVar1 = FUN_0049c100(param_1,iVar2 + -1);
    FUN_0049c030(param_1,iVar2,uVar1);
    uVar1 = FUN_0049c230(param_1,iVar2 + -1);
    FUN_0049c160(param_1,iVar2,uVar1);
  }
  FUN_0049c030(param_1,param_2,1);
  FUN_0049c160(param_1,param_2,0xffffffff);
  return;
}
