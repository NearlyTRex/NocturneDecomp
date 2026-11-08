// Name: FUN_0049c470
// Address: 0049c470
// Address Range: [[0049c470, 0049c4f4]]
// Convention: unknown
// Signature: void FUN_0049c470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0049c470(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00499b20(param_1,param_2,param_3);
  iVar1 = FUN_0049c100(param_1,param_2);
  iVar2 = FUN_0049c100(param_1,param_3);
  if (iVar1 != iVar2) {
    FUN_0049c030(param_1,param_2,iVar2);
    FUN_0049c030(param_1,param_3,iVar1);
  }
  iVar1 = FUN_0049c230(param_1,param_2);
  iVar2 = FUN_0049c230(param_1,param_3);
  if (iVar1 == iVar2) {
    return;
  }
  FUN_0049c160(param_1,param_2,iVar2);
  FUN_0049c160(param_1,param_3,iVar1);
  return;
}
