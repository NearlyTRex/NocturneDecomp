// Name: FUN_005a60d0
// Address: 005a60d0
// Address Range: [[005a60d0, 005a6139]]
// Convention: unknown
// Signature: void FUN_005a60d0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_005a60d0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"MeleeAttack");
    return;
  }
  FUN_0059e8c0(param_1,param_2,param_3);
  if ((param_3 == 1) && (iVar1 = FUN_0059daa0(param_1 + 0x10af8,"MeleeAttack"), iVar1 != 0)
     ) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x180))(param_1,param_2);
    return;
  }
  return;
}
